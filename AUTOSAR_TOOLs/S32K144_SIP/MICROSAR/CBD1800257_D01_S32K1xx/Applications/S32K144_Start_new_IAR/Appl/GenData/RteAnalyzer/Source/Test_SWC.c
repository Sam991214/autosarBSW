/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Test_SWC.c
 *        Config:  S32K144_Start.dpa
 *     SW-C Type:  Test_SWC
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <Test_SWC>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Enum_lwt
 *   
 *
 * Voltage_u16_lwt
 *   
 *
 *********************************************************************************************************************/

#include "Rte_Test_SWC.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_Test_SWC.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void Test_SWC_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Voltage_u16_lwt: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Enum_lwt: Enumeration of integer in interval [0...255] with enumerators
 *   state1 (0U)
 *   state2 (1U)
 *   state3 (3U)
 *   state4 (4U)
 *
 * Array Types:
 * ============
 * Test_array_U8_lwt: Array with 9 element(s) of type uint8
 *
 * Record Types:
 * =============
 * Voltage_lwt_struct_record: Record with elements
 *   current of type uint8
 *   volt of type uint16
 *
 *********************************************************************************************************************/


#define Test_SWC_START_SEC_CODE
#include "Test_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Test_SWC_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Test_SWC_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Test_SWC_CODE) Test_SWC_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Test_SWC_Init
 *********************************************************************************************************************/

  Test_SWC_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Test_SWC_Main_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Test_SWC_CODE) Test_SWC_Main(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Test_SWC_Main
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  Enum_lwt Read_TestEnum_lwt_u8_signal;
  uint8 Read_lwt_Test_Swc_Read_u8_Signal_lwt;

  Test_array_U8_lwt Write_volt_array_port_test_lwt_u8_signal;
  Voltage_lwt_struct_record Write_volt_struct_record_test_lwt_St_Signal;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_Test_SWC_Rte_Read_TestEnum_lwt_u8_signal(&Read_TestEnum_lwt_u8_signal);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_Test_SWC_Rte_Read_lwt_Test_Swc_Read_u8_Signal_lwt(&Read_lwt_Test_Swc_Read_u8_Signal_lwt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = 1;
      break;
    case RTE_E_INVALID:
      fct_error = 1;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = 1;
      break;
  }

  fct_status = TSC_Test_SWC_Rte_Write_lwt_Test_Swc_Write_u8_Signal_lwt(Rte_InitValue_lwt_Test_Swc_Write_u8_Signal_lwt);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_volt_array_port_test_lwt_u8_signal, 0, sizeof(Write_volt_array_port_test_lwt_u8_signal));
  fct_status = TSC_Test_SWC_Rte_Write_volt_array_port_test_lwt_u8_signal(Write_volt_array_port_test_lwt_u8_signal);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  (void)memset(&Write_volt_struct_record_test_lwt_St_Signal, 0, sizeof(Write_volt_struct_record_test_lwt_St_Signal));
  fct_status = TSC_Test_SWC_Rte_Write_volt_struct_record_test_lwt_St_Signal(&Write_volt_struct_record_test_lwt_St_Signal);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }

  fct_status = TSC_Test_SWC_Rte_Write_volt_u16_port_test_lwt_u16_signal(Rte_InitValue_volt_u16_port_test_lwt_u16_signal);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
  }


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Test_SWC_Service_Operation_lwt_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Test_SWC_CODE) Test_SWC_Service_Operation_lwt(uint8 arg_in_lwt, P2VAR(uint8, AUTOMATIC, RTE_TEST_SWC_APPL_VAR) arg_out_lwt) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Test_SWC_Service_Operation_lwt
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Test_SWC_STOP_SEC_CODE
#include "Test_SWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Test_SWC_TestDefines(void)
{
  /* Enumeration Data Types */

  Enum_lwt Test_Enum_lwt_V_1 = state1;
  Enum_lwt Test_Enum_lwt_V_2 = state2;
  Enum_lwt Test_Enum_lwt_V_3 = state3;
  Enum_lwt Test_Enum_lwt_V_4 = state4;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
