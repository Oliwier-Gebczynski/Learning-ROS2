#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node): # name must be unique
	def __init__(self):
		super().__init__("py_test") # name must be unique
		self.counter_ = 0
		self.get_logger().info("Hello ROS2")
		self.create_timer(0.5, self.timer_callback) #2Hz

	def timer_callback(self):
		self.counter_ += 1
		self.get_logger().info("Hello" + str(self.counter_))

def main(args=None):
	#start
	rclpy.init(args=args)
	node = MyNode()
	rclpy.spin(node)

	#end
	rclpy.shutdown()

if __name__ == "__main__":
	main()
