#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_LinIf.h"

class class_LinIf{
   public:
      FUNC(void, LINIF_CODE) InitFunction         (void);
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
      FUNC(void, LINIF_CODE) MainFunction         (void);
};

extern class_LinIf LinIf;

