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
 *        Config:  D:/study/autosar_bsw/AUTOSAR_TOOLs/S32K144_SIP/MICROSAR/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new_IAR/S32K144_Start.dpa
 *     SW-C Type:  Test_SWC
 *  Generated at:  Sun Jan  4 05:34:24 2026
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Application header file for SW-C <Test_SWC> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TEST_SWC_H
# define _RTE_TEST_SWC_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Test_SWC_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_Test_SWC
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_Test_SWC, RTE_CONST, RTE_CONST) Rte_Inst_Test_SWC; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_Test_SWC, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_TestEnum_lwt_u8_signal (0U)
# define Rte_InitValue_lwt_Test_Swc_Read_u8_Signal_lwt (0U)
# define Rte_InitValue_lwt_Test_Swc_Write_u8_Signal_lwt (0U)
# define Rte_InitValue_volt_u16_port_test_lwt_u16_signal (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Test_SWC_TestEnum_lwt_u8_signal(P2VAR(Enum_lwt, AUTOMATIC, RTE_TEST_SWC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Test_SWC_lwt_Test_Swc_Read_u8_Signal_lwt(P2VAR(uint8, AUTOMATIC, RTE_TEST_SWC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Test_SWC_lwt_Test_Swc_Write_u8_Signal_lwt(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Test_SWC_volt_array_port_test_lwt_u8_signal(P2CONST(uint8, AUTOMATIC, RTE_TEST_SWC_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Test_SWC_volt_array_port_test_lwt_u8_signal(P2CONST(Test_array_U8_lwt, AUTOMATIC, RTE_TEST_SWC_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Test_SWC_volt_struct_record_test_lwt_St_Signal(P2CONST(Voltage_lwt_struct_record, AUTOMATIC, RTE_TEST_SWC_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Test_SWC_volt_u16_port_test_lwt_u16_signal(Voltage_u16_lwt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_TestEnum_lwt_u8_signal Rte_Read_Test_SWC_TestEnum_lwt_u8_signal
# define Rte_Read_lwt_Test_Swc_Read_u8_Signal_lwt Rte_Read_Test_SWC_lwt_Test_Swc_Read_u8_Signal_lwt


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_lwt_Test_Swc_Write_u8_Signal_lwt Rte_Write_Test_SWC_lwt_Test_Swc_Write_u8_Signal_lwt
# define Rte_Write_volt_array_port_test_lwt_u8_signal Rte_Write_Test_SWC_volt_array_port_test_lwt_u8_signal
# define Rte_Write_volt_struct_record_test_lwt_St_Signal Rte_Write_Test_SWC_volt_struct_record_test_lwt_St_Signal
# define Rte_Write_volt_u16_port_test_lwt_u16_signal Rte_Write_Test_SWC_volt_u16_port_test_lwt_u16_signal




# define Test_SWC_START_SEC_CODE
# include "Test_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: Test_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Test_SWC_Init Test_SWC_Init
FUNC(void, Test_SWC_CODE) Test_SWC_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Test_SWC_Main
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 50ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_TestEnum_lwt_u8_signal(Enum_lwt *data)
 *   Std_ReturnType Rte_Read_lwt_Test_Swc_Read_u8_Signal_lwt(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_lwt_Test_Swc_Write_u8_Signal_lwt(uint8 data)
 *   Std_ReturnType Rte_Write_volt_array_port_test_lwt_u8_signal(const uint8 *data)
 *     Argument data: uint8* is of type Test_array_U8_lwt
 *   Std_ReturnType Rte_Write_volt_struct_record_test_lwt_St_Signal(const Voltage_lwt_struct_record *data)
 *   Std_ReturnType Rte_Write_volt_u16_port_test_lwt_u16_signal(Voltage_u16_lwt data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Test_SWC_Main Test_SWC_Main
FUNC(void, Test_SWC_CODE) Test_SWC_Main(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Test_SWC_Service_Operation_lwt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Operation_lwt> of PortPrototype <Test_SWC_Service>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void Test_SWC_Service_Operation_lwt(uint8 arg_in_lwt, uint8 *arg_out_lwt)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_Test_SWC_Service_Operation_lwt Test_SWC_Service_Operation_lwt
FUNC(void, Test_SWC_CODE) Test_SWC_Service_Operation_lwt(uint8 arg_in_lwt, P2VAR(uint8, AUTOMATIC, RTE_TEST_SWC_APPL_VAR) arg_out_lwt); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define Test_SWC_STOP_SEC_CODE
# include "Test_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_TEST_SWC_H */
