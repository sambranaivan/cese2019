#include "build/temp/_TestTimerConductor.c"
#include "MockTimerInterruptHandler.h"
#include "MockTimerModel.h"
#include "MockTimerHardware.h"
#include "TimerConductor.h"
#include "Types.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldCallHardwareInit(void)

{

  TimerHardware_Init_CMockExpect(18);



  TimerConductor_Init();

}



void testRunShouldGetSystemTimeAndPassOnToModelForEventScheduling(void)

{

  Timer_GetSystemTime_CMockExpectAndReturn(25, 1230);

  TimerModel_UpdateTime_CMockExpect(26, 1230);

  TimerConductor_Run();



  Timer_GetSystemTime_CMockExpectAndReturn(29, 837460);

  TimerModel_UpdateTime_CMockExpect(30, 837460);

  TimerConductor_Run();

}
