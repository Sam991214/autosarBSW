/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Os_Cfg.h
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Os definitions
 *********************************************************************************************************************/

#ifndef _OS_CFG_H_
# define _OS_CFG_H_

/* Os definitions */

/* Tasks */
# define OsTask_APP (0U)
# define OsTask_BSW_SCHM (1U)
# define OsTask_CPULoad_1S (2U)
# define OsTask_EMC_PWL_CCC (3U)
# define OsTask_LOCK_100ms (4U)

/* Alarms */
# define Rte_Al_TE_Cdd_SBC_UJA1169_Sbc_Test_Runnable (0U)
# define Rte_Al_TE_CpLedTask_LedRunnable (1U)
# define Rte_Al_TE_OsTask_APP_0_50ms (2U)
# define Rte_Al_TE2_OsTask_BSW_SCHM_0_10ms (3U)
# define Rte_Al_TE2_OsTask_BSW_SCHM_0_20ms (4U)
# define Rte_Al_TE_CanTp_CanTp_MainFunction (5U)
# define Rte_Al_TE_CPULoad_CPUload_basic_Runnable_1S (6U)
# define Rte_Al_TE_CCC_CCC_expand_Runnable_2S (7U)
# define Rte_Al_TE_EMC_EMC_expand_Runnable_10ms (8U)
# define Rte_Al_TE_PWL_PWL_expand_Runnable_20ms (9U)
# define Rte_Al_TE_LOCK_LOCK_basic_Runnable (10U)

/* Events */
# define Rte_Ev_Cyclic2_OsTask_BSW_SCHM_0_10ms (0x01)
# define Rte_Ev_Cyclic2_OsTask_BSW_SCHM_0_20ms (0x04)
# define Rte_Ev_Cyclic_OsTask_APP_0_50ms (0x02)
# define Rte_Ev_Run_CCC_CCC_expand_Runnable_2S (0x01)
# define Rte_Ev_Run_CanTp_CanTp_MainFunction (0x02)
# define Rte_Ev_Run_Cdd_SBC_UJA1169_Sbc_Test_Runnable (0x01)
# define Rte_Ev_Run_CpLedTask_LedRunnable (0x04)
# define Rte_Ev_Run_EMC_EMC_expand_Runnable_10ms (0x04)
# define Rte_Ev_Run_PWL_PWL_expand_Runnable_20ms (0x02)

/* Spinlocks */

/* Resources */

/* ScheduleTables */

/* Cores */

/* Trusted Functions */


#endif /* _OS_CFG_H_ */
