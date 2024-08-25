# ROS2 Topics
This guide covers essential commands for interacting with topics in ROS2 using the command line, as well as how to remap topics at runtime.

## ROS2 Command Line

### List All Topics
To list all active topics in your ROS2 system, use:
```
ros2 topic list
```

### Echo a Topic
To view the messages being published on a specific topic, use:
```
ros2 topic echo /<topic_name>
```

### Get Information About a Topic
To get detailed information about a specific topic, including its publishers, subscribers, and message type, use:
```
ros2 topic info /robot_news
```

### Show Message Type Details
To display the structure of a message type used by a topic, use:
```
ros2 interface show <type> 
```
### Check Topic Frequency
To check the frequency at which messages are being published on a topic, use:
```
ros2 topic hz /robot_news
```

### Check Topic Bandwidth
To measure the bandwidth usage of a topic, use:
```
ros2 topic bw /robot_news
```
### Get Node Information
To get information about a specific node, including the topics it publishes and subscribes to, use:
```
ros2 node info /robot_news_station
```

## Remap a Topic at Runtime
To remap a topic and optionally rename a node at runtime, use the --ros-args and -r options:
```
ros2 run <package> <node_name> --ros-args -r __node:=my_station -r robot_news:=my_news
```

