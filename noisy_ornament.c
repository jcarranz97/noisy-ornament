/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "melodies.h"

#define BUZZER_PIN 3


int main() {
    // Configure tone generation on BUZZER_PIN
    tone_init(BUZZER_PIN);
    while (1) {
        play_silent_night(BUZZER_PIN);
        no_tone(500);  // 500ms silence
        play_la_cucaracha(BUZZER_PIN);
  }
}
