 #!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool

class NumberCounterNode(Node):
	def __init__(self):
		super().__init__("number_counter")

		self.counter = 0
		self.subscriber_ = self.create_subscription(Int64, "number", self.callback_number, 10)
		self.publisher_ = self.create_publisher(Int64, "number_count", 10)
		self.timer_ = self.create_timer(0.5, self.publish_counter)
		self.get_logger().info("Number counter works")
		self.srv = self.create_service(SetBool, "reset_counter", self.reset_counter_callback)

	def callback_number(self, msg):
		self.counter += 1
		self.get_logger().info("Received: "  + str(msg.data) + ", Counter: " +  str(self.counter))

	def publish_counter(self):
		msg = Int64()
		msg.data = int(self.counter)
		self.publisher_.publish(msg)

	def reset_counter_callback(self, request, response):
		if request.data:
			self.counter = 0
			response.success = True
			response.message = str("Counter has been reset to 0")
		else:
			response.success = False
			response.message = str("Counter reset request was false")

		self.get_logger().info(response.message)
		return response

def main(args=None):
	rclpy.init(args=args)
	node = NumberCounterNode()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == "__main__":
	main()
