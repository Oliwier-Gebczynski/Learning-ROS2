# Learning-ROS2

# Docker container
## Run
```
docker run -it --rm \
  --net=host \
  --env="DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
  --name ros2 \
  -v /home/opg/Github/Learning-ROS2/first-ws:/ws \
  osrf/ros:humble-desktop
```
## Enter to active container 
```
docker exec -it ros2 bash
```

## Source setup.bash
```
source /opt/ros/humble/setup.bash
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
source /ws/install/local_setup.bash
```
## Install colcon
```
sudo apt install python3-colcon-common-extensions
```

## Basic ROS2 test 
```
ros2 run demo_nodes_cpp talker
```


# ROS2 Node
## Template for python Node
```
    #!/usr/bin/env python3
    import rclpy
    from rclpy.node import Node
     
     
    class MyCustomNode(Node): # MODIFY NAME
        def __init__(self):
            super().__init__("node_name") # MODIFY NAME
     
     
    def main(args=None):
        rclpy.init(args=args)
        node = MyCustomNode() # MODIFY NAME
        rclpy.spin(node)
        rclpy.shutdown()
     
     
    if __name__ == "__main__":
        main()
```

# RQT Graph

## Do it on local machine
```
xhost +local:docker
```

