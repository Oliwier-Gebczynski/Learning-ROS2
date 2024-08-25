# ROS2 Parameters
This guide explains how to work with parameters in ROS2, including how to list, retrieve, declare, and set parameters for your ROS2 nodes.

## Listing Parameters
To list all parameters of a running node, use the following command:
```
ros2 param list
```

## Retrieving a Parameter Value
To retrieve the value of a specific parameter from a node, use:

```
ros2 param get <node_name> <param_name>
```

## Declaring and Getting Parameters in a Node
In your Python ROS2 node, you can declare and retrieve parameters as follows:
```python
self.declare_parameter("TestNumber", <default_param>)
self.number_ = self.get_parameter("TestNumber").value
```

## Setting Parameters via the Command Line
You can set a parameter when launching a node by using the --ros-args -p option:
```
ros2 run <package_name> <node_name> --ros-args -p <param_name>:=<value>
```

