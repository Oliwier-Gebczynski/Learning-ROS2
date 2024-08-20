#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from battery_manager.msg import LedStates

class BatteryLevelPublisherNode(Node):
	def __init__(self):
		super().__init__("battery_level_publisher")
		self.battery_state_ = [0,0,0]
		self.battery_level_publisher_ = self.create_publisher(LedStates, "battery_level", 10)
		self.timer_ = self.create_timer(1.0, self.publish_battery_level)
		self.get_logger().info("Battery level publisher works")

	def publish_battery_level(self):
		msg = LedStates()
		msg.led_id = 3
		msg.state = true
		self.get_logger().info("Battery status:" + str(self.battery_state_) + " ,Message: " + str(msg.led_id) + ", " + str(msg.state))
		self.battery_level_publisher_.publish(msg)

def main(args=None):
	rclpy.init(args=args)
	node = BatteryLevelNode()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == "__main__":
	main()
