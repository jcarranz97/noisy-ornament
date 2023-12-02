/*
  Raspberry Pi Pico SDK PWM Example

  https://wokwi.com/projects/326847710095213139

  Generates two 250khZ PWM signal (1 MHz clock, 4 cycle period) on pins 0, 1

  Use the logic analyzer to view the signals: https://docs.wokwi.com/guides/logic-analyzer
*/

#include "pico/stdlib.h"
#include "hardware/pwm.h"

#define BUZZER_PIN 3
#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440
#define B4 494
#define C5 523
#define D5 587
#define E5 659
#define F5 698

#define SILENCE 10U  // 10 ms of silence after each note
#define SPEED 400U  // Speed of each note in ms


void play_tone(uint gpio, uint16_t freq, float duration) {
  float clkdiv = (1/ (float) freq)*2000; // Calculate clock divider
  uint slice_num = pwm_gpio_to_slice_num(BUZZER_PIN);
  pwm_set_clkdiv(slice_num, clkdiv);
  // Configure duty to 50% ((2**16-1)/2)
  pwm_set_gpio_level(BUZZER_PIN, 32768U);
  sleep_ms((uint32_t) SPEED * duration);
  pwm_set_gpio_level(BUZZER_PIN, 0);
  sleep_ms(SILENCE);
}

int main() {
  // configure BUZZER_PIN as PWM
  gpio_set_function(BUZZER_PIN, GPIO_FUNC_PWM);

  // Find out which PWM slice is connected to BUZZER_PIN
  uint slice_num = pwm_gpio_to_slice_num(BUZZER_PIN);
  // uint16_t freq = 440;  // 440 Hz - A4 note
  // float clkdiv = (1/ (float) freq)*2000; // Calculate clock divider
 
  // Get default configuration for PWM slice
  pwm_config config = pwm_get_default_config();
  // Set divider, reduces counter clock to sysclock/this value
  // pwm_config_set_clkdiv(&config, clkdiv);
  // Load the configuration into our PWM slice, and set it running.
  pwm_init(slice_num, &config, true);
  while (1) {
      // Noche de Paz
      // 1
      play_tone(BUZZER_PIN, G4, 1.5f);
      play_tone(BUZZER_PIN, A4, .5f);
      play_tone(BUZZER_PIN, G4, 1.f);

      // 2
      play_tone(BUZZER_PIN, E4, 3.f);

      // Noche de Amor
      // 3
      play_tone(BUZZER_PIN, G4, 1.5f);
      play_tone(BUZZER_PIN, A4, .5f);
      play_tone(BUZZER_PIN, G4, 1.f);

      // 4
      play_tone(BUZZER_PIN, E4, 3.f);

      // Todo duerme en derredor
      // 5
      play_tone(BUZZER_PIN, D5, 2.f);      
      play_tone(BUZZER_PIN, D5, 1.f);      

      // 6
      play_tone(BUZZER_PIN, B4, 3.f);      

      // 7
      play_tone(BUZZER_PIN, C5, 2.f);
      play_tone(BUZZER_PIN, C5, 1.f);

      // 8
      play_tone(BUZZER_PIN, G4, 3.f);

      // Entre sus astros que esparcen su luz
      // 9
      play_tone(BUZZER_PIN, A4, 2.f);
      play_tone(BUZZER_PIN, A4, 1.f);

      // 10 
      play_tone(BUZZER_PIN, C5, 1.5f);
      play_tone(BUZZER_PIN, B4, .5f);
      play_tone(BUZZER_PIN, A4, 1.f);

      // 11 
      play_tone(BUZZER_PIN, G4, 1.5f);
      play_tone(BUZZER_PIN, A4, .5f);
      play_tone(BUZZER_PIN, G4, 1.f);

      // 12 
      play_tone(BUZZER_PIN, E4, 3.f);

      // 13
      play_tone(BUZZER_PIN, A4, 2.f);
      play_tone(BUZZER_PIN, A4, 1.f);

      // 14
      play_tone(BUZZER_PIN, C5, 1.5f);
      play_tone(BUZZER_PIN, B4, .5f);
      play_tone(BUZZER_PIN, A4, 1.f);

      // 15
      play_tone(BUZZER_PIN, G4, 1.5f);
      play_tone(BUZZER_PIN, A4, .5f);
      play_tone(BUZZER_PIN, G4, 1.f);

      // 16
      play_tone(BUZZER_PIN, E4, 3.f);

      // 17
      play_tone(BUZZER_PIN, D5, 2.f);
      play_tone(BUZZER_PIN, D5, 1.f);

      // 18
      play_tone(BUZZER_PIN, F5, 1.5f);
      play_tone(BUZZER_PIN, D5, .5f);
      play_tone(BUZZER_PIN, B4, 1.f);

      // 19
      play_tone(BUZZER_PIN, C5, 3.f);

      // 20
      play_tone(BUZZER_PIN, E5, 3.f);

      // 21
      play_tone(BUZZER_PIN, C5, 1.5f);
      play_tone(BUZZER_PIN, G4, .5f);
      play_tone(BUZZER_PIN, E4, 1.f);

      // 22
      play_tone(BUZZER_PIN, G4, 1.5f);
      play_tone(BUZZER_PIN, F4, .5f);
      play_tone(BUZZER_PIN, D4, 1.f);

      // 23 & 24
      play_tone(BUZZER_PIN, C4, 5.f);
      // play_tone(BUZZER_PIN, <Silencio>, 2.f);
      // Fin
  }
}
