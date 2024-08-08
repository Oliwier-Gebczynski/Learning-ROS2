# Topic

## ROS 2 command line 

```
ros2 topic list
```

```
ros2 topic echo /<topic_name>
```

```
ros2 topic info /robot_news
```

```
ros2 interface show <type> 
```
example_interfaces/msg/String

```
ros2 topic hz /robot_news
```

```
ros2 topic bw /robot_news
```

```
ros2 node info /robot_news_station
```

## Remap a Topic at Runtime

```
ros2 run <package> <node_name> --ros-args -r __node:=my_station -r robot_news:=my_news
```