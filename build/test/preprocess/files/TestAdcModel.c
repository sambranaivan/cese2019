#include "build/temp/_TestAdcModel.c"
#include "MockTemperatureFilter.h"
#include "MockTemperatureCalculator.h"
#include "MockTaskScheduler.h"
#include "AdcModel.h"
#include "Types.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testDoGetSampleShouldReturn_FALSE_WhenTaskSchedulerReturns_FALSE(void)

{

  TaskScheduler_DoAdc_CMockExpectAndReturn(18, (0));

  UnityAssertEqualNumber((UNITY_INT)(((0))), (UNITY_INT)((AdcModel_DoGetSample())), (

 ((void *)0)

 ), (UNITY_UINT)(19), UNITY_DISPLAY_STYLE_INT);

}



void testDoGetSampleShouldReturn_TRUE_WhenTaskSchedulerReturns_TRUE(void)

{

  TaskScheduler_DoAdc_CMockExpectAndReturn(24, (1));

  UnityAssertEqualNumber((UNITY_INT)(((1))), (UNITY_INT)((AdcModel_DoGetSample())), (

 ((void *)0)

 ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT);

}



void testProcessInputShouldDelegateToTemperatureCalculatorAndPassResultToFilter(void)

{

  TemperatureCalculator_Calculate_CMockExpectAndReturn(30, 21473, 23.5f);

  TemperatureFilter_ProcessInput_CMockExpect(31, 23.5f);

  AdcModel_ProcessInput(21473);

}
