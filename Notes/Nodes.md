# ROS2 Nodes

## Node Template
Below is a template for creating a basic ROS2 node in Python. This template serves as a starting point for developing custom ROS2 nodes.
```
#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyCustomNode(Node):  # MODIFY NAME
    def __init__(self):
        super().__init__("node_name")  # MODIFY NAME

def main(args=None):
    rclpy.init(args=args)
    node = MyCustomNode()  # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

```

## Editing setup.py
To make your Python node executable through the ROS2 command line, you'll need to edit the setup.py file in your package. This file is located in the root directory of your ROS2 package.

Add the following to the entry_points section:
```
entry_points={
        'console_scripts': [
		"py_node = my_py_pkg.my_first_node:main"
        ],
    },
```
After editing setup.py, build the package using:
```
colcon build --packages-select my_py_pkg --symlink-install
```
After building, update your environment:
```
source ~/.bashrc
```
## Running the Node
Once your package is built, you can run your node with the following command:
```
ros2 run my_py_pkg py_node
```

## ROS2 Command Line

### List of Active Nodes
To see a list of all active nodes in your ROS2 system, use:
```
ros2 node list
```

### Information About a Specific Active Node
To get detailed information about a specific active node, including its publishers and subscribers, use:
```
ros2 node info /py_test
```
Replace /py_test with the name of the node you want information about.

### Rename a Node at Runtime
To rename a node when you run it, use the following command:
```
ros2 run my_py_pkg py_node --ros-args --remap __node:=abc
```


