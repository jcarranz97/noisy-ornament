# Noisy Ornament :speaker::christmas_tree::notes:
Generate tones by using `tone` library in your [Raspberry Pi Pico](https://projects.raspberrypi.org/en/projects/getting-started-with-the-pico).

The idea of this project is to use your [Raspberry Pi Pico](https://www.raspberrypi.com/products/raspberry-pi-pico/) to generate christmas melodies
so that you can put your board next to your christmas three and (Or as an Ornament) to
have good memories from your childhood :christmas_tree:.

If you want to compile this project, you need to use [this forked version](https://github.com/jcarranz97/pico-extras) of
[`pico-extras`](https://github.com/raspberrypi/pico-extras) which includes [`pico_tone`](https://github.com/jcarranz97/pico-extras/tree/master/src/rp2_common/pico_tone) library to generate tones.

There is a [PR](https://github.com/raspberrypi/pico-extras/pull/70) open to include `pico_tone` by default in the `pico-extras` library.
In the meantime, it is possible to use the forked version of it.

[`pico_tone`](https://github.com/jcarranz97/pico-extras/tree/master/src/rp2_common/pico_tone) uses Pulse With Modulation (PWM)
to generate tones, similar to [`tone()`](https://www.arduino.cc/reference/en/language/functions/advanced-io/tone/) from [Arduino](https://www.arduino.cc/).

## Included Melodies 
1. [Noche de Paz](https://youtu.be/5daRCsbNbCY?si=0ynJ5DoZLcHSYWgX) :crescent_moon::christmas_tree: (_Silent Night_)
2. [El Ninio del Tambor](https://youtu.be/wsMXWFXqSFE?si=DsfSel4m0bFxvVdt) :child::drum:: (_Rompomponpon_)
3. [La Cucaracha](https://youtu.be/BZ3bY_j_11I?si=7EHdJrBd9Wp2K_e8) :cockroach::mexico:

## Trying it out!
Follow the [Quick-start your own project](https://github.com/raspberrypi/pico-sdk/tree/master#quick-start-your-own-project) from [`pico-sdk`](https://github.com/raspberrypi/pico-sdk)
to make sure your environment is setup correctly.

Below instructions are for Linux base platforms.

1. Clone `pico-extras` and `noisy-ornament` repositories.
```
$ git clone https://github.com/jcarranz97/pico-extras.git
$ git clone https://github.com/jcarranz97/noisy-ornament.git
```
2. Create `PICO_EXTRAS_PATH` environment variable with the path where [`pico-extras`](https://github.com/raspberrypi/pico-extras) was cloned.
```
$ export PICO_EXTRAS_PATH=$(pwd)/pico-extras
```
3. Change directory to noisy-ornament and setup a CMake build directory.
```
$ cd noisy-ornament
$ mkdir build
$ cd build
$ cmake ..
```
4. Compile project.
```
$ make -j(nproc)
```
5. Connect your Raspberry Pi Pico to your PC with `BOOTSEL` button pressed.
6. Copy `noisy_ornament.uf2` file to your board.
```
$ cp noisy_ornament.uf2 <RPI-RP2 mount folder>
```
In my case, my Raspberry Pi Pico is always mounted under `/media/juan/RPI-RP2`
