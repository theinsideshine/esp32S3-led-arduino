#include "led.h"

CLed::CLed()
{

}

void CLed::init(void){
  pinMode(PIN_LED_DEBUG, OUTPUT);
  
}

void CLed::on(void){

   digitalWrite(PIN_LED_DEBUG,HIGH ); 
 
}

void CLed::off(void){

   digitalWrite(PIN_LED_DEBUG,LOW );  
}
/*
 * n_blink numero de blinkeos
 * t_blink tiempo de blinkeos en ms
 */
 
void CLed::n_blink(uint8_t n_blink,uint8_t t_blink){

  for (uint8_t i=0; i<n_blink; i++){    
   digitalWrite(PIN_LED_DEBUG, HIGH); 
   delay(t_blink);
   digitalWrite(PIN_LED_DEBUG, LOW); 
   delay(t_blink); 
  }
}
