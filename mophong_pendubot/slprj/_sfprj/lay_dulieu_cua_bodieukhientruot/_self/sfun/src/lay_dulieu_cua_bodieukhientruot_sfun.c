/* Include files */

#include "lay_dulieu_cua_bodieukhientruot_sfun.h"
#include "c4_lay_dulieu_cua_bodieukhientruot.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint32_T _lay_dulieu_cua_bodieukhientruotMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void lay_dulieu_cua_bodieukhientruot_initializer(void)
{
}

void lay_dulieu_cua_bodieukhientruot_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_lay_dulieu_cua_bodieukhientruot_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (chartFileNumber==4) {
    c4_lay_dulieu_cua_bodieukhientruot_method_dispatcher(simstructPtr, method,
      data);
    return 1;
  }

  return 0;
}

unsigned int sf_lay_dulieu_cua_bodieukhientruot_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1234505877U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1923664703U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1905284300U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(617097330U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3162087198U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1408436943U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1843600678U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4063869690U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 4:
        {
          extern void sf_c4_lay_dulieu_cua_bodieukhientruot_get_check_sum
            (mxArray *plhs[]);
          sf_c4_lay_dulieu_cua_bodieukhientruot_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3564696471U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(678668628U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1090454852U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3896867807U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2489698314U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2993450839U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1809670771U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1010668381U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_lay_dulieu_cua_bodieukhientruot_autoinheritance_info( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  char aiChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[2], aiChksum,sizeof(aiChksum)/sizeof(char));
  aiChksum[(sizeof(aiChksum)/sizeof(char)-1)] = '\0';

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(aiChksum, "Cu0V8akRVqbMC6hi97ntYC") == 0) {
          extern mxArray
            *sf_c4_lay_dulieu_cua_bodieukhientruot_get_autoinheritance_info(void);
          plhs[0] =
            sf_c4_lay_dulieu_cua_bodieukhientruot_get_autoinheritance_info();
          break;
        }

        plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_lay_dulieu_cua_bodieukhientruot_get_eml_resolved_functions_info(
  int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        extern const mxArray
          *sf_c4_lay_dulieu_cua_bodieukhientruot_get_eml_resolved_functions_info
          (void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c4_lay_dulieu_cua_bodieukhientruot_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void lay_dulieu_cua_bodieukhientruot_debug_initialize(void)
{
  _lay_dulieu_cua_bodieukhientruotMachineNumber_ = sf_debug_initialize_machine(
    "lay_dulieu_cua_bodieukhientruot","sfun",0,1,0,0,0);
  sf_debug_set_machine_event_thresholds
    (_lay_dulieu_cua_bodieukhientruotMachineNumber_,0,0);
  sf_debug_set_machine_data_thresholds
    (_lay_dulieu_cua_bodieukhientruotMachineNumber_,0);
}

void lay_dulieu_cua_bodieukhientruot_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
mxArray* load_lay_dulieu_cua_bodieukhientruot_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info(
      "lay_dulieu_cua_bodieukhientruot", "lay_dulieu_cua_bodieukhientruot");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_lay_dulieu_cua_bodieukhientruot_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
