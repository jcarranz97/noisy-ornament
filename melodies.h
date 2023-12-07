/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _MELODIES_H
#define _MELODIES_H

#include "pico/stdlib.h"
#include "pico/tone.h"
#include "notes.h"

/** \file melodies.h
 *
 * Some simple melodies to play on the Noisy Ornament
 *
 */

// NOTE_DURATION is the speed of each note in ms
#define NOTE_DURATION  400U  // Speed of each note in ms
#define SILENCE_AFTER_NOTE  10U  // Speed of each note in ms


/*! \brief Convert a note duration to millisends
 *
 * The note duration is a floating point number associated with the note. For
 * example, a quarter note has a duration of 1.0, a half note has a duration of
 * 2.0, and a whole note has a duration of 4.0.
 *
 * \param note_duration The duration of the note in seconds
 * \return The duration of the note in milliseconds
 */
uint32_t get_note_duration_in_ms(float note_duration);

/*! \brief play_tone with a small silence after the note to distinguish between notes
 *
 * \param gpio The GPIO pin to play the note on
 * \param note The note to play
 * \param note_duration The duration of the note in seconds
 */
void play_tone(uint gpio, uint32_t frequency, float duration);

/*! \brief Play 'Silent Night' on the given GPIO pin
 *
 *   .:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:.
 *   .                                                     .
 *   .        *        Song: Noche de Paz (Silent Night)   .
 *   .       /.\       Instrument: Buzzer                  .
 *   .      /..'\      Interpreter: Raspberry Pi Pico      .
 *   .      /'.'\                                 _        .
 *   .     /.''.'\                              _[ ]_      .
 *   .     /.'.'.\         Merry Christmas!      (")       .
 *   .    /'.''.'.\          Feliz Navidad!  `__( : )--'   .
 *   .    ^^^[_]^^^                            (  :  )     .
 *   .                                       ""`-...-'""   .
 *   .                                                     .
 *   .:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:._.:*~*:.
 *
 * \param gpio The GPIO pin to play the melody on
 */
void play_silent_night(uint gpio);

/*! \bried Play 'La cucaracha' on the given GPIO pin
 *
 *                _-'-_
 *               /_-_-_\
 *       _______|-_-_-_-|________
 *      (________________________)
 *      ! ! ! ! ! ! ! ! ! ! ! ! !
 *            /     (*   |
 *            \_)       /-.
 *              '_.`    \  \
 *               `.      |  \
 *                |       \ |
 *            .--/`-.     / /
 *          .'.-/`-. `.  .\|
 *         /.' /`._ `-    '-.
 *    ____(|__/`-..`-   '-._ \
 *   |`------.'-._ `      ||\ \
 *   || #   /-.   `   /   || \|
 *   ||   #/   `--'  /  /_::_|)__
 *   `|____|-._.-`  /  ||`--------`
 *         \-.___.` | / || #      |
 *          \       | | ||   #  # |
 *          /`.___.'\ |.`|________|
 *          | /`.__.'|'.`
 *        __/ \    __/ \
 *       /__.-.)  /__.-.)
 *
 * \param gpio The GPIO pin to play the melody on
 */
void play_la_cucaracha(uint gpio);

/*! \bried Play 'El ninio del tambor (rompomponpon)' on the given GPIO pin
 *
 * \param gpio The GPIO pin to play the melody on
 */
void play_el_ninio_del_tambor(uint gpio);


/*! \bried Play 'Peces en el rio' on the given GPIO pin
 *
 * \param gpio The GPIO pin to play the melody on
 */
void play_peces_en_el_rio(uint gpio);

#endif
