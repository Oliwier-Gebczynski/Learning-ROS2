# Learning-ROS2

# Docker container
## Run
```
docker run -it --rm \
  --name ros2 \
  -v /Github/Learning-ROS2/first-ws:/ws \
  osrf/ros:humble-desktop
```
## Source setup.bash
```
source /opt/ros/humble/setup.bash
```
## Basic ROS2 test 
```
ros2 run demo_nodes_cpp talker
```



