/*****************************************************/
/* File   : LinIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "LinIf_EcuM.h"
#include "LinIf_SchM.h"
#include "LinIf_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_LinIf:
      public abstract_module
{
   public:
      FUNC(void, LINIF_CODE) InitFunction   (void);
      FUNC(void, LINIF_CODE) DeInitFunction (void);
      FUNC(void, LINIF_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_LinIf   LinIf;
infEcuMClient* gptrinfEcuMClient_LinIf = &LinIf;
infSchMClient* gptrinfSchMClient_LinIf = &LinIf;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, LINIF_CODE) module_LinIf::InitFunction(void){
}

FUNC(void, LINIF_CODE) module_LinIf::DeInitFunction(void){
}

FUNC(void, LINIF_CODE) module_LinIf::MainFunction(void){
}

FUNC(void, LINIF_CODE) class_LinIf_Unused::GetVersionInfo(void){
}

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

