# pico-tone
Generate tones using raspberry pi pico.

# Trying it out!
Based on [Quick-start your own project](https://github.com/raspberrypi/pico-sdk/tree/master#quick-start-your-own-project)
instructions for Linux-based platforms.

1. Setup a CMake build direcory
```
$ mkdir build
$ cd build
$ cmake ..
```

2. Compile project
```
$ make -j4
```

3. Connect your Raspberry Pi Pico to your PC with `BOOTSEL` button pressed.
4. Copy `pico_tone.uf2` file to your board.
```
$ cp pico_tone.uf2 /media/juan/RPI-RP2
```
