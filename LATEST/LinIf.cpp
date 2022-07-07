/******************************************************************************/
/* File   : LinIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "LinIf.hpp"
#include "infLinIf_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_LinIf, LINIF_VAR) LinIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINIF_CODE) module_LinIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, LINIF_CONFIG_DATA, LINIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == LinIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == LinIf_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == LinIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LINIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LINIF_CODE) module_LinIf::DeInitFunction(
   void
){
#if(STD_ON == LinIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == LinIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LINIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LINIF_CODE) module_LinIf::MainFunction(
   void
){
#if(STD_ON == LinIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == LinIf_InitCheck)
   }
   else{
#if(STD_ON == LinIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  LINIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, LINIF_CODE) module_LinIf::Transmit(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::ScheduleRequest(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::GoToSleep(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::Wakeup(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::GetTrcvMode(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::SetTrcvMode(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::GetTrcvWakeupReason(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::SetTrcvWakeupMode(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::CancelTransmit(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::CheckWakeup(
   void
){
}

FUNC(void, LINIF_CODE) module_LinIf::CbWakeupConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

