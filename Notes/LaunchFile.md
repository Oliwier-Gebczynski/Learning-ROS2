# Launch File

```
my_dir -> CmakeLists.txt, package.xml, launch
```

## CmakeLists.txt

```
install(DIRECTORY
    launch
    DESTINATION share/${PROJECT_NAME}
)
```

## package.xml

```
<exec_depend>my_py_pkg</exec_depend>
```

## In launch dir

```
touch <name>.launch.py
```

## launch file template

```python
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    remap_number_topic = ("number", "my_number")

    number_publisher_node = Node(
        package="my_py_pkg",
        executable="number_publisher",
        name="my_number_publisher", # custom name
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