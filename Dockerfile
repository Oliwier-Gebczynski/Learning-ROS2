FROM osrf/ros:humble-desktop

RUN apt-get update && apt-get upgrade -y

RUN apt-get install -y nano

RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc \
    && echo "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash" >> ~/.bashrc \
    && echo "source ~/ws/install/setup.bash" >> ~/.bashrc

RUN /bin/bash -c "source ~/.bashrc"

CMD ["/bin/bash"]