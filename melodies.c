/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "melodies.h"

uint32_t get_note_duration_in_ms(float note_duration) {
    return (uint32_t)(note_duration * NOTE_DURATION);
}

void play_silent_night(uint gpio) {
    // 1
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.f));

    // 2
    tone(gpio, NOTE_E4, get_note_duration_in_ms(3.f));

    // 3
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.f));

    // 4
    tone(gpio, NOTE_E4, get_note_duration_in_ms(3.f));

    // 5
    tone(gpio, NOTE_D5, get_note_duration_in_ms(2.f));
    tone(gpio, NOTE_D5, get_note_duration_in_ms(1.f));

    // 6
    tone(gpio, NOTE_B4, get_note_duration_in_ms(3.f));

    // 7
    tone(gpio, NOTE_C5, get_note_duration_in_ms(2.f));
    tone(gpio, NOTE_C5, get_note_duration_in_ms(1.f));

    // 8
    tone(gpio, NOTE_G4, get_note_duration_in_ms(3.f));

    // 9
    tone(gpio, NOTE_A4, get_note_duration_in_ms(2.f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(1.f));

    // 10 
    tone(gpio, NOTE_C5, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_B4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(1.f));

    // 11 
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.f));

    // 12 
    tone(gpio, NOTE_E4, get_note_duration_in_ms(3.f));

    // 13
    tone(gpio, NOTE_A4, get_note_duration_in_ms(2.f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(1.f));

    // 14
    tone(gpio, NOTE_C5, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_B4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(1.f));

    // 15
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_A4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.f));

    // 16
    tone(gpio, NOTE_E4, get_note_duration_in_ms(3.f));

    // 17
    tone(gpio, NOTE_D5, get_note_duration_in_ms(2.f));
    tone(gpio, NOTE_D5, get_note_duration_in_ms(1.f));

    // 18
    tone(gpio, NOTE_F5, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_D5, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_B4, get_note_duration_in_ms(1.f));

    // 19
    tone(gpio, NOTE_C5, get_note_duration_in_ms(3.f));

    // 20
    tone(gpio, NOTE_E5, get_note_duration_in_ms(3.f));

    // 21
    tone(gpio, NOTE_C5, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_G4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_E4, get_note_duration_in_ms(1.f));

    // 22
    tone(gpio, NOTE_G4, get_note_duration_in_ms(1.5f));
    tone(gpio, NOTE_F4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_D4, get_note_duration_in_ms(1.f));

    // 23 & 24
    tone(gpio, NOTE_C4, get_note_duration_in_ms(5.f));
    // tone(gpio, <Silencio>, 2.f);
    // Fin
}

void play_la_cucaracha(uint gpio){
    // Play la cucaracha song following its notes and durations
    // 1
    tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
    tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));

    for (int i=0; i<2; i++) {
        // 2
        tone(gpio, NOTE_F4, get_note_duration_in_ms(1.5f));
        tone(gpio, NOTE_A4, get_note_duration_in_ms(1.f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));

        // 3
        tone(gpio, NOTE_F4, get_note_duration_in_ms(1.5f));
        tone(gpio, NOTE_A4, get_note_duration_in_ms(1.5f));

        // 4
        tone(gpio, NOTE_F4, get_note_duration_in_ms(1.f));
        tone(gpio, NOTE_F4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_E4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_E4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_D4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_D4, get_note_duration_in_ms(.5f));

        // 5
        tone(gpio, NOTE_C4, get_note_duration_in_ms(2.f));
        //<Silencio> 2
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));

        // 6
        tone(gpio, NOTE_E4, get_note_duration_in_ms(1.5f));
        tone(gpio, NOTE_G4, get_note_duration_in_ms(1.f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));

        // 7
        tone(gpio, NOTE_E4, get_note_duration_in_ms(1.5f));
        tone(gpio, NOTE_G4, get_note_duration_in_ms(1.5f));

        // 8
        tone(gpio, NOTE_C5, get_note_duration_in_ms(1.f));
        tone(gpio, NOTE_D5, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_C5, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_B4B, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_A4, get_note_duration_in_ms(.5f));
        tone(gpio, NOTE_G4, get_note_duration_in_ms(.5f));

        if (i == 0) {
            // In the first iteration we finish in A4, and then repeat the song
            // 9
            tone(gpio, NOTE_A4, get_note_duration_in_ms(2.f));
            tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
            tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
            tone(gpio, NOTE_C4, get_note_duration_in_ms(.5f));
            //<Silencio> 2
        } else {
            // In the second iteration we finish in F4, and then finish the song
            // 10
            tone(gpio, NOTE_F4, get_note_duration_in_ms(2.f));
        }
    }
}
