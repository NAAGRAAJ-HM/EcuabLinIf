/******************************************************************************/
/* File   : LinIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgLinIf.hpp"
#include "LinIf_core.hpp"
#include "infLinIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINIF_AR_RELEASE_VERSION_MAJOR                                         4
#define LINIF_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(LINIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible LINIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(LINIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible LINIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_LinIf:
      public abstract_module
   ,  public class_LinIf_Functionality
{
   public:
      module_LinIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, LINIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, LINIF_CONFIG_DATA, LINIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, LINIF_CODE) DeInitFunction (void);
      FUNC(void, LINIF_CODE) MainFunction   (void);
      LINIF_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_LinIf, LINIF_VAR) LinIf(
   {
         LINIF_AR_RELEASE_VERSION_MAJOR
      ,  LINIF_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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
   CONSTP2CONST(CfgModule_TypeAbstract, LINIF_CONFIG_DATA, LINIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == LinIf_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == LinIf_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgLinIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == LinIf_InitCheck)
   }
#endif
}

FUNC(void, LINIF_CODE) module_LinIf::DeInitFunction(void){
#if(STD_ON == LinIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == LinIf_InitCheck)
   }
#endif
}

FUNC(void, LINIF_CODE) module_LinIf::MainFunction(void){
#if(STD_ON == LinIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == LinIf_InitCheck)
   }
#endif
}

FUNC(void, LINIF_CODE) module_LinIf::Transmit(void){
}

FUNC(void, LINIF_CODE) module_LinIf::ScheduleRequest(void){
}

FUNC(void, LINIF_CODE) module_LinIf::GoToSleep(void){
}

FUNC(void, LINIF_CODE) module_LinIf::Wakeup(void){
}

FUNC(void, LINIF_CODE) module_LinIf::GetTrcvMode(void){
}

FUNC(void, LINIF_CODE) module_LinIf::SetTrcvMode(void){
}

FUNC(void, LINIF_CODE) module_LinIf::GetTrcvWakeupReason(void){
}

FUNC(void, LINIF_CODE) module_LinIf::SetTrcvWakeupMode(void){
}

FUNC(void, LINIF_CODE) module_LinIf::CancelTransmit(void){
}

FUNC(void, LINIF_CODE) module_LinIf::CheckWakeup(void){
}

FUNC(void, LINIF_CODE) module_LinIf::CbWakeupConfirmation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

