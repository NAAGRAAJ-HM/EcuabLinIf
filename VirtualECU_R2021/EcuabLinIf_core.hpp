#pragma once
/******************************************************************************/
/* File   : EcuabLinIf_core.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabLinIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINIF_CORE_FUNCTIONALITIES                                             \
              FUNC(void, LINIF_CODE) Transmit             (void);              \
              FUNC(void, LINIF_CODE) ScheduleRequest      (void);              \
              FUNC(void, LINIF_CODE) GoToSleep            (void);              \
              FUNC(void, LINIF_CODE) Wakeup               (void);              \
              FUNC(void, LINIF_CODE) GetTrcvMode          (void);              \
              FUNC(void, LINIF_CODE) SetTrcvMode          (void);              \
              FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void);              \
              FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void);              \
              FUNC(void, LINIF_CODE) McalCancelTransmit       (void);              \
              FUNC(void, LINIF_CODE) CheckWakeup          (void);              \
              FUNC(void, LINIF_CODE) CbWakeupConfirmation (void);              \

#define LINIF_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, LINIF_CODE) Transmit             (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) ScheduleRequest      (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GoToSleep            (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) Wakeup               (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GetTrcvMode          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) SetTrcvMode          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) McalCancelTransmit       (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CheckWakeup          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CbWakeupConfirmation (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabLinIf_Functionality{
   public:
      LINIF_CORE_FUNCTIONALITIES_VIRTUAL
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

