#include "Timer.h"
#include "Timerconfig.h"


Tmr_Init()

const Timerconfig_t *TimerConfig = Get_TimerConfig();    // TimerConfig pointer is assigned to Get_TimerConfig function

Tmr_Init(TimerConfig);                // configuration table pointer is passed to the intialization function 

int main()
{

 
return 0;
}
