cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

# We also need PICO EXTRAS
include(pico_extras_import.cmake)

project(noisy_ornament)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project
add_executable(noisy_ornament
    melodies.c
    noisy_ornament.c
)

# Add pico_stdlib library which aggregates commonly used features
target_link_libraries(
    noisy_ornament pico_stdlib pico_tone)

# Create map/bin/hex/uf2 file in addition to ELF.
pico_add_extra_outputs(noisy_ornament)
