# Urdf

```
ros2 run robot_state_publisher robot_state_publisher --ros-args -p robot_description:="$(xacro my_robot.urdf)"
```

```
ros2 run joint_state_publisher_gui joint_state_publisher_gui
```

```
ros2 param get /robot_state_publisher robot_description
```

CMakeLists.txt
```
install(
    DIRECTORY urdf
    DESTINATION share/${PROJECT_NAME}/
)
```

XML launch file
```
<launch>
    <let name="urdf_path" value="$(find-pkg-share my_robot_description)/urdf/my_robot.urdf" />
    <let name="rviz_config_path" value="$(find-pkg-share my_robot_description)/rviz/config.rviz" />

    <node pkg="robot_state_publisher" exec="robot_state_publisher">
        <param name="robot_description" value="$(command 'xacro $(var urdf_path)')" />
    </node>

    <node pkg="joint_state_publisher_gui" exec="joint_state_publisher_gui" />
    <node pkg="rviz2" exec="rviz2" output="screen" args="-d $(var rviz_config_path)" />
</launch>
```

Python launch file
```
from launch import LaunchDescription
from launch_ros.parameter_descriptions import ParameterValue 
from launch.substitutions import Command
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_path 

def generate_launch_description():

    urdf_path = os.path.join(get_package_share_path('my_robot_description'), 'urdf',  'my_robot.urdf')

    robot_description = ParameterValue(Command(['xacro ', urdf_path]), value_type=str)

    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{'robot_description': robot_description}]
    )

    joint_state_publisher_gui_node = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui"
    )

    rviz2_node = Node(
        package="rviz2",
        executable="rviz2"
    )

    return LaunchDescription([
        robot_state_publisher_node,
        joint_state_publisher_gui_node,
        rviz2_node
    ])

```

To use xacro in urdf file
```
<robot name="my_robot" xmlns:xacro="http://www.ros.org/wiki/xacro"> 
```

Xacro variables
```
<xacro:property name="base_length" value="0.6" />
```

Usage
```
 <link name="base_link">
        <visual>
            <geometry>
                <box size="${base_length} 0.4 0.2" />
            </geometry>
            <origin xyz="0 0 0.1" rpy="0 0 0" />
            <material name="blue" />
        </visual>
    </link>
```