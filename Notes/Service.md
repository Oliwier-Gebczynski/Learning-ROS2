# ROS2 Services
This guide explains how to work with services in ROS2, including how to call a service, use various service-related commands, and rename a service at runtime.

## Calling a Service
To call a service in ROS2, you can use the ros2 service call command. For example, to call a service that adds two integers:

```
ros2 service call /add_two_ints example_interfaces/srv/AddTwoInts "{a: 3, b: 4}"
```
## ROS2 Service Commands
ROS2 provides several commands to interact with services. You can list, call, find, or get the type of services using the following commands:

```
ros2 service <list|call|find|type>
```
Explanation:

-   ros2 service list: Lists all available services in the ROS2 system.
-   ros2 service call: Calls a specific service with the given request data.
-   ros2 service find <service_type>: Finds all services of a specified type.
-   ros2 service type <service_name>: Gets the type of a specific service.


## Renaming a Service at Runtime
You can rename a service when launching a node using the --ros-args --remap option. For example, if you have a service called add_two_ints and want to rename it to new_name, use the following command:
```
ros2 rum my_py_pkg add_two_ints_server --ros-args add_two_ints:=new_name
```