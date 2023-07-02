# pico_pwm_motor
demo pico pwm motor c language

// demo of single pwm motor control
// code from https://www.i-programmer.info/programming/hardware/14849-the-pico-in-c-basic-pwm.html

# mkdir build
# cd build
# cmake ..
# make

# sudo openocd
#   -f interface/cmsis-dap.cfg
#   -f target/rp2040.cfg
#   -c "adapter speed 5000"
#   -c "program blink.elf verify reset exit"




