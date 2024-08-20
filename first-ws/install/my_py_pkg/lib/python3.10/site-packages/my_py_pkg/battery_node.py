#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from battery_manager.srv import SetLed
from functools import partial

class BatteryNode(Node):
	def __init__(self):
		super().__init__("battery_node")

		self.battery_level = 99
		self.prev_battery_level = 99

		self.timer = self.create_timer(1, self.change_battery_status)
	def call_battery_state_server(self, led_id, state):
		client = self.create_client(SetLed, "set_led")
		while not client.wait_for_service(1.0):
			self.get_logger().warn("Waiting for server")

		request = SetLed.Request()
		request.led_id = led_id
		request.state = state

		future = client.call_async(request)
		future.add_done_callback(partial(self.callback_call_battery_state_server, led_id = led_id, state = state))
	def callback_call_battery_state_server(self, future, led_id, state):
		try:
			response = future.result()
			self.get_logger().info(str(led_id) + " - " + str(state)) 
		except Exception as e:
			self.get_logger().error("Service call failed %r" % (e,))
	def change_battery_status(self):
		if self.battery_level == 99:
			self.call_battery_state_server(2, True)
			self.change_battery()
		elif self.battery_level == 66:
			self.call_battery_state_server(2, False)
			self.call_battery_state_server(1, True)
			self.change_battery()
		elif self.battery_level == 33:
			self.call_battery_state_server(1, False)
			self.call_battery_state_server(0, True)
			self.change_battery()
		elif self.battery_level == 0:
			self.call_battery_state_server(0, False)
			self.change_battery()
	def change_battery(self):
		if self.battery_level > 0 and self.prev_battery_level >=  self.battery_level: 
			self.prev_battery_level = self.battery_level
			self.battery_level -= 33
			self.get_logger().info("Battery: " + str(self.battery_level) + "%")
		elif self.battery_level <= 66:
			self.prev_battery_level = self.battery_level
			self.battery_level += 33
			self.get_logger().info("Battery: " + str(self.battery_level) + "%")

def main(args=None):
	rclpy.init(args=args)
	node = BatteryNode()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == "__main__":
	main()
