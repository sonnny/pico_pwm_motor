# pico_pwm_motor<br>
demo pico pwm motor c language<br>
<br>
demo of single pwm motor control<br>
code from https://www.i-programmer.info/programming/hardware/14849-the-pico-in-c-basic-pwm.html<br>
<br>
mkdir build<br>
cd build<br>
cmake ..<br>
make<br>
<br>
sudo openocd<br>
  -f interface/cmsis-dap.cfg<br>
  -f target/rp2040.cfg<br>
  -c "adapter speed 5000"<br>
  -c "program blink.elf verify reset exit"<br>




