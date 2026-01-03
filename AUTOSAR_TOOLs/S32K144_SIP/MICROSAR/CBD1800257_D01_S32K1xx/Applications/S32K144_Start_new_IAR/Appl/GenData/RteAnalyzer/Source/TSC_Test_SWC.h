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
 *          File:  TSC_Test_SWC.h
 *        Config:  S32K144_Start.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1800257
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_Test_SWC_Rte_Read_TestEnum_lwt_u8_signal(Enum_lwt *data);
Std_ReturnType TSC_Test_SWC_Rte_Read_lwt_Test_Swc_Read_u8_Signal_lwt(uint8 *data);

/** Sender receiver - explicit write services */
Std_ReturnType TSC_Test_SWC_Rte_Write_lwt_Test_Swc_Write_u8_Signal_lwt(uint8 data);
Std_ReturnType TSC_Test_SWC_Rte_Write_volt_array_port_test_lwt_u8_signal(const uint8 *data);
Std_ReturnType TSC_Test_SWC_Rte_Write_volt_struct_record_test_lwt_St_Signal(const Voltage_lwt_struct_record *data);
Std_ReturnType TSC_Test_SWC_Rte_Write_volt_u16_port_test_lwt_u16_signal(Voltage_u16_lwt data);




