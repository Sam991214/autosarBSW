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
#include "Pwm.h"



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
static  uint16 Pwm_duty = 0;

FUNC(void, CtLedTask_CODE) CtLedTask_InitRunnable(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CtLedTask_InitRunnable
 *********************************************************************************************************************/
static uint16 resultbuffer[1]={0};
Adc_SetupResultBuffer(0,resultbuffer);//建立 Group 与 内存数组 的物理连接，风险是可能读到正在改的数据。硬件填写的风险：ADC 硬件（或 DMA）在后台填数据是非常“粗鲁”的，它不管你此时此刻是不是正在读。如果你直接读数组，读到一半硬件正好在改下一位，你的数据就“撕裂”了（一半旧一半新）。
//Adc_ReadGroup 的安全屏障，驱动会把 MyArray 里的安全数据拷贝一份给你。：当你调用这个函数时，驱动会帮你检查：
//转换是不是真的干完了？
//数据是不是有效？
//它会以一种原子操作的方式，确保你拿到的这一组数据是同一时刻生成的“完整快照”。

Adc_EnableGroupNotification(0);//开启回调函数通知，不然回调函数没用
Gpt_EnableNotification(0);//开启回调函数通知，不然回调函数没用
Gpt_StartTimer(0,240000);//id:0 目标值：10ms 频率24mhz，所以时间为1/24000000，为一秒钟跳24000000下，10ms为0.01s，所以0.01*24000000为240000,2400回调一次


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


static  unsigned char lwt_develop_RearLeftWinPos = 0;
static  unsigned char lwt_develop_RearRightWinPos = 0;
//static  unsigned char RearLeft_window_LWT = 1;
//static  unsigned char RearRight_window_case1 = 1;
static  unsigned char RearLeft_window_LWT = 127;
static  unsigned char RearRight_window_case1 = 32;

static  unsigned char ms10_3times_cnt = 0;//mixed下10ms连发三帧+1帧 计时300ms x 10 = 3000ms才发 

static  unsigned char lwt_switch = 0;//开关按钮ptc12
static  unsigned char lwt_led = 0;//灯ptd0
static  Pwm_OutputStateType pwmstate;
static  int ledcnt = 0;






 ledcnt++;
// Rte_Write_lwt_Lampcnt_u8_lwt_Signal(ledcnt);
 
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

 
 

 
 lwt_switch = Dio_ReadChannel(DioConf_DioChannel_DioChannel_ptc12_lwt_switch);//按下开关时，电源导通到上拉电阻，收到为高
 if(lwt_switch == 1)
 {
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_ptd0_lwt_led,0);//低输出时，电源导通，灯亮
 }
 else
 {
	Dio_WriteChannel(DioConf_DioChannel_DioChannel_ptd0_lwt_led,1);//高输出时，电源无法导通，灯灭
 }
 Com_SendSignal(ComConf_ComSignal_RearRight_window_case1, (&lwt_switch));//发送开关状态 报文为0x600

 Adc_StartGroupConversion(0);//开始 0 group adc 转换,调用一次，oneshot获取一次，并且触发回调中断，而continued是点一下之后都是采集一轮继续采集，并且周期触发回调 
 Pwm_SetDutyCycle(0,Pwm_duty);//通道0,扭旋钮调节小灯ptd15亮度
 pwmstate = Pwm_GetOutputState(0);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

void GPT_10ms_lwt(void)//GPT定时器在/ActiveEcuC/Gpt/GptChannelConfigSet/GptChannelConfiguration中被定义，10ms要在上面的gpt_starter定义
{
	static unsigned char  LedState=0;
	static int  LedCnt=0;
	 
	if(LedCnt>=500)//100*0.01=1s
	{
		LedState ^= 0x01;
		Dio_WriteChannel(112,LedState);//1s闪一次
		LedCnt = 0;
	}
	else
	{
		LedCnt++; 
	}

}

static  unsigned char cbkcnt = 1;

//接收回调函数和超时回调函数头声明的头文件，用于在这边定义函数
 //firsttime out 配置了1000ms，就是超时模块在mcu起来1000ms后就开始判断超时，否则就是第收到了第一次报文后，就开始触发超时模块
 FUNC(void, COM_APPL_CODE) lwt_rear_left_win_callback(void)
 {
	cbkcnt = 0;//收到了报文发0
    Com_SendSignal(ComConf_ComSignal_RearLeft_window_LWT, (&cbkcnt));
 }
 FUNC(void, COM_APPL_CODE) lwt_rear_left_win_timeout(void)
 {
    cbkcnt = 1;
	Com_SendSignal(ComConf_ComSignal_RearLeft_window_LWT, (&cbkcnt));//超时发1或者2
 }
 void adc_group_notification_lwt(void)
 {
	static  uint16 adc_data = 0;
	static  uint16 retvalue = 0;
	//获取adc结果函数只能放在中断回调中，放在主程序task中会造成数据不同步，adc没转完只会读到0
	retvalue = Adc_ReadGroup(0, &adc_data);//最大4096，为了满足放进去一个byte大小，需要除20缩小,不用中断时，需要把错误检测给关了，不然会强行读不到数据
	Pwm_duty = adc_data*8; //因为占空比最大有32768，所以adcdata最多4096，所以*8扩大到4万多，duty超过也按最大来
  	adc_data = adc_data/20;//为了发出去挤在1个byte放的下，故意缩小20倍

  	Com_SendSignal(ComConf_ComSignal_sig_LampCnt_omsg_MyECU_Lamp_oCAN00_f37e68ea_Tx, (&adc_data));
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
