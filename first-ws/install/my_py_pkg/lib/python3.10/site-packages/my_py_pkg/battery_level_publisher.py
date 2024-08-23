#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from battery_manager.msg import LedStates
from battery_manager.srv import SetLed
class BatteryLevelPublisherNode(Node):
	def __init__(self):
		super().__init__("battery_level_publisher")
		self.declare_parameter("battery_lvl", [1,1,1])
		self.battery_state_ = self.get_parameter("battery_lvl").value
		self.battery_level_publisher_ = self.create_publisher(LedStates, "battery_level", 10)
		self.timer_ = self.create_timer(1.0, self.publish_battery_level)
		self.set_led_service = self.create_service(SetLed, "set_led", self.callback_set_led)
		self.get_logger().info("Battery level publisher works")

	def publish_battery_level(self):
		msg = LedStates()
		msg.led_id = 3
		msg.state = True
		self.get_logger().info("Battery status:" + str(self.battery_state_) + " ,Message: " + str(msg.led_id) + ", " + str(msg.state))
		self.battery_level_publisher_.publish(msg)

	def callback_set_led(self, request, response):
		led_number = request.led_id
		state = request.state

		if led_number > len(self.battery_state_) or led_number < 0:
			response.switch_state = False
			return response

		if state not in [0,1]:
			response.switch_state = False
			return response

		self.battery_state_[led_number] = int(state)
		response.switch_state = True
		return response
def main(args=None):
	rclpy.init(args=args)
	node = BatteryLevelPublisherNode()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == "__main__":
	main()
