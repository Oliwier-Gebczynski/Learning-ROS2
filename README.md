# Learning-ROS2

## Overview
Welcome to the Learning-ROS2 repository! This repository is dedicated to learning and experimenting with ROS2 (Robot Operating System 2) as part of the course [ROS2 for Beginners](https://www.udemy.com/course/ros2-for-beginners/?couponCode=SKILLS4SALEA) on Udemy. The repository contains essential setup instructions, Docker configurations, and templates to help you get started with ROS2 development quickly.

## Docker Setup

### Build the Docker Image
To create a Docker image with ROS2, run the following command:
```
docker build -t ros2 .
```

### Run the Docker Container
Launch a ROS2 Docker container using the following command:
```
docker run -it --rm \
  --net=host \
  --env="DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
  --name ros2 \
  -v /home/opg/Github/Learning-ROS2/first-ws:/ws \
  ros2
```
Explanation:

-    --net=host: Shares the network stack with the host, allowing ROS2 nodes to communicate.
-    --env="DISPLAY": Passes the display environment variable for GUI applications.
-   --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw": Allows GUI applications running in Docker to connect to the X server on the host.
-   --name ros2: Names the container ros2.
-   -v /home/opg/Github/Learning-ROS2/first-ws:/ws: Mounts the ROS2 workspace directory from the host to the container.

### Accessing the Running Container
To enter the active ROS2 Docker container, run:

### Setting Up the Environment
After accessing the container, source the necessary ROS2 setup files:
```
source /opt/ros/humble/setup.bash
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
source /ws/install/local_setup.bash

```
(it's already in Dockerfile)

### Installing Colcon
Colcon is a command-line tool for building and managing ROS2 workspaces. Install it using:
```
sudo apt install python3-colcon-common-extensions
```

### Basic ROS2 Test
To verify your ROS2 installation, run a simple ROS2 node:
```
ros2 run demo_nodes_cpp talker
```
This command starts a basic ROS2 publisher node that repeatedly sends out messages.

## RQT Graph
If you're running the RQT Graph GUI on your local machine, allow Docker to access your X server by running:
```
xhost +local:docker
```

