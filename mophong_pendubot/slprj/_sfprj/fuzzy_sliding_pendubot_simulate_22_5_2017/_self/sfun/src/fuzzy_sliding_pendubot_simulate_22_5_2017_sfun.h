#ifndef __fuzzy_sliding_pendubot_simulate_22_5_2017_sfun_h__
#define __fuzzy_sliding_pendubot_simulate_22_5_2017_sfun_h__

/* Include files */
#define S_FUNCTION_NAME                sf_sfun
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"
#include "sfcdebug.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */
extern uint32_T _fuzzy_sliding_pendubot_simulate_22_5_2017MachineNumber_;
extern real_T _sfTime_;

/* Variable Definitions */

/* Function Declarations */
extern void fuzzy_sliding_pendubot_simulate_22_5_2017_initializer(void);
extern void fuzzy_sliding_pendubot_simulate_22_5_2017_terminator(void);

/* Function Definitions */

/* We load infoStruct for rtw_optimation_info on demand in mdlSetWorkWidths and
   free it immediately in mdlStart. Given that this is machine-wide as
   opposed to chart specific, we use NULL check to make sure it gets loaded
   and unloaded once per machine even though the  methods mdlSetWorkWidths/mdlStart
   are chart/instance specific. The following methods abstract this out. */
extern mxArray* load_fuzzy_sliding_pendubot_simulate_22_5_2017_optimization_info
  (void);
extern void unload_fuzzy_sliding_pendubot_simulate_22_5_2017_optimization_info
  (void);

#endif
