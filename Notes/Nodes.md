# Nodes

## Edit setup.py
```
entry_points={
        'console_scripts': [
		"py_node = my_py_pkg.my_first_node:main"
        ],
    },
```
Then:
```
colcon build --packages-select my_py_pkg --symlink-install

source ~/.bashrc
```
## Run node 
ros2 run my_py_pkg py_node

## ROS2 command line

### List of active nodes
```
ros2 node list
```

### Info about specific active node (subscribers/publishers)
```
ros2 node info /py_test
```

### Rename a Node at Runtime
```
ros2 run my_py_pkg py_node --ros-args --remap __node:=abc
```


