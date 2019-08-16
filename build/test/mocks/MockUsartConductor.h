/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKUSARTCONDUCTOR_H
#define _MOCKUSARTCONDUCTOR_H

#include "UsartConductor.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockUsartConductor_Init(void);
void MockUsartConductor_Destroy(void);
void MockUsartConductor_Verify(void);




#define UsartConductor_Init_Ignore() UsartConductor_Init_CMockIgnore()
void UsartConductor_Init_CMockIgnore(void);
#define UsartConductor_Init_Expect() UsartConductor_Init_CMockExpect(__LINE__)
void UsartConductor_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define UsartConductor_Run_Ignore() UsartConductor_Run_CMockIgnore()
void UsartConductor_Run_CMockIgnore(void);
#define UsartConductor_Run_Expect() UsartConductor_Run_CMockExpect(__LINE__)
void UsartConductor_Run_CMockExpect(UNITY_LINE_TYPE cmock_line);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif