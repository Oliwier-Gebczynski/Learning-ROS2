```
ros2 run robot_state_publisher robot_state_publisher --ros-args -p robot_description:="$(xacro my_robot.urdf.xacro)"
```

```
ros2 launch gazebo_ros gazebo.launch.py
```

```
ros2 run gazebo_ros spawn_entity.py -topic robot_description -entity my_robot
```