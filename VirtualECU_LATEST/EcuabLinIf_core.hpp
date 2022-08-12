#pragma once
/******************************************************************************/
/* File   : EcuabLinIf_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabLinIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABLINIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, ECUABLINIF_CODE) Transmit             (void);              \
              FUNC(void, ECUABLINIF_CODE) ScheduleRequest      (void);              \
              FUNC(void, ECUABLINIF_CODE) GoToSleep            (void);              \
              FUNC(void, ECUABLINIF_CODE) Wakeup               (void);              \
              FUNC(void, ECUABLINIF_CODE) GetTrcvMode          (void);              \
              FUNC(void, ECUABLINIF_CODE) SetTrcvMode          (void);              \
              FUNC(void, ECUABLINIF_CODE) GetTrcvWakeupReason  (void);              \
              FUNC(void, ECUABLINIF_CODE) SetTrcvWakeupMode    (void);              \
              FUNC(void, ECUABLINIF_CODE) McalCancelTransmit       (void);              \
              FUNC(void, ECUABLINIF_CODE) CheckWakeup          (void);              \
              FUNC(void, ECUABLINIF_CODE) CbWakeupConfirmation (void);              \

#define ECUABLINIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, ECUABLINIF_CODE) Transmit             (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) ScheduleRequest      (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) GoToSleep            (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) Wakeup               (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) GetTrcvMode          (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) SetTrcvMode          (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) GetTrcvWakeupReason  (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) SetTrcvWakeupMode    (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) McalCancelTransmit       (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) CheckWakeup          (void) = 0;          \
      virtual FUNC(void, ECUABLINIF_CODE) CbWakeupConfirmation (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabLinIf_Functionality{
   public:
      ECUABLINIF_CORE_FUNCTIONALITIES_VIRTUAL
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

