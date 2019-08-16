#include "build/temp/_TestAdcConductor.c"
#include "MockAdcHardware.h"
#include "MockAdcModel.h"
#include "AdcConductor.h"
#include "Types.h"
#include "UnityHelper.h"
#include "unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void testInitShouldCallHardwareInit(void)

{

  AdcHardware_Init_CMockExpect(19);

  AdcConductor_Init();

}



void testRunShouldNotDoAnythingIfItIsNotTime(void)

{

  AdcModel_DoGetSample_CMockExpectAndReturn(25, (0));



  AdcConductor_Run();

}



void testRunShouldNotPassAdcResultToModelIfSampleIsNotComplete(void)

{

  AdcModel_DoGetSample_CMockExpectAndReturn(32, (1));

  AdcHardware_GetSampleComplete_CMockExpectAndReturn(33, (0));



  AdcConductor_Run();

}



void testRunShouldGetLatestSampleFromAdcAndPassItToModelAndStartNewConversionWhenItIsTime(void)

{

  AdcModel_DoGetSample_CMockExpectAndReturn(40, (1));

  AdcHardware_GetSampleComplete_CMockExpectAndReturn(41, (1));

  AdcHardware_GetSample_CMockExpectAndReturn(42, 293U);

  AdcModel_ProcessInput_CMockExpect(43, 293U);

  AdcHardware_StartConversion_CMockExpect(44);



  AdcConductor_Run();

}



void testJustHereToTest_Should_ProperlyPassAStructAndVerifyIt(void)

{

    EXAMPLE_STRUCT_T TestStruct;

    TestStruct.x = 5;

    TestStruct.y = 7;



    AdcModel_DoNothingExceptTestASpecialType_CMockExpectAndReturn(55, TestStruct, (1));



    if ((AdcConductor_JustHereToTest())) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(57)));};

}

void test_AdcConductor_AlsoHereToTest_Should_ProperlyReturnAStructAsExpected1(void)

{

    EXAMPLE_STRUCT_T TestStruct;

    TestStruct.x = 99;

    TestStruct.y = 1;



    AdcModel_DoNothingExceptReturnASpecialType_CMockExpectAndReturn(88, TestStruct);



    if ((AdcConductor_AlsoHereToTest())) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(90)));};

}



void test_AdcConductor_AlsoHereToTest_Should_ProperlyReturnAStructAsExpected2(void)

{

    EXAMPLE_STRUCT_T TestStruct;

    TestStruct.x = 98;

    TestStruct.y = 1;



    AdcModel_DoNothingExceptReturnASpecialType_CMockExpectAndReturn(99, TestStruct);



    if (!(AdcConductor_AlsoHereToTest())) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(101)));};

}



void test_AdcConductor_YetAnotherTest_Should_VerifyThatPointersToStructsAreTestable(void)

{

    uint32 TestNum = 3;



    AdModel_DoNothingExceptTestPointers_CMockExpectAndReturn(108, &TestNum, (1));



    if ((AdcConductor_YetAnotherTest())) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(110)));};

}
