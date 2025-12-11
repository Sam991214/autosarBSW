/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CtLedTask.c
 *        Config:  C:/Vector/CBD1800257_D01_S32K1xx/Applications/S32K144_Start_new/S32K144_Start.dpa
 *     SW-C Type:  CtLedTask
 *  Generated at:  Mon Jun  7 11:19:43 2021
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  C-Code implementation template for SW-C <CtLedTask>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CtLedTask.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Dio.h"
#include "Com_Cfg.h"//引入发送id宏定义头文件
#include "Appl_Cbk.h"//接收回调函数和超时回调函数头声明的头文件，用于在这边定义函数



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
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 *
 *********************************************************************************************************************/


#define CtLedTask_START_SEC_CODE
#include "CtLedTask_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CtLedTask_InitRunnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_GetCurrentComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_GetMaxComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_GetRequestedComMode(ComM_ModeType *ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: CtLedTask_InitRunnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtLedTask_CODE) CtLedTask_InitRunnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CtLedTask_InitRunnable
 *********************************************************************************************************************/

Rte_Call_UR_CN_CAN00_06ecbb07_RequestComMode(COMM_FULL_COMMUNICATION);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LedRunnable
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 500ms
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: LedRunnable_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
//此函数周期为300ms
FUNC(void, CtLedTask_CODE) LedRunnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LedRunnable
 *********************************************************************************************************************/

static unsigned char  LedState=0;
static int  LedCnt=0;

LedCnt++;

LedState ^= 0x01;

static  int ledcnt = 0;
static  unsigned char lwt_develop_RearLeftWinPos = 0;
static  unsigned char lwt_develop_RearRightWinPos = 0;
//static  unsigned char RearLeft_window_LWT = 1;
//static  unsigned char RearRight_window_case1 = 1;
static  unsigned char RearLeft_window_LWT = 127;
static  unsigned char RearRight_window_case1 = 32;

static  unsigned char ms10_3times_cnt = 0;//mixed下10ms连发三帧+1帧 计时300ms x 10 = 3000ms才发 



 ledcnt++;
 Rte_Write_lwt_Lampcnt_u8_lwt_Signal(ledcnt);
// Rte_Write_lwt_RearInterLight_Bool_lwtSignal(1);//mytransmit
// if(ms10_3times_cnt == 10)
// {
//	Com_SendSignal(ComConf_ComSignal_RearLeft_window_LWT, (&RearLeft_window_LWT));//此信号triggered下，调用了马上发出，因为bsw增加了发3次，又因为是mixed模式，就是3连发+1直发为4次
//	ms10_3times_cnt = 0;
// }
// else
// {
//	ms10_3times_cnt++;//强行改为3000ms才发出，方便和下面的pending对照
// }
//
// Com_SendSignal(ComConf_ComSignal_RearRight_window_case1, (&RearRight_window_case1));//pending下300ms调用了也没用，要这个ipdu的周期，3000ms到了才发
 
// Com_SendSignal(ComConf_ComSignal_RearLeft_window_LWT, (&RearLeft_window_LWT));

// Rte_Write_lwt_develop_FrongLight_bool_signal_lwt_develop(1);
// Rte_Read_lwt_develop_RearLeftWinPos_u8_signal_lwt_develop(&lwt_develop_RearLeftWinPos);
// Rte_Read_lwt_develop_RearRightWinPos_u8_signal_lwt_develop(&lwt_develop_RearRightWinPos);

Com_SendSignal(ComConf_ComGroupSignal_lwt_sig_group_000, (&RearLeft_window_LWT));//测试和group发送
Com_SendSignal(ComConf_ComGroupSignal_lwt_sig_group_001, (&RearRight_window_case1));
Com_SendSignalGroup(ComConf_ComSignalGroup_lwt_ComSignalGroup);//信号的属性以group为主，整个ipdu的发送以group属性为准

 
 Dio_WriteChannel(112,LedState);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

static  unsigned char cbkcnt = 1;

//接收回调函数和超时回调函数头声明的头文件，用于在这边定义函数
 //firsttime out 配置了1000ms，就是超时模块在mcu起来1000ms后就开始判断超时，否则就是第收到了第一次报文后，就开始触发超时模块
 FUNC(void, COM_APPL_CODE) lwt_rear_left_win_callback(void)
 {
	cbkcnt = 0;//收到了报文发0
 }
 FUNC(void, COM_APPL_CODE) lwt_rear_left_win_timeout(void)
 {
//	cbkcnt = 2;
	Com_SendSignal(ComConf_ComSignal_RearLeft_window_LWT, (&cbkcnt));//超时发1
 }

 



#define CtLedTask_STOP_SEC_CODE
#include "CtLedTask_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
