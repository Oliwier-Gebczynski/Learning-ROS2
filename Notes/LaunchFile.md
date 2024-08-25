# ROS2 Launch File
This guide outlines the process of creating and configuring a launch file in a ROS2 package. A launch file is used to start multiple nodes with specific configurations, making it easier to manage complex robot systems.

## Project Structure
Your ROS2 package should have the following structure:
```
my_dir
├── CMakeLists.txt
├── package.xml
└── launch
    └── <name>.launch.py
```

### CMakeLists.txt
In your CMakeLists.txt file, you need to ensure that the launch directory is installed correctly when building your package. Add the following section to handle the installation:
```
install(DIRECTORY
    launch
    DESTINATION share/${PROJECT_NAME}
)
```

### package.xml
In the package.xml file, specify any package dependencies required by your launch file. For example, if your launch file runs a node from the my_py_pkg package, include the following dependency:
```
<exec_depend>my_py_pkg</exec_depend>
```

## Creating a Launch File
To create a new launch file, navigate to the launch directory and create a new file with the .launch.py extension:
```
touch <name>.launch.py
```

## Launch File Template
Here is a template for a basic ROS2 launch file:

```
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    remap_number_topic = ("number", "my_number")

    number_publisher_node = Node(
        package="my_py_pkg",
        executable="number_publisher",
        name="my_number_publisher",  # Custom node name
        remappings=[
            remap_number_topic
        ],
        parameters=[
            {"number_to_publish": 4},
            {"publish_frequency": 5}
        ]
    )

    ld.add_action(number_publisher_node)

    return ld
```

### Using the Launch File
To use the launch file, you can execute it using the ros2 launch command:
```
ros2 launch <package_name> <name>.launch.py
```