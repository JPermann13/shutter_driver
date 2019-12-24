/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* red */
#define red__0__DM__MASK 0x7000u
#define red__0__DM__SHIFT 12u
#define red__0__DR CYREG_PRT1_DR
#define red__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define red__0__HSIOM_MASK 0x000F0000u
#define red__0__HSIOM_SHIFT 16u
#define red__0__INTCFG CYREG_PRT1_INTCFG
#define red__0__INTSTAT CYREG_PRT1_INTSTAT
#define red__0__MASK 0x10u
#define red__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define red__0__OUT_SEL_SHIFT 8u
#define red__0__OUT_SEL_VAL 0u
#define red__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define red__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define red__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define red__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define red__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define red__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define red__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define red__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define red__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define red__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define red__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define red__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define red__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define red__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define red__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define red__0__PC CYREG_PRT1_PC
#define red__0__PC2 CYREG_PRT1_PC2
#define red__0__PORT 1u
#define red__0__PS CYREG_PRT1_PS
#define red__0__SHIFT 4u
#define red__DR CYREG_PRT1_DR
#define red__INTCFG CYREG_PRT1_INTCFG
#define red__INTSTAT CYREG_PRT1_INTSTAT
#define red__MASK 0x10u
#define red__PA__CFG0 CYREG_UDB_PA1_CFG0
#define red__PA__CFG1 CYREG_UDB_PA1_CFG1
#define red__PA__CFG10 CYREG_UDB_PA1_CFG10
#define red__PA__CFG11 CYREG_UDB_PA1_CFG11
#define red__PA__CFG12 CYREG_UDB_PA1_CFG12
#define red__PA__CFG13 CYREG_UDB_PA1_CFG13
#define red__PA__CFG14 CYREG_UDB_PA1_CFG14
#define red__PA__CFG2 CYREG_UDB_PA1_CFG2
#define red__PA__CFG3 CYREG_UDB_PA1_CFG3
#define red__PA__CFG4 CYREG_UDB_PA1_CFG4
#define red__PA__CFG5 CYREG_UDB_PA1_CFG5
#define red__PA__CFG6 CYREG_UDB_PA1_CFG6
#define red__PA__CFG7 CYREG_UDB_PA1_CFG7
#define red__PA__CFG8 CYREG_UDB_PA1_CFG8
#define red__PA__CFG9 CYREG_UDB_PA1_CFG9
#define red__PC CYREG_PRT1_PC
#define red__PC2 CYREG_PRT1_PC2
#define red__PORT 1u
#define red__PS CYREG_PRT1_PS
#define red__SHIFT 4u

/* en_5 */
#define en_5__0__DM__MASK 0x38000u
#define en_5__0__DM__SHIFT 15u
#define en_5__0__DR CYREG_PRT0_DR
#define en_5__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define en_5__0__HSIOM_MASK 0x00F00000u
#define en_5__0__HSIOM_SHIFT 20u
#define en_5__0__INTCFG CYREG_PRT0_INTCFG
#define en_5__0__INTSTAT CYREG_PRT0_INTSTAT
#define en_5__0__MASK 0x20u
#define en_5__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define en_5__0__OUT_SEL_SHIFT 10u
#define en_5__0__OUT_SEL_VAL 1u
#define en_5__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define en_5__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define en_5__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define en_5__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define en_5__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define en_5__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define en_5__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define en_5__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define en_5__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define en_5__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define en_5__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define en_5__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define en_5__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define en_5__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define en_5__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define en_5__0__PC CYREG_PRT0_PC
#define en_5__0__PC2 CYREG_PRT0_PC2
#define en_5__0__PORT 0u
#define en_5__0__PS CYREG_PRT0_PS
#define en_5__0__SHIFT 5u
#define en_5__DR CYREG_PRT0_DR
#define en_5__INTCFG CYREG_PRT0_INTCFG
#define en_5__INTSTAT CYREG_PRT0_INTSTAT
#define en_5__MASK 0x20u
#define en_5__PA__CFG0 CYREG_UDB_PA0_CFG0
#define en_5__PA__CFG1 CYREG_UDB_PA0_CFG1
#define en_5__PA__CFG10 CYREG_UDB_PA0_CFG10
#define en_5__PA__CFG11 CYREG_UDB_PA0_CFG11
#define en_5__PA__CFG12 CYREG_UDB_PA0_CFG12
#define en_5__PA__CFG13 CYREG_UDB_PA0_CFG13
#define en_5__PA__CFG14 CYREG_UDB_PA0_CFG14
#define en_5__PA__CFG2 CYREG_UDB_PA0_CFG2
#define en_5__PA__CFG3 CYREG_UDB_PA0_CFG3
#define en_5__PA__CFG4 CYREG_UDB_PA0_CFG4
#define en_5__PA__CFG5 CYREG_UDB_PA0_CFG5
#define en_5__PA__CFG6 CYREG_UDB_PA0_CFG6
#define en_5__PA__CFG7 CYREG_UDB_PA0_CFG7
#define en_5__PA__CFG8 CYREG_UDB_PA0_CFG8
#define en_5__PA__CFG9 CYREG_UDB_PA0_CFG9
#define en_5__PC CYREG_PRT0_PC
#define en_5__PC2 CYREG_PRT0_PC2
#define en_5__PORT 0u
#define en_5__PS CYREG_PRT0_PS
#define en_5__SHIFT 5u

