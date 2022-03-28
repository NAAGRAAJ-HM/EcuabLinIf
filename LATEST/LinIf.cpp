/******************************************************************************/
/* File   : LinIf.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgLinIf.hpp"
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
      FUNC(void, LINIF_CODE) InitFunction   (void);
      FUNC(void, LINIF_CODE) DeInitFunction (void);
      FUNC(void, LINIF_CODE) GetVersionInfo (void);
      FUNC(void, LINIF_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, LINIF_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_LinIf, LINIF_VAR) LinIf;
CONSTP2VAR(infEcuMClient, LINIF_VAR, LINIF_CONST) gptrinfEcuMClient_LinIf = &LinIf;
CONSTP2VAR(infDcmClient,  LINIF_VAR, LINIF_CONST) gptrinfDcmClient_LinIf  = &LinIf;
CONSTP2VAR(infSchMClient, LINIF_VAR, LINIF_CONST) gptrinfSchMClient_LinIf = &LinIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, LINIF_CODE) module_LinIf::InitFunction(void){
   LinIf.IsInitDone = E_OK;
}

FUNC(void, LINIF_CODE) module_LinIf::DeInitFunction(void){
   LinIf.IsInitDone = E_NOT_OK;
}

FUNC(void, LINIF_CODE) module_LinIf::GetVersionInfo(void){
#if(STD_ON == LinIf_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
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

