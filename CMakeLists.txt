# mkdir build
# cd build
# cmake ..
# make

# sudo openocd
#   -f interface/cmsis-dap.cfg
#   -f target/rp2040.cfg
#   -c "adapter speed 5000"
#   -c "program blink.elf verify reset exit"

cmake_minimum_required(VERSION 3.13)
set(PICO_SDK_PATH "/home/sonny/pico/pico-sdk")
set(PICO_BOARD pico)

include(pico_sdk_import.cmake)
project(pico_cpp_example C CXX ASM)
pico_sdk_init()

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
add_executable(blink src/blink.c src/motor.c)
target_link_libraries(blink pico_stdlib hardware_pwm)
pico_add_extra_outputs(blink)
