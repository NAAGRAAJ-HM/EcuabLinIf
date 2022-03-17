/******************************************************************************/
/* File   : LinIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infLinIf_Version.h"

#include "module.h"
#include "infLinIf_EcuM.h"
#include "infLinIf_Dcm.h"
#include "infLinIf_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_LinIf:
      public abstract_module
{
   public:
      FUNC(void, LINIF_CODE) InitFunction   (void);
      FUNC(void, LINIF_CODE) DeInitFunction (void);
      FUNC(void, LINIF_CODE) GetVersionInfo (void);
      FUNC(void, LINIF_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
VAR(module_LinIf, LINIF_VAR) LinIf;
CONSTP2VAR(infEcuMClient, LINIF_VAR, LINIF_CONST) gptrinfEcuMClient_LinIf = &LinIf;
CONSTP2VAR(infDcmClient,  LINIF_VAR, LINIF_CONST) gptrinfDcmClient_LinIf  = &LinIf;
CONSTP2VAR(infSchMClient, LINIF_VAR, LINIF_CONST) gptrinfSchMClient_LinIf = &LinIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LINIF_CODE) module_LinIf::InitFunction(void){
}

FUNC(void, LINIF_CODE) module_LinIf::DeInitFunction(void){
}

FUNC(void, LINIF_CODE) module_LinIf::GetVersionInfo(void){
}

FUNC(void, LINIF_CODE) module_LinIf::MainFunction(void){
}

#include "LinIf_Unused.h"

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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

