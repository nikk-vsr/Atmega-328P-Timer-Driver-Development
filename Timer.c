
#include"Timer.h"
#include"Timerconfig.h"

static uint8_t volatile *const tmrreg[]= { (uint8_t*)&TCNT0, (uint8_t*)&TCNT1, (uint8_t)&TCNT2 };   // pointer array or array of pointers for Timer registers 

static uint8_t volatile *const tmrcntreg[]= { (uint8_t*)&TCCR0A, (uint8_t*)&TCCR0B, };  // pointer array for Timer control register 

static uint8_t volatile *const ocmpreg[]= { (uint8_t*)&OCR0A, (uint8_t*)&OCR0B, (uint8_t)&TCNT2 };   // pointer array for Output compare register



/******************************************************************/
// example usage //
/*

const Timerconfig_t *TimerConfig = Get_TimerConfig();    // TimerConfig pointer is assigned to Get_TimerConfig function

Tmr_Init(TimerConfig);                                    // Calls the initialization function   *////////////////////

/***********************************************************************/

const Timerconfig_t *const Get_TimerConfig()                // Note that this is not a function pointer  
{
  return  (const*)Timerconfig[0];
}

/**************************************************************************/

void Tmr_Init(const TimerConfig_t *Config)
[  
  for(i=0;i<MAX_TIMERS;i++)
    {
        // Loop through configuration table and set each register 
        if( Config[i].TimerEnable== ENABLED)                     // config[0] is struct type consisting { TMR0,       ENABLED,      UP_COUNT, INTERNAL,   DISABLED, 100 } 
        {
          *tmrreg[i]=0;
          *ocmpreg[i]=0;  
        
        }
        
    }
}
