
#include "Timersrc.h"

static uint8_t volatile *const tmrreg[]= { (uint8_t*)&TCNT0, (uint8_t*)&TCNT1, (uint8_t)&TCNT2 };   // pointer array or array of pointers for Timer registers 

static uint8_t volatile *const tmrcntreg[]= { (uint8_t*)&TCCR0A, (uint8_t*)&TCCR0B, };  // pointer array for Timer control register 

static uint8_t volatile *const ocmpreg[]= { (uint8_t*)&OCR0A, (uint8_t*)&OCR0B, (uint8_t)&TCNT2 };   // pointer array for Output compare register



void Tmr_Int(const TimerConfig_t *Config)
[  
    


}
