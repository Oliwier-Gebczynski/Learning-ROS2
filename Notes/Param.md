# Parameters 

```
ros2 param list
```

```
ros2 param get <node_name> <param_name>
```

```python
self.declare_parameter("TestNumber")
self.number_ = self.get_parameter("TestNumber")
```

```
ros2 run <package_name> <node_name> --ros-args -p <param_name>:=<value>
```

