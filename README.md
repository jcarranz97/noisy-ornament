# Noisy Ornament :speaker::christmas_tree::notes:
Generate tones using Raspberry Pi Pico.

If you want to compile this project, you need to use [this forked version](https://github.com/jcarranz97/pico-sdk) of
pico-sdk. 

I am currently in the process of making the changes need to include the tone
library as part of the [`pico-extras`](https://github.com/raspberrypi/pico-extras) and
[`pico-playground`](https://github.com/raspberrypi/pico-playground) repos.

## Trying it out!
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
4. Copy `noisy_ornament.uf2` file to your board.
```
$ cp noisy_ornament.uf2 /media/juan/RPI-RP2
```
