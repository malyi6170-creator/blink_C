#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // Настраиваем пин PB1 на выход
  DDRB |= (1 << PB1);

  while (1) {
    // Инвертируем бит PB1 (мигание)
    PORTB ^= (1 << PB1);
    _delay_ms(1000);
  }
}
