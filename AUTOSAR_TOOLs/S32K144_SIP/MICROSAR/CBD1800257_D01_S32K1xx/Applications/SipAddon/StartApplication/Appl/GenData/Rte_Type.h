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
 *          File:  Rte_Type.h
 *        Config:  TsiStandard.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

# define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

# define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

# define Rte_TypeDef_DataArray_Type_2
typedef uint8 DataArray_Type_2[2];

# define Rte_TypeDef_Dcm_Data10ByteType
typedef uint8 Dcm_Data10ByteType[10];

# define Rte_TypeDef_Dcm_Data15ByteType
typedef uint8 Dcm_Data15ByteType[15];

# define Rte_TypeDef_Dcm_Data16ByteType
typedef uint8 Dcm_Data16ByteType[16];

# define Rte_TypeDef_Dcm_Data17ByteType
typedef uint8 Dcm_Data17ByteType[17];

# define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

# define Rte_TypeDef_Dcm_Data28ByteType
typedef uint8 Dcm_Data28ByteType[28];

# define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

# define Rte_TypeDef_Dcm_Data3ByteType
typedef uint8 Dcm_Data3ByteType[3];

# define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

# define Rte_TypeDef_Dcm_Data50ByteType
typedef uint8 Dcm_Data50ByteType[50];

# define Rte_TypeDef_Dcm_Data6ByteType
typedef uint8 Dcm_Data6ByteType[6];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[2];

# define Rte_TypeDef_DtMemoryProtectionDataElementType
typedef struct
{
  uint8 Value;
  boolean InvalidAccess;
} DtMemoryProtectionDataElementType;

# define Rte_TypeDef_BswM_ESH_Mode
typedef uint8 BswM_ESH_Mode;

# define Rte_TypeDef_BswM_ESH_RunRequest
typedef uint8 BswM_ESH_RunRequest;

# define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

# define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

# define Rte_TypeDef_ComM_UserHandleType
typedef uint8 ComM_UserHandleType;

# define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

# define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

# define Rte_TypeDef_Dcm_ControlDtcSettingType
typedef uint8 Dcm_ControlDtcSettingType;

# define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

# define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

# define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

# define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

# define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;

# define Rte_TypeDef_EnumActiveComponentType
typedef uint8 EnumActiveComponentType;

# define Rte_TypeDef_EnumMEM_BlockStateType
typedef uint8 EnumMEM_BlockStateType;

# define Rte_TypeDef_EnumNM_ApplStateType
typedef uint8 EnumNM_ApplStateType;

# define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

# define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

# define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

# define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

# define Rte_TypeDef_WdgM_CheckpointIdType
typedef uint16 WdgM_CheckpointIdType;

# define Rte_TypeDef_WdgM_GlobalStatusType
typedef uint8 WdgM_GlobalStatusType;

# define Rte_TypeDef_WdgM_LocalStatusType
typedef uint8 WdgM_LocalStatusType;

# define Rte_TypeDef_WdgM_ModeType
typedef uint8 WdgM_ModeType;

# define Rte_TypeDef_WdgM_SupervisedEntityIdType
typedef uint16 WdgM_SupervisedEntityIdType;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(DtMemoryProtectionDataElementType, RTE_CONST) Rte_C_DtMemoryProtectionDataElementType_0; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# include "Rte_DataHandleType.h"

# ifdef RTE_MICROSAR_PIM_EXPORT


/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMUsers; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumActiveComponentType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_ActiveComponent; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_RxSigValue0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_COM_TxSigValue0; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_DIAG_LastRxData; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_ActiveBlock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_BlockState1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumMEM_BlockStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_BlockState2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer1; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_MEM_DataBuffer2; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveChannelHasFullComRequest; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ActiveComMChannel; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(EnumNM_ApplStateType, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_ApplState; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_NM_BusSleepModeTimer; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_TxCtrlSigValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_TxDataSigValue; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_Uptime; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_WDG_AliveCycle; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplication_WDG_AliveTimer; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP) Rte_StartApplicationMemoryAccessState_PimMemoryAccessState; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_DEFAULT_RTE_OsApplication_NonTrusted_Core0_PIM_GROUP_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# endif

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT    (0U)
# define RTE_STATE_SCHM_INIT (1U)
# define RTE_STATE_INIT      (2U)

# define RTE_START_SEC_VAR_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT) Rte_InitState; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef RTE_CORE

/**********************************************************************************************************************
 * Buffers for unqueued S/R
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(BswM_ESH_RunRequest, RTE_VAR_INIT) Rte_BswM_Provide_BswMRteModeRequestPort_requestedMode; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint8, RTE_VAR_INIT) Rte_StartApplication_PpTrustedData_DeValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_StartApplicationTrusted_PpTrustedDataVerification_DeValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef struct
{
  Rte_BitType Rte_ModeSwitchAck_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Ack : 1;
} Rte_OsApplication_NonTrusted_Core0_AckFlagsType;

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(Rte_OsApplication_NonTrusted_Core0_AckFlagsType, RTE_VAR_INIT) Rte_OsApplication_NonTrusted_Core0_AckFlags; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Buffer for inter-runnable variables
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(DtMemoryProtectionDataElementType, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvMemoryProtectionData; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */
extern VAR(uint16, RTE_VAR_INIT) Rte_Irv_StartApplication_IrvOccuranceCounterDid; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define RTE_START_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_Irv_StartApplicationTrusted_IrvValue; /* PRQA S 0850, 3408, 1504 */ /* MD_MSR_19.8, MD_Rte_3408, MD_MSR_8.10 */

#  define RTE_STOP_SEC_VAR_OsApplication_Trusted_Core0_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Data structures for mode management
 *********************************************************************************************************************/


#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(BswM_ESH_Mode, RTE_VAR_INIT) Rte_ModeMachine_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode; /* PRQA S 3408 */ /* MD_Rte_3408 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# endif /* defined(RTE_CORE) */

#endif /* _RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/