/* en_24 */
#define en_24__0__DM__MASK 0x7000u
#define en_24__0__DM__SHIFT 12u
#define en_24__0__DR CYREG_PRT0_DR
#define en_24__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define en_24__0__HSIOM_MASK 0x000F0000u
#define en_24__0__HSIOM_SHIFT 16u
#define en_24__0__INTCFG CYREG_PRT0_INTCFG
#define en_24__0__INTSTAT CYREG_PRT0_INTSTAT
#define en_24__0__MASK 0x10u
#define en_24__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define en_24__0__OUT_SEL_SHIFT 8u
#define en_24__0__OUT_SEL_VAL 2u
#define en_24__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define en_24__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define en_24__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define en_24__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define en_24__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define en_24__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define en_24__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define en_24__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define en_24__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define en_24__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define en_24__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define en_24__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define en_24__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define en_24__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define en_24__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define en_24__0__PC CYREG_PRT0_PC
#define en_24__0__PC2 CYREG_PRT0_PC2
#define en_24__0__PORT 0u
#define en_24__0__PS CYREG_PRT0_PS
#define en_24__0__SHIFT 4u
#define en_24__DR CYREG_PRT0_DR
#define en_24__INTCFG CYREG_PRT0_INTCFG
#define en_24__INTSTAT CYREG_PRT0_INTSTAT
#define en_24__MASK 0x10u
#define en_24__PA__CFG0 CYREG_UDB_PA0_CFG0
#define en_24__PA__CFG1 CYREG_UDB_PA0_CFG1
#define en_24__PA__CFG10 CYREG_UDB_PA0_CFG10
#define en_24__PA__CFG11 CYREG_UDB_PA0_CFG11
#define en_24__PA__CFG12 CYREG_UDB_PA0_CFG12
#define en_24__PA__CFG13 CYREG_UDB_PA0_CFG13
#define en_24__PA__CFG14 CYREG_UDB_PA0_CFG14
#define en_24__PA__CFG2 CYREG_UDB_PA0_CFG2
#define en_24__PA__CFG3 CYREG_UDB_PA0_CFG3
#define en_24__PA__CFG4 CYREG_UDB_PA0_CFG4
#define en_24__PA__CFG5 CYREG_UDB_PA0_CFG5
#define en_24__PA__CFG6 CYREG_UDB_PA0_CFG6
#define en_24__PA__CFG7 CYREG_UDB_PA0_CFG7
#define en_24__PA__CFG8 CYREG_UDB_PA0_CFG8
#define en_24__PA__CFG9 CYREG_UDB_PA0_CFG9
#define en_24__PC CYREG_PRT0_PC
#define en_24__PC2 CYREG_PRT0_PC2
#define en_24__PORT 0u
#define en_24__PS CYREG_PRT0_PS
#define en_24__SHIFT 4u

