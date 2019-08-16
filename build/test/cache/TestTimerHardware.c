#include "build/temp/_TestTimerHardware.c"
#include "MockTimerConfigurator.h"
#include "TimerHardware.h"
#include "Types.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldDelegateAppropriatelyToConfigurator(void)

{

  Timer_EnablePeripheralClocks_CMockExpect(16);

  Timer_Reset_CMockExpect(17);

  Timer_ConfigureMode_CMockExpect(18);

  Timer_ConfigurePeriod_CMockExpect(19);

  Timer_EnableOutputPin_CMockExpect(20);

  Timer_Enable_CMockExpect(21);

  Timer_ConfigureInterruptHandler_CMockExpect(22);

  Timer_Start_CMockExpect(23);



  TimerHardware_Init();

}
