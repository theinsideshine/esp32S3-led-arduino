#ifndef LED_H
#define LED_H

#include "Arduino.h"

#define PIN_LED_DEBUG                 2

class CLed
{
  public:
    CLed();
    void init( void );
    void on(void);
    void off(void);
    void n_blink(uint8_t n_blink,uint8_t t_blink);
        
  private:
      
};

#endif // LED_H