/* green */
#define green__0__DM__MASK 0xE00u
#define green__0__DM__SHIFT 9u
#define green__0__DR CYREG_PRT1_DR
#define green__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define green__0__HSIOM_MASK 0x0000F000u
#define green__0__HSIOM_SHIFT 12u
#define green__0__INTCFG CYREG_PRT1_INTCFG
#define green__0__INTSTAT CYREG_PRT1_INTSTAT
#define green__0__MASK 0x08u
#define green__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define green__0__OUT_SEL_SHIFT 6u
#define green__0__OUT_SEL_VAL 2u
#define green__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define green__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define green__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define green__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define green__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define green__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define green__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define green__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define green__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define green__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define green__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define green__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define green__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define green__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define green__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define green__0__PC CYREG_PRT1_PC
#define green__0__PC2 CYREG_PRT1_PC2
#define green__0__PORT 1u
#define green__0__PS CYREG_PRT1_PS
#define green__0__SHIFT 3u
#define green__DR CYREG_PRT1_DR
#define green__INTCFG CYREG_PRT1_INTCFG
#define green__INTSTAT CYREG_PRT1_INTSTAT
#define green__MASK 0x08u
#define green__PA__CFG0 CYREG_UDB_PA1_CFG0
#define green__PA__CFG1 CYREG_UDB_PA1_CFG1
#define green__PA__CFG10 CYREG_UDB_PA1_CFG10
#define green__PA__CFG11 CYREG_UDB_PA1_CFG11
#define green__PA__CFG12 CYREG_UDB_PA1_CFG12
#define green__PA__CFG13 CYREG_UDB_PA1_CFG13
#define green__PA__CFG14 CYREG_UDB_PA1_CFG14
#define green__PA__CFG2 CYREG_UDB_PA1_CFG2
#define green__PA__CFG3 CYREG_UDB_PA1_CFG3
#define green__PA__CFG4 CYREG_UDB_PA1_CFG4
#define green__PA__CFG5 CYREG_UDB_PA1_CFG5
#define green__PA__CFG6 CYREG_UDB_PA1_CFG6
#define green__PA__CFG7 CYREG_UDB_PA1_CFG7
#define green__PA__CFG8 CYREG_UDB_PA1_CFG8
#define green__PA__CFG9 CYREG_UDB_PA1_CFG9
#define green__PC CYREG_PRT1_PC
#define green__PC2 CYREG_PRT1_PC2
#define green__PORT 1u
#define green__PS CYREG_PRT1_PS
#define green__SHIFT 3u

/* Timer_1 */
#define Timer_1_TimerUDB_rstSts_stsreg__0__MASK 0x01u
#define Timer_1_TimerUDB_rstSts_stsreg__0__POS 0
#define Timer_1_TimerUDB_rstSts_stsreg__2__MASK 0x04u
#define Timer_1_TimerUDB_rstSts_stsreg__2__POS 2
#define Timer_1_TimerUDB_rstSts_stsreg__3__MASK 0x08u
#define Timer_1_TimerUDB_rstSts_stsreg__3__POS 3
#define Timer_1_TimerUDB_rstSts_stsreg__MASK 0x0Du
#define Timer_1_TimerUDB_rstSts_stsreg__MASK_REG CYREG_UDB_W8_MSK_03
#define Timer_1_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define Timer_1_TimerUDB_rstSts_stsreg__STATUS_REG CYREG_UDB_W8_ST_03
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__A0_REG CYREG_UDB_W8_A0_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__A1_REG CYREG_UDB_W8_A1_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__D0_REG CYREG_UDB_W8_D0_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__D1_REG CYREG_UDB_W8_D1_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__F0_REG CYREG_UDB_W8_F0_02
#define Timer_1_TimerUDB_sT16_timerdp_u0__F1_REG CYREG_UDB_W8_F1_02
#define Timer_1_TimerUDB_sT16_timerdp_u1__A0_A1_REG CYREG_UDB_CAT16_A_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__A0_REG CYREG_UDB_W8_A0_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__A1_REG CYREG_UDB_W8_A1_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__D0_D1_REG CYREG_UDB_CAT16_D_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__D0_REG CYREG_UDB_W8_D0_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__D1_REG CYREG_UDB_W8_D1_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__F0_F1_REG CYREG_UDB_CAT16_F_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__F0_REG CYREG_UDB_W8_F0_03
#define Timer_1_TimerUDB_sT16_timerdp_u1__F1_REG CYREG_UDB_W8_F1_03

