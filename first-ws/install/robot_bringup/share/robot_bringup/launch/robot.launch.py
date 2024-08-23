from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
	ld = LaunchDescription()

	robot_names = ["C3P0", "Jander", "Daneel", "BB8", "Giskard"]
	robot_nodes = []

	for name in robot_names:
		robot_nodes.append(Node(
			package="my_py_pkg",
			executable="robot_news_station",
			name="robot_news_station"+name,
			parameters=[
				{"robot_name": name}
			]))

	smartphone = Node(
		package="my_py_pkg",
		executable="smartphone",
		name="smartphone"
	)

	for node in robot_nodes:
		ld.add_action(node)
	ld.add_action(smartphone)
	return ld

