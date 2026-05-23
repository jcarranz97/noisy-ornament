/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#include "melodies.h"

uint32_t note_duration_in_ms = 500;

uint32_t get_note_duration_in_ms(float note_duration) {
    return (uint32_t)(note_duration * note_duration_in_ms);
}

void play_tone(uint gpio, uint32_t frequency, float duration) {
    tone(gpio, frequency, get_note_duration_in_ms(duration));
    no_tone(gpio);
    sleep_ms(SILENCE_AFTER_NOTE);
}

void play_silent_night(uint gpio) {
    // 1
    play_tone(gpio, NOTE_G4, 1.5f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, 1.f);

    // 2
    play_tone(gpio, NOTE_E4, 3.f);

    // 3
    play_tone(gpio, NOTE_G4, 1.5f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, 1.f);

    // 4
    play_tone(gpio, NOTE_E4, 3.f);

    // 5
    play_tone(gpio, NOTE_D5, 2.f);
    play_tone(gpio, NOTE_D5, 1.f);

    // 6
    play_tone(gpio, NOTE_B4, 3.f);

    // 7
    play_tone(gpio, NOTE_C5, 2.f);
    play_tone(gpio, NOTE_C5, 1.f);

    // 8
    play_tone(gpio, NOTE_G4, 3.f);

    // 9
    play_tone(gpio, NOTE_A4, 2.f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 10 
    play_tone(gpio, NOTE_C5, 1.5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 11 
    play_tone(gpio, NOTE_G4, 1.5f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, 1.f);

    // 12 
    play_tone(gpio, NOTE_E4, 3.f);

    // 13
    play_tone(gpio, NOTE_A4, 2.f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 14
    play_tone(gpio, NOTE_C5, 1.5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 15
    play_tone(gpio, NOTE_G4, 1.5f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, 1.f);

    // 16
    play_tone(gpio, NOTE_E4, 3.f);

    // 17
    play_tone(gpio, NOTE_D5, 2.f);
    play_tone(gpio, NOTE_D5, 1.f);

    // 18
    play_tone(gpio, NOTE_F5, 1.5f);
    play_tone(gpio, NOTE_D5, .5f);
    play_tone(gpio, NOTE_B4, 1.f);

    // 19
    play_tone(gpio, NOTE_C5, 3.f);

    // 20
    play_tone(gpio, NOTE_E5, 3.f);

    // 21
    play_tone(gpio, NOTE_C5, 1.5f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_E4, 1.f);

    // 22
    play_tone(gpio, NOTE_G4, 1.5f);
    play_tone(gpio, NOTE_F4, .5f);
    play_tone(gpio, NOTE_D4, 1.f);

    // 23 & 24
    play_tone(gpio, NOTE_C4, 5.f);
    // play_tone(gpio, <Silencio>, 2.f;
    // Fin
}

void play_la_cucaracha(uint gpio){
    // Play la cucaracha song following its notes and durations
    // 1
    play_tone(gpio, NOTE_C4, .5f);
    play_tone(gpio, NOTE_C4, .5f);
    play_tone(gpio, NOTE_C4, .5f);

    for (int i=0; i<2; i++) {
        // 2
        play_tone(gpio, NOTE_F4, 1.5f);
        play_tone(gpio, NOTE_A4, 1.f);
        play_tone(gpio, NOTE_C4, .5f);
        play_tone(gpio, NOTE_C4, .5f);
        play_tone(gpio, NOTE_C4, .5f);

        // 3
        play_tone(gpio, NOTE_F4, 1.5f);
        play_tone(gpio, NOTE_A4, 1.5f);

        // 4
        play_tone(gpio, NOTE_F4, 1.f);
        play_tone(gpio, NOTE_F4, .5f);
        play_tone(gpio, NOTE_E4, .5f);
        play_tone(gpio, NOTE_E4, .5f);
        play_tone(gpio, NOTE_D4, .5f);
        play_tone(gpio, NOTE_D4, .5f);

        // 5
        play_tone(gpio, NOTE_C4, 2.f);
        //<Silencio> 2
        play_tone(gpio, NOTE_C4, .5f);
        play_tone(gpio, NOTE_C4, .5f);
        play_tone(gpio, NOTE_C4, .5f);

        // 6
        play_tone(gpio, NOTE_E4, 1.5f);
        play_tone(gpio, NOTE_G4, 1.f);
        play_tone(gpio, NOTE_C4, .5f);
        play_tone(gpio, NOTE_C4, .5f);
        play_tone(gpio, NOTE_C4, .5f);

        // 7
        play_tone(gpio, NOTE_E4, 1.5f);
        play_tone(gpio, NOTE_G4, 1.5f);

        // 8
        play_tone(gpio, NOTE_C5, 1.f);
        play_tone(gpio, NOTE_D5, .5f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_G4, .5f);

        if (i == 0) {
            // In the first iteration we finish in A4, and then repeat the song
            // 9
            play_tone(gpio, NOTE_A4, 2.f);
            play_tone(gpio, NOTE_C4, .5f);
            play_tone(gpio, NOTE_C4, .5f);
            play_tone(gpio, NOTE_C4, .5f);
            //<Silencio> 2
        } else {
            // In the second iteration we finish in F4, and then finish the song
            // 10
            play_tone(gpio, NOTE_F4, 2.f);
        }
    }
}

void play_el_ninio_del_tambor(uint gpio) {
    // Play el ninio del tambor song following its notes and durations
    // 1
    play_tone(gpio, NOTE_G4, 3.f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 2
    play_tone(gpio, NOTE_B4, 2.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);

    // 3 & 4
    play_tone(gpio, NOTE_C5, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_C5, 1.f);
    play_tone(gpio, NOTE_B4, 2.f + 3.f);
		// <silence> 1

		// 5
		// <silence> 1
    play_tone(gpio, NOTE_G4, 1.f);
    play_tone(gpio, NOTE_G4, 1.f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 6
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
		
    //7 & 8
    play_tone(gpio, NOTE_C5, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_C5, 1.f);
    play_tone(gpio, NOTE_B4, 2.f + 3.f);

    //9
    play_tone(gpio, NOTE_A4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_C5, 1.f);
    
    //10
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_E5, 1.f);

    //11 & 12
    play_tone(gpio, NOTE_D5, .5f);
    play_tone(gpio, NOTE_C5, .5f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_A4, 2.f+3.f);

    // 13
    play_tone(gpio, NOTE_A4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_C5, 1.f);

    // 14
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_E5, 1.f);

    // 15
    play_tone(gpio, NOTE_F5, .5f);
    play_tone(gpio, NOTE_E5, .5f);
    play_tone(gpio, NOTE_D5, 1.f);
    play_tone(gpio, NOTE_C5, 2.f);

    // 16
    play_tone(gpio, NOTE_E5, .5f);
    play_tone(gpio, NOTE_D5, .5f);
    play_tone(gpio, NOTE_C5, 1.f);
    play_tone(gpio, NOTE_B4, 2.f);

    // 17 & 18
    play_tone(gpio, NOTE_D5, .5f);
    play_tone(gpio, NOTE_C5, .5f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_A4, 2.f+3.F);

    // 19
    play_tone(gpio, NOTE_G4, 2.f);
    play_tone(gpio, NOTE_A4, 1.f);

    // 20
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);
    play_tone(gpio, NOTE_B4, 1.f);

    // 21 & 22
    play_tone(gpio, NOTE_C5, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_C5, 1.f);
    play_tone(gpio, NOTE_B4, 2.f+3.f);

    // 23 & 24
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_A4, 1.f);
    play_tone(gpio, NOTE_G4, 2.f+4.f);

}


void play_peces_en_el_rio(uint gpio) {
    // Play los peces en el rio
    for (int i=0; i<2; i++) {
        // 1
        play_tone(gpio, NOTE_B4B, 1.f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 2
        play_tone(gpio, NOTE_B4B, 1.f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_G4, .5f);

        // 3
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_G4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_F4S, .5f);

        // 4
        play_tone(gpio, NOTE_D4, 1.f);
        sleep_ms(get_note_duration_in_ms(1.f));

        // 5
        play_tone(gpio, NOTE_C5, 1.f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_C5, .5f);

        // 6
        play_tone(gpio, NOTE_C5, 1.f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 7
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 8
        play_tone(gpio, NOTE_G4, 1.f);
        sleep_ms(get_note_duration_in_ms(1.f));

        // 9
        play_tone(gpio, NOTE_B4B, 1.f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 10
        play_tone(gpio, NOTE_B4B, 1.f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_G4, .5f);

        // 11
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_G4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_F4S, .5f);

        // 12
        play_tone(gpio, NOTE_D4, 1.f);
        sleep_ms(get_note_duration_in_ms(1.f));

        // 13
        play_tone(gpio, NOTE_C5, 1.f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_C5, .5f);

        // 14
        play_tone(gpio, NOTE_C5, 1.f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 15
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 16
        play_tone(gpio, NOTE_G4, 1.f);
        sleep_ms(get_note_duration_in_ms(.5f));

        // 17
        play_tone(gpio, NOTE_G4, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 18
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 19
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_B4B, .5f);
        sleep_ms(get_note_duration_in_ms(.5f));
        play_tone(gpio, NOTE_B4B, .5f);

        // 20
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4, .5f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 21
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        sleep_ms(get_note_duration_in_ms(.5f));
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 22
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4, .5f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 23
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        sleep_ms(get_note_duration_in_ms(.5f));
        play_tone(gpio, NOTE_G4, .5f);

        // 24
        play_tone(gpio, NOTE_F4S, .5f);
        play_tone(gpio, NOTE_G4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 25
        play_tone(gpio, NOTE_G4, .5f);
        play_tone(gpio, NOTE_G4, .5f);
        sleep_ms(get_note_duration_in_ms(1.f));

        // 26
        play_tone(gpio, NOTE_B4B, 1.f);
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_A4, .5f);

        // 27
        play_tone(gpio, NOTE_B4B, .5f);
        play_tone(gpio, NOTE_B4B, .5f);
        sleep_ms(get_note_duration_in_ms(.5f));
        play_tone(gpio, NOTE_B4B, .5f);

        // 28
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4, .5f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 29
        play_tone(gpio, NOTE_A4, 1.f);
        sleep_ms(get_note_duration_in_ms(.5f));
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 30
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4, .5f);
        play_tone(gpio, NOTE_C5, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 31
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        sleep_ms(get_note_duration_in_ms(.5f));
        play_tone(gpio, NOTE_G4, .5f);

        // 32
        play_tone(gpio, NOTE_F4S, .5f);
        play_tone(gpio, NOTE_G4, .5f);
        play_tone(gpio, NOTE_A4, .5f);
        play_tone(gpio, NOTE_B4B, .5f);

        // 33
        play_tone(gpio, NOTE_G4, .1f);
        sleep_ms(get_note_duration_in_ms(1.f));
    }
}

void con_mi_burrito_sabanero(uint gpio) {
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            // 1
            sleep_ms(get_note_duration_in_ms(.5f));
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);

            // 2
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);

            // 3
            play_tone(gpio, NOTE_C5, .5 + .25f);
            play_tone(gpio, NOTE_C5, .5f);
            play_tone(gpio, NOTE_C5, .5f);
            play_tone(gpio, NOTE_C5, .5f);

            // 4
            play_tone(gpio, NOTE_A4, .5f);
            play_tone(gpio, NOTE_A4, .5f);
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_A4, .5f);
            play_tone(gpio, NOTE_B4, .5f);
        }
        for (int j=0; j<2; j++) {
            // 5
            sleep_ms(get_note_duration_in_ms(1.f));
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);

            // 6
            play_tone(gpio, NOTE_E4, 1.f);
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);

            // 7
            play_tone(gpio, NOTE_D4, 1.f);
            play_tone(gpio, NOTE_B4, .5f);
            play_tone(gpio, NOTE_B4, .5f);

            // 8
            play_tone(gpio, NOTE_A4, .5f);
            play_tone(gpio, NOTE_A4, .5f);

            // 9
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);
            play_tone(gpio, NOTE_G4, .5f);
        }
    }
}