/* comp_in */
#define comp_in__0__DM__MASK 0x1C0u
#define comp_in__0__DM__SHIFT 6u
#define comp_in__0__DR CYREG_PRT2_DR
#define comp_in__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define comp_in__0__HSIOM_MASK 0x00000F00u
#define comp_in__0__HSIOM_SHIFT 8u
#define comp_in__0__INTCFG CYREG_PRT2_INTCFG
#define comp_in__0__INTSTAT CYREG_PRT2_INTSTAT
#define comp_in__0__MASK 0x04u
#define comp_in__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define comp_in__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define comp_in__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define comp_in__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define comp_in__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define comp_in__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define comp_in__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define comp_in__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define comp_in__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define comp_in__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define comp_in__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define comp_in__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define comp_in__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define comp_in__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define comp_in__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define comp_in__0__PC CYREG_PRT2_PC
#define comp_in__0__PC2 CYREG_PRT2_PC2
#define comp_in__0__PORT 2u
#define comp_in__0__PS CYREG_PRT2_PS
#define comp_in__0__SHIFT 2u
#define comp_in__DR CYREG_PRT2_DR
#define comp_in__INTCFG CYREG_PRT2_INTCFG
#define comp_in__INTSTAT CYREG_PRT2_INTSTAT
#define comp_in__MASK 0x04u
#define comp_in__PA__CFG0 CYREG_UDB_PA2_CFG0
#define comp_in__PA__CFG1 CYREG_UDB_PA2_CFG1
#define comp_in__PA__CFG10 CYREG_UDB_PA2_CFG10
#define comp_in__PA__CFG11 CYREG_UDB_PA2_CFG11
#define comp_in__PA__CFG12 CYREG_UDB_PA2_CFG12
#define comp_in__PA__CFG13 CYREG_UDB_PA2_CFG13
#define comp_in__PA__CFG14 CYREG_UDB_PA2_CFG14
#define comp_in__PA__CFG2 CYREG_UDB_PA2_CFG2
#define comp_in__PA__CFG3 CYREG_UDB_PA2_CFG3
#define comp_in__PA__CFG4 CYREG_UDB_PA2_CFG4
#define comp_in__PA__CFG5 CYREG_UDB_PA2_CFG5
#define comp_in__PA__CFG6 CYREG_UDB_PA2_CFG6
#define comp_in__PA__CFG7 CYREG_UDB_PA2_CFG7
#define comp_in__PA__CFG8 CYREG_UDB_PA2_CFG8
#define comp_in__PA__CFG9 CYREG_UDB_PA2_CFG9
#define comp_in__PC CYREG_PRT2_PC
#define comp_in__PC2 CYREG_PRT2_PC2
#define comp_in__PORT 2u
#define comp_in__PS CYREG_PRT2_PS
#define comp_in__SHIFT 2u

/* open_ind */
#define open_ind__0__DM__MASK 0x38u
#define open_ind__0__DM__SHIFT 3u
#define open_ind__0__DR CYREG_PRT1_DR
#define open_ind__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define open_ind__0__HSIOM_MASK 0x000000F0u
#define open_ind__0__HSIOM_SHIFT 4u
#define open_ind__0__INTCFG CYREG_PRT1_INTCFG
#define open_ind__0__INTSTAT CYREG_PRT1_INTSTAT
#define open_ind__0__MASK 0x02u
#define open_ind__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define open_ind__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define open_ind__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define open_ind__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define open_ind__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define open_ind__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define open_ind__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define open_ind__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define open_ind__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define open_ind__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define open_ind__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define open_ind__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define open_ind__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define open_ind__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define open_ind__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define open_ind__0__PC CYREG_PRT1_PC
#define open_ind__0__PC2 CYREG_PRT1_PC2
#define open_ind__0__PORT 1u
#define open_ind__0__PS CYREG_PRT1_PS
#define open_ind__0__SHIFT 1u
#define open_ind__DR CYREG_PRT1_DR
#define open_ind__INTCFG CYREG_PRT1_INTCFG
#define open_ind__INTSTAT CYREG_PRT1_INTSTAT
#define open_ind__MASK 0x02u
#define open_ind__PA__CFG0 CYREG_UDB_PA1_CFG0
#define open_ind__PA__CFG1 CYREG_UDB_PA1_CFG1
#define open_ind__PA__CFG10 CYREG_UDB_PA1_CFG10
#define open_ind__PA__CFG11 CYREG_UDB_PA1_CFG11
#define open_ind__PA__CFG12 CYREG_UDB_PA1_CFG12
#define open_ind__PA__CFG13 CYREG_UDB_PA1_CFG13
#define open_ind__PA__CFG14 CYREG_UDB_PA1_CFG14
#define open_ind__PA__CFG2 CYREG_UDB_PA1_CFG2
#define open_ind__PA__CFG3 CYREG_UDB_PA1_CFG3
#define open_ind__PA__CFG4 CYREG_UDB_PA1_CFG4
#define open_ind__PA__CFG5 CYREG_UDB_PA1_CFG5
#define open_ind__PA__CFG6 CYREG_UDB_PA1_CFG6
#define open_ind__PA__CFG7 CYREG_UDB_PA1_CFG7
#define open_ind__PA__CFG8 CYREG_UDB_PA1_CFG8
#define open_ind__PA__CFG9 CYREG_UDB_PA1_CFG9
#define open_ind__PC CYREG_PRT1_PC
#define open_ind__PC2 CYREG_PRT1_PC2
#define open_ind__PORT 1u
#define open_ind__PS CYREG_PRT1_PS
#define open_ind__SHIFT 1u

