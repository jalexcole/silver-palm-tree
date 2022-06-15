FROM gitpod/workspace-full

RUN sudo apt install build-essential git
RUN sudo apt install cmake

RUN sudo apt install libasound2-dev mesa-common-dev libx11-dev libxrandr-dev libxi-dev xorg-dev libgl1-mesa-dev libglu1-mesa-dev
RUN cd raylib &\
mkdir build && cd build & \
cmake -DBUILD_SHARED_LIBS=ON .. & \
make & \
sudo make install

