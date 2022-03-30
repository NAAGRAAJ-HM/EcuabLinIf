/******************************************************************************/
/* File   : LinIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infLinIf_EcuM.hpp"
#include "infLinIf_Dcm.hpp"
#include "infLinIf_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINIF_AR_RELEASE_MAJOR_VERSION                                         4
#define LINIF_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LINIF_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible LINIF_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(LINIF_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible LINIF_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_LinIf:
      public abstract_module
{
   public:
      module_LinIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, LINIF_CODE) InitFunction   (void);
      FUNC(void, LINIF_CODE) DeInitFunction (void);
      FUNC(void, LINIF_CODE) MainFunction   (void);
};

extern VAR(module_LinIf, LINIF_VAR) LinIf;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, LINIF_VAR, LINIF_CONST) gptrinfEcuMClient_LinIf = &LinIf;
CONSTP2VAR(infDcmClient,  LINIF_VAR, LINIF_CONST) gptrinfDcmClient_LinIf  = &LinIf;
CONSTP2VAR(infSchMClient, LINIF_VAR, LINIF_CONST) gptrinfSchMClient_LinIf = &LinIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgLinIf.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_LinIf, LINIF_VAR) LinIf(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINIF_CODE) module_LinIf::InitFunction(
   CONSTP2CONST(CfgLinIf_Type, CFGLINIF_CONFIG_DATA, CFGLINIF_APPL_CONST) lptrCfgLinIf
){
   if(NULL_PTR == lptrCfgLinIf){
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgLinIf for memory faults
// use PBcfg_LinIf as back-up configuration
   }
   LinIf.IsInitDone = E_OK;
}

FUNC(void, LINIF_CODE) module_LinIf::DeInitFunction(void){
   LinIf.IsInitDone = E_NOT_OK;
}

FUNC(void, LINIF_CODE) module_LinIf::MainFunction(void){
}

class class_LinIf_Unused{
   public:
      FUNC(void, LINIF_CODE) GetVersionInfo       (void);
      FUNC(void, LINIF_CODE) Transmit             (void);
      FUNC(void, LINIF_CODE) ScheduleRequest      (void);
      FUNC(void, LINIF_CODE) GoToSleep            (void);
      FUNC(void, LINIF_CODE) Wakeup               (void);
      FUNC(void, LINIF_CODE) GetTrcvMode          (void);
      FUNC(void, LINIF_CODE) SetTrcvMode          (void);
      FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void);
      FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void);
      FUNC(void, LINIF_CODE) CancelTransmit       (void);
      FUNC(void, LINIF_CODE) CheckWakeup          (void);
      FUNC(void, LINIF_CODE) CbWakeupConfirmation (void);
};

FUNC(void, LINIF_CODE) class_LinIf_Unused::Transmit(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::ScheduleRequest(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::GoToSleep(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::Wakeup(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::GetTrcvMode(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::SetTrcvMode(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::GetTrcvWakeupReason(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::SetTrcvWakeupMode(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::CancelTransmit(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::CheckWakeup(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::CbWakeupConfirmation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