/* switch_in */
#define switch_in__0__DM__MASK 0x38u
#define switch_in__0__DM__SHIFT 3u
#define switch_in__0__DR CYREG_PRT0_DR
#define switch_in__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define switch_in__0__HSIOM_MASK 0x000000F0u
#define switch_in__0__HSIOM_SHIFT 4u
#define switch_in__0__INTCFG CYREG_PRT0_INTCFG
#define switch_in__0__INTSTAT CYREG_PRT0_INTSTAT
#define switch_in__0__MASK 0x02u
#define switch_in__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define switch_in__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define switch_in__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define switch_in__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define switch_in__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define switch_in__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define switch_in__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define switch_in__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define switch_in__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define switch_in__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define switch_in__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define switch_in__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define switch_in__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define switch_in__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define switch_in__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define switch_in__0__PC CYREG_PRT0_PC
#define switch_in__0__PC2 CYREG_PRT0_PC2
#define switch_in__0__PORT 0u
#define switch_in__0__PS CYREG_PRT0_PS
#define switch_in__0__SHIFT 1u
#define switch_in__DR CYREG_PRT0_DR
#define switch_in__INTCFG CYREG_PRT0_INTCFG
#define switch_in__INTSTAT CYREG_PRT0_INTSTAT
#define switch_in__MASK 0x02u
#define switch_in__PA__CFG0 CYREG_UDB_PA0_CFG0
#define switch_in__PA__CFG1 CYREG_UDB_PA0_CFG1
#define switch_in__PA__CFG10 CYREG_UDB_PA0_CFG10
#define switch_in__PA__CFG11 CYREG_UDB_PA0_CFG11
#define switch_in__PA__CFG12 CYREG_UDB_PA0_CFG12
#define switch_in__PA__CFG13 CYREG_UDB_PA0_CFG13
#define switch_in__PA__CFG14 CYREG_UDB_PA0_CFG14
#define switch_in__PA__CFG2 CYREG_UDB_PA0_CFG2
#define switch_in__PA__CFG3 CYREG_UDB_PA0_CFG3
#define switch_in__PA__CFG4 CYREG_UDB_PA0_CFG4
#define switch_in__PA__CFG5 CYREG_UDB_PA0_CFG5
#define switch_in__PA__CFG6 CYREG_UDB_PA0_CFG6
#define switch_in__PA__CFG7 CYREG_UDB_PA0_CFG7
#define switch_in__PA__CFG8 CYREG_UDB_PA0_CFG8
#define switch_in__PA__CFG9 CYREG_UDB_PA0_CFG9
#define switch_in__PC CYREG_PRT0_PC
#define switch_in__PC2 CYREG_PRT0_PC2
#define switch_in__PORT 0u
#define switch_in__PS CYREG_PRT0_PS
#define switch_in__SHIFT 1u

/* start_pulse */
#define start_pulse_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define start_pulse_PWMUDB_genblk8_stsreg__0__POS 0
#define start_pulse_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_01
#define start_pulse_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG CYREG_UDB_W16_ST_01
#define start_pulse_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define start_pulse_PWMUDB_genblk8_stsreg__2__POS 2
#define start_pulse_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define start_pulse_PWMUDB_genblk8_stsreg__3__POS 3
#define start_pulse_PWMUDB_genblk8_stsreg__MASK 0x0Du
#define start_pulse_PWMUDB_genblk8_stsreg__MASK_REG CYREG_UDB_W8_MSK_01
#define start_pulse_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_01
#define start_pulse_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_UDB_W8_ST_01
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_A0_REG CYREG_UDB_W32_A0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_A1_REG CYREG_UDB_W32_A1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_D0_REG CYREG_UDB_W32_D0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_D1_REG CYREG_UDB_W32_D1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_DP_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_F0_REG CYREG_UDB_W32_F0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__32BIT_F1_REG CYREG_UDB_W32_F1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__A0_REG CYREG_UDB_W8_A0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__A1_REG CYREG_UDB_W8_A1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__D0_REG CYREG_UDB_W8_D0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__D1_REG CYREG_UDB_W8_D1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__F0_REG CYREG_UDB_W8_F0_00
#define start_pulse_PWMUDB_sP16_pwmdp_u0__F1_REG CYREG_UDB_W8_F1_00
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG CYREG_UDB_W16_A0_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG CYREG_UDB_W16_A1_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG CYREG_UDB_W16_D0_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG CYREG_UDB_W16_D1_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG CYREG_UDB_W16_F0_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG CYREG_UDB_W16_F1_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__A0_A1_REG CYREG_UDB_CAT16_A_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__A0_REG CYREG_UDB_W8_A0_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__A1_REG CYREG_UDB_W8_A1_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__D0_D1_REG CYREG_UDB_CAT16_D_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__D0_REG CYREG_UDB_W8_D0_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__D1_REG CYREG_UDB_W8_D1_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__F0_F1_REG CYREG_UDB_CAT16_F_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__F0_REG CYREG_UDB_W8_F0_01
#define start_pulse_PWMUDB_sP16_pwmdp_u1__F1_REG CYREG_UDB_W8_F1_01

