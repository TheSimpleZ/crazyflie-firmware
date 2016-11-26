/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: crazyflie.c
 *
 * Code generated for Simulink model 'crazyflie'.
 *
 * Model version                  : 1.81
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Sat Nov 26 17:04:10 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "crazyflie.h"

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
ExtY rtY;

/* Model step function */
void crazyflie_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void crazyflie_initialize(void)
{
  /* ConstCode for Outport: '<Root>/Motor_1' */
  rtY.Motor_1 = 6553U;

  /* ConstCode for Outport: '<Root>/Motor_2' */
  rtY.Motor_2 = 6553U;

  /* ConstCode for Outport: '<Root>/Motor_3' */
  rtY.Motor_3 = 6553U;

  /* ConstCode for Outport: '<Root>/Motor_4' */
  rtY.Motor_4 = 6553U;
}

/* Model terminate function */
void crazyflie_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