void play_mi_burrito_sabanero(uint gpio) {
    // Play mi burrito sabanero
    con_mi_burrito_sabanero(gpio);
    /// Dunki dunki dunki dunki
    // 10
    sleep_ms(get_note_duration_in_ms(1.f));
    sleep_ms(get_note_duration_in_ms(1.f));

    // 11 & 12
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f + .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 13
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    sleep_ms(get_note_duration_in_ms(1.f));
    
    // 14
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f + .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 15
    play_tone(gpio, NOTE_G4, 1.f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 16
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, .5f);

    // 17
    play_tone(gpio, NOTE_A4, 1.f);
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 18
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_E4, .5f);

    // 19
    play_tone(gpio, NOTE_D4, 1.f);
    sleep_ms(get_note_duration_in_ms(1.f));
    
    // 20
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f + .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 21
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    sleep_ms(get_note_duration_in_ms(1.f));

    // 22
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f + .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 23
    play_tone(gpio, NOTE_G4, 1.f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);

    // 24
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_G4, .5f);

    // 25
    play_tone(gpio, NOTE_B4, .5f);
    play_tone(gpio, NOTE_G4, .5f);

    // 26
    play_tone(gpio, NOTE_D4, .5f);
    play_tone(gpio, NOTE_B4, .5f);

    // 27
    play_tone(gpio, NOTE_A4, .5f);
    play_tone(gpio, NOTE_G4, .5f);

    // 28
    play_tone(gpio, NOTE_G4, .5f);
    play_tone(gpio, NOTE_A4, .5f);

    // 29
    play_tone(gpio, NOTE_G4, .5f);
    sleep_ms(get_note_duration_in_ms(1.5f));

    // 30
    con_mi_burrito_sabanero(gpio);
}
