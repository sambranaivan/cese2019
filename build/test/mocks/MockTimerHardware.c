/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockTimerHardware.h"

static const char* CMockString_TimerHardware_Init = "TimerHardware_Init";

typedef struct _CMOCK_TimerHardware_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_TimerHardware_Init_CALL_INSTANCE;

static struct MockTimerHardwareInstance
{
  int TimerHardware_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE TimerHardware_Init_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockTimerHardware_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.TimerHardware_Init_IgnoreBool)
    Mock.TimerHardware_Init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_TimerHardware_Init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.TimerHardware_Init_CallInstance, cmock_line, CMockStringCalledLess);
}

void MockTimerHardware_Init(void)
{
  MockTimerHardware_Destroy();
}

void MockTimerHardware_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void TimerHardware_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TimerHardware_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TimerHardware_Init);
  cmock_call_instance = (CMOCK_TimerHardware_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TimerHardware_Init_CallInstance);
  Mock.TimerHardware_Init_CallInstance = CMock_Guts_MemNext(Mock.TimerHardware_Init_CallInstance);
  if (Mock.TimerHardware_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void TimerHardware_Init_CMockIgnore(void)
{
  Mock.TimerHardware_Init_IgnoreBool = (int)1;
}

void TimerHardware_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TimerHardware_Init_CALL_INSTANCE));
  CMOCK_TimerHardware_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_TimerHardware_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TimerHardware_Init_CallInstance = CMock_Guts_MemChain(Mock.TimerHardware_Init_CallInstance, cmock_guts_index);
  Mock.TimerHardware_Init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}
