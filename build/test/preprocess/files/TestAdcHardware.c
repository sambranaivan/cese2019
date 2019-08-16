#include "build/temp/_TestAdcHardware.c"
#include "MockAdcTemperatureSensor.h"
#include "MockAdcHardwareConfigurator.h"
#include "AdcHardware.h"
#include "Types.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldDelegateToConfiguratorAndTemperatureSensor(void)

{

  Adc_Reset_CMockExpect(17);

  Adc_ConfigureMode_CMockExpect(18);

  Adc_EnableTemperatureChannel_CMockExpect(19);

  Adc_StartTemperatureSensorConversion_CMockExpect(20);



  AdcHardware_Init();

}



void testGetSampleCompleteShouldReturn_FALSE_WhenTemperatureSensorSampleReadyReturns_FALSE(void)

{

  Adc_TemperatureSensorSampleReady_CMockExpectAndReturn(27, (0));

  if ((!AdcHardware_GetSampleComplete())) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(28)));};

}



void testGetSampleCompleteShouldReturn_TRUE_WhenTemperatureSensorSampleReadyReturns_TRUE(void)

{

  Adc_TemperatureSensorSampleReady_CMockExpectAndReturn(33, (1));

  if ((AdcHardware_GetSampleComplete())) {} else {UnityFail( ((" Expression Evaluated To FALSE")), (UNITY_UINT)((UNITY_UINT)(34)));};

}



void testGetSampleShouldDelegateToAdcTemperatureSensor(void)

{

  uint16 sample;

  Adc_ReadTemperatureSensor_CMockExpectAndReturn(40, 847);



  sample = AdcHardware_GetSample();

  UnityAssertEqualNumber((UNITY_INT)((847)), (UNITY_INT)((sample)), (

 ((void *)0)

 ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_INT);

}
