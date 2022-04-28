#pragma once
/******************************************************************************/
/* File   : LinIf_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_LinIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define LINIF_COREFUNCTIONALITIES                                              \
              FUNC(void, LINIF_CODE) GetVersionInfo       (void);              \
              FUNC(void, LINIF_CODE) Transmit             (void);              \
              FUNC(void, LINIF_CODE) ScheduleRequest      (void);              \
              FUNC(void, LINIF_CODE) GoToSleep            (void);              \
              FUNC(void, LINIF_CODE) Wakeup               (void);              \
              FUNC(void, LINIF_CODE) GetTrcvMode          (void);              \
              FUNC(void, LINIF_CODE) SetTrcvMode          (void);              \
              FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void);              \
              FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void);              \
              FUNC(void, LINIF_CODE) CancelTransmit       (void);              \
              FUNC(void, LINIF_CODE) CheckWakeup          (void);              \
              FUNC(void, LINIF_CODE) CbWakeupConfirmation (void);              \

#define LINIF_COREFUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, LINIF_CODE) GetVersionInfo       (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) Transmit             (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) ScheduleRequest      (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GoToSleep            (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) Wakeup               (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GetTrcvMode          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) SetTrcvMode          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) GetTrcvWakeupReason  (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) SetTrcvWakeupMode    (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CancelTransmit       (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CheckWakeup          (void) = 0;          \
      virtual FUNC(void, LINIF_CODE) CbWakeupConfirmation (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_LinIf_Functionality{
   public:
      LINIF_COREFUNCTIONALITIES_VIRTUAL
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

