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
 *          File:  Rte_Test_SWC.h
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <Test_SWC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TEST_SWC_H
# define _RTE_TEST_SWC_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Test_SWC_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_NOINIT) Rte_Test_SWC_lwt_Test_Swc_Write_u8_Signal_lwt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_Test2_SWC_lwt_Test_Swc2_Write_u8_Signal_lwt; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */

# ifndef RTE_CORE

#  define RTE_START_SEC_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* RTE Helper-Functions */
FUNC(void, RTE_CODE) Rte_MemCpy(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num);
FUNC(void, RTE_CODE) Rte_MemCpy32(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) destination, P2CONST(void, AUTOMATIC, RTE_APPL_DATA) source, uint32_least num);

#  define RTE_STOP_SEC_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_TestEnum_lwt_u8_signal (0U)
#  define Rte_InitValue_lwt_Test_Swc_Read_u8_Signal_lwt (0U)
#  define Rte_InitValue_lwt_Test_Swc_Write_u8_Signal_lwt (0U)
#  define Rte_InitValue_volt_u16_port_test_lwt_u16_signal (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_TestEnum_lwt_u8_signal Rte_Read_Test_SWC_TestEnum_lwt_u8_signal
#  define Rte_Read_Test_SWC_TestEnum_lwt_u8_signal(data) (*(data) = 0U, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_lwt_Test_Swc_Read_u8_Signal_lwt Rte_Read_Test_SWC_lwt_Test_Swc_Read_u8_Signal_lwt
#  define Rte_Read_Test_SWC_lwt_Test_Swc_Read_u8_Signal_lwt(data) (*(data) = Rte_Test2_SWC_lwt_Test_Swc2_Write_u8_Signal_lwt, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_lwt_Test_Swc_Write_u8_Signal_lwt Rte_Write_Test_SWC_lwt_Test_Swc_Write_u8_Signal_lwt
#  define Rte_Write_Test_SWC_lwt_Test_Swc_Write_u8_Signal_lwt(data) (Rte_Test_SWC_lwt_Test_Swc_Write_u8_Signal_lwt = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_volt_array_port_test_lwt_u8_signal Rte_Write_Test_SWC_volt_array_port_test_lwt_u8_signal
#  define Rte_Write_Test_SWC_volt_array_port_test_lwt_u8_signal(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_volt_struct_record_test_lwt_St_Signal Rte_Write_Test_SWC_volt_struct_record_test_lwt_St_Signal
#  define Rte_Write_Test_SWC_volt_struct_record_test_lwt_St_Signal(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_volt_u16_port_test_lwt_u16_signal Rte_Write_Test_SWC_volt_u16_port_test_lwt_u16_signal
#  define Rte_Write_Test_SWC_volt_u16_port_test_lwt_u16_signal(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define Test_SWC_START_SEC_CODE
# include "Test_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Test_SWC_Init Test_SWC_Init
#  define RTE_RUNNABLE_Test_SWC_Main Test_SWC_Main
#  define RTE_RUNNABLE_Test_SWC_Service_Operation_lwt Test_SWC_Service_Operation_lwt
# endif

FUNC(void, Test_SWC_CODE) Test_SWC_Init(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Test_SWC_CODE) Test_SWC_Main(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, Test_SWC_CODE) Test_SWC_Service_Operation_lwt(uint8 arg_in_lwt, P2VAR(uint8, AUTOMATIC, RTE_TEST_SWC_APPL_VAR) arg_out_lwt); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Test_SWC_STOP_SEC_CODE
# include "Test_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TEST_SWC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
