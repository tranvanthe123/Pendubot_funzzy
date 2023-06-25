#ifndef __c5_pendubot_simulate_1_8_5_2017_fuzzy_h__
#define __c5_pendubot_simulate_1_8_5_2017_fuzzy_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_SFc5_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct
#define typedef_SFc5_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c5_sfEvent;
  boolean_T c5_isStable;
  boolean_T c5_doneDoubleBufferReInit;
  uint8_T c5_is_active_c5_pendubot_simulate_1_8_5_2017_fuzzy;
} SFc5_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct;

#endif                                 /*typedef_SFc5_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c5_pendubot_simulate_1_8_5_2017_fuzzy_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c5_pendubot_simulate_1_8_5_2017_fuzzy_get_check_sum(mxArray *
  plhs[]);
extern void c5_pendubot_simulate_1_8_5_2017_fuzzy_method_dispatcher(SimStruct *S,
  int_T method, void *data);

#endif
