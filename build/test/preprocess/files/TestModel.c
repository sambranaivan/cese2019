#include "build/temp/_TestModel.c"
#include "MockTemperatureFilter.h"
#include "MockTaskScheduler.h"
#include "Model.h"
#include "Types.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldCallSchedulerAndTemperatureFilterInit(void)

{

  TaskScheduler_Init_CMockExpect(17);

  TemperatureFilter_Init_CMockExpect(18);

  Model_Init();

}