/* Interrupt_Out */
#define Interrupt_Out__0__DM__MASK 0x07u
#define Interrupt_Out__0__DM__SHIFT 0u
#define Interrupt_Out__0__DR CYREG_PRT0_DR
#define Interrupt_Out__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Interrupt_Out__0__HSIOM_MASK 0x0000000Fu
#define Interrupt_Out__0__HSIOM_SHIFT 0u
#define Interrupt_Out__0__INTCFG CYREG_PRT0_INTCFG
#define Interrupt_Out__0__INTSTAT CYREG_PRT0_INTSTAT
#define Interrupt_Out__0__MASK 0x01u
#define Interrupt_Out__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define Interrupt_Out__0__OUT_SEL_SHIFT 0u
#define Interrupt_Out__0__OUT_SEL_VAL 0u
#define Interrupt_Out__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Interrupt_Out__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Interrupt_Out__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Interrupt_Out__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Interrupt_Out__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Interrupt_Out__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Interrupt_Out__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Interrupt_Out__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Interrupt_Out__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Interrupt_Out__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Interrupt_Out__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Interrupt_Out__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Interrupt_Out__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Interrupt_Out__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Interrupt_Out__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Interrupt_Out__0__PC CYREG_PRT0_PC
#define Interrupt_Out__0__PC2 CYREG_PRT0_PC2
#define Interrupt_Out__0__PORT 0u
#define Interrupt_Out__0__PS CYREG_PRT0_PS
#define Interrupt_Out__0__SHIFT 0u
#define Interrupt_Out__DR CYREG_PRT0_DR
#define Interrupt_Out__INTCFG CYREG_PRT0_INTCFG
#define Interrupt_Out__INTSTAT CYREG_PRT0_INTSTAT
#define Interrupt_Out__MASK 0x01u
#define Interrupt_Out__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Interrupt_Out__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Interrupt_Out__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Interrupt_Out__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Interrupt_Out__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Interrupt_Out__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Interrupt_Out__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Interrupt_Out__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Interrupt_Out__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Interrupt_Out__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Interrupt_Out__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Interrupt_Out__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Interrupt_Out__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Interrupt_Out__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Interrupt_Out__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Interrupt_Out__PC CYREG_PRT0_PC
#define Interrupt_Out__PC2 CYREG_PRT0_PC2
#define Interrupt_Out__PORT 0u
#define Interrupt_Out__PS CYREG_PRT0_PS
#define Interrupt_Out__SHIFT 0u

/* microsecond_clock */
#define microsecond_clock__DIVIDER_MASK 0x0000FFFFu
#define microsecond_clock__ENABLE CYREG_CLK_DIVIDER_A00
#define microsecond_clock__ENABLE_MASK 0x80000000u
#define microsecond_clock__MASK 0x80000000u
#define microsecond_clock__REGISTER CYREG_CLK_DIVIDER_A00
#define microsecond_clock_1__DIVIDER_MASK 0x0000FFFFu
#define microsecond_clock_1__ENABLE CYREG_CLK_DIVIDER_B00
#define microsecond_clock_1__ENABLE_MASK 0x80000000u
#define microsecond_clock_1__MASK 0x80000000u
#define microsecond_clock_1__REGISTER CYREG_CLK_DIVIDER_B00

/* Miscellaneous */
#define CY_PROJECT_NAME "shutter_controller_v2"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */