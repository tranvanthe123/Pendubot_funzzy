/* Include files */

#include "blascompat32.h"
#include "pendubot_simulate_1_8_5_2017_fuzzy_sfun.h"
#include "c2_pendubot_simulate_1_8_5_2017_fuzzy.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "pendubot_simulate_1_8_5_2017_fuzzy_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c2_debug_family_names[15] = { "beta1", "beta2", "beta3",
  "beta4", "beta5", "g", "nargin", "nargout", "q1", "q1_dot", "q2", "q2_dot",
  "to1", "q1_2dot", "q2_2dot" };

/* Function Declarations */
static void initialize_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void initialize_params_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void enable_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void disable_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_st);
static void finalize_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void sf_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void c2_chartstep_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void initSimStructsc2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static real_T c2_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_q2_2dot, const char_T *c2_identifier);
static real_T c2_b_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static void c2_info_helper(c2_ResolvedFunctionInfo c2_info[14]);
static void c2_eml_scalar_eg
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);
static real_T c2_mpower(SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct
  *chartInstance, real_T c2_a);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_c_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static uint8_T c2_d_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_b_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy, const char_T
   *c2_identifier);
static uint8_T c2_e_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy = 0U;
}

static void initialize_params_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
}

static void enable_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  real_T c2_hoistedGlobal;
  real_T c2_u;
  const mxArray *c2_b_y = NULL;
  real_T c2_b_hoistedGlobal;
  real_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  uint8_T c2_c_hoistedGlobal;
  uint8_T c2_c_u;
  const mxArray *c2_d_y = NULL;
  real_T *c2_q1_2dot;
  real_T *c2_q2_2dot;
  c2_q2_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_q1_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(3), FALSE);
  c2_hoistedGlobal = *c2_q1_2dot;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = *c2_q2_2dot;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_c_hoistedGlobal =
    chartInstance->c2_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  c2_c_u = c2_c_hoistedGlobal;
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", &c2_c_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  sf_mex_assign(&c2_st, c2_y, FALSE);
  return c2_st;
}

static void set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T *c2_q1_2dot;
  real_T *c2_q2_2dot;
  c2_q2_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_q1_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c2_doneDoubleBufferReInit = TRUE;
  c2_u = sf_mex_dup(c2_st);
  *c2_q1_2dot = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 0)), "q1_2dot");
  *c2_q2_2dot = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 1)), "q2_2dot");
  chartInstance->c2_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy =
    c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 2)),
    "is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy");
  sf_mex_destroy(&c2_u);
  c2_update_debugger_state_c2_pendubot_simulate_1_8_5_2017_fuzzy(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
}

static void sf_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
  real_T *c2_q1;
  real_T *c2_q1_2dot;
  real_T *c2_q1_dot;
  real_T *c2_q2;
  real_T *c2_q2_dot;
  real_T *c2_to1;
  real_T *c2_q2_2dot;
  c2_q2_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_to1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_q2_dot = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_q2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_q1_dot = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_q1_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_q1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c2_q1, 0U);
  _SFD_DATA_RANGE_CHECK(*c2_q1_2dot, 1U);
  _SFD_DATA_RANGE_CHECK(*c2_q1_dot, 2U);
  _SFD_DATA_RANGE_CHECK(*c2_q2, 3U);
  _SFD_DATA_RANGE_CHECK(*c2_q2_dot, 4U);
  _SFD_DATA_RANGE_CHECK(*c2_to1, 5U);
  _SFD_DATA_RANGE_CHECK(*c2_q2_2dot, 6U);
  chartInstance->c2_sfEvent = CALL_EVENT;
  c2_chartstep_c2_pendubot_simulate_1_8_5_2017_fuzzy(chartInstance);
  sf_debug_check_for_state_inconsistency
    (_pendubot_simulate_1_8_5_2017_fuzzyMachineNumber_,
     chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c2_chartstep_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
  real_T c2_hoistedGlobal;
  real_T c2_b_hoistedGlobal;
  real_T c2_c_hoistedGlobal;
  real_T c2_d_hoistedGlobal;
  real_T c2_e_hoistedGlobal;
  real_T c2_q1;
  real_T c2_q1_dot;
  real_T c2_q2;
  real_T c2_q2_dot;
  real_T c2_to1;
  uint32_T c2_debug_family_var_map[15];
  real_T c2_beta1;
  real_T c2_beta2;
  real_T c2_beta3;
  real_T c2_beta4;
  real_T c2_beta5;
  real_T c2_g;
  real_T c2_nargin = 5.0;
  real_T c2_nargout = 2.0;
  real_T c2_q1_2dot;
  real_T c2_q2_2dot;
  real_T c2_x;
  real_T c2_b_x;
  real_T c2_b;
  real_T c2_y;
  real_T c2_B;
  real_T c2_b_y;
  real_T c2_c_y;
  real_T c2_d_y;
  real_T c2_b_b;
  real_T c2_e_y;
  real_T c2_c_b;
  real_T c2_f_y;
  real_T c2_c_x;
  real_T c2_d_x;
  real_T c2_a;
  real_T c2_d_b;
  real_T c2_g_y;
  real_T c2_e_b;
  real_T c2_h_y;
  real_T c2_e_x;
  real_T c2_f_x;
  real_T c2_b_a;
  real_T c2_f_b;
  real_T c2_i_y;
  real_T c2_g_x;
  real_T c2_h_x;
  real_T c2_c_a;
  real_T c2_g_b;
  real_T c2_j_y;
  real_T c2_i_x;
  real_T c2_j_x;
  real_T c2_h_b;
  real_T c2_k_y;
  real_T c2_k_x;
  real_T c2_l_x;
  real_T c2_i_b;
  real_T c2_l_y;
  real_T c2_m_x;
  real_T c2_n_x;
  real_T c2_d_a;
  real_T c2_j_b;
  real_T c2_m_y;
  real_T c2_e_a;
  real_T c2_k_b;
  real_T c2_o_x;
  real_T c2_p_x;
  real_T c2_l_b;
  real_T c2_n_y;
  real_T c2_b_B;
  real_T c2_o_y;
  real_T c2_p_y;
  real_T c2_q_y;
  real_T c2_q_x;
  real_T c2_r_x;
  real_T c2_m_b;
  real_T c2_r_y;
  real_T c2_f_a;
  real_T c2_n_b;
  real_T c2_s_y;
  real_T c2_s_x;
  real_T c2_t_x;
  real_T c2_o_b;
  real_T c2_t_y;
  real_T c2_p_b;
  real_T c2_u_y;
  real_T c2_g_a;
  real_T c2_q_b;
  real_T c2_v_y;
  real_T c2_u_x;
  real_T c2_v_x;
  real_T c2_h_a;
  real_T c2_r_b;
  real_T c2_w_y;
  real_T c2_w_x;
  real_T c2_x_x;
  real_T c2_s_b;
  real_T c2_x_y;
  real_T c2_t_b;
  real_T c2_y_y;
  real_T c2_y_x;
  real_T c2_ab_x;
  real_T c2_i_a;
  real_T c2_u_b;
  real_T c2_ab_y;
  real_T c2_bb_x;
  real_T c2_cb_x;
  real_T c2_v_b;
  real_T c2_bb_y;
  real_T c2_w_b;
  real_T c2_cb_y;
  real_T c2_db_x;
  real_T c2_eb_x;
  real_T c2_j_a;
  real_T c2_x_b;
  real_T c2_db_y;
  real_T c2_y_b;
  real_T c2_eb_y;
  real_T c2_fb_x;
  real_T c2_gb_x;
  real_T c2_k_a;
  real_T c2_ab_b;
  real_T c2_fb_y;
  real_T c2_hb_x;
  real_T c2_ib_x;
  real_T c2_bb_b;
  real_T c2_gb_y;
  real_T c2_l_a;
  real_T c2_cb_b;
  real_T c2_hb_y;
  real_T c2_m_a;
  real_T c2_db_b;
  real_T *c2_b_q2_2dot;
  real_T *c2_b_q1_2dot;
  real_T *c2_b_to1;
  real_T *c2_b_q2_dot;
  real_T *c2_b_q2;
  real_T *c2_b_q1_dot;
  real_T *c2_b_q1;
  c2_b_q2_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c2_b_to1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_b_q2_dot = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_b_q2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_b_q1_dot = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_b_q1_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_b_q1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  c2_hoistedGlobal = *c2_b_q1;
  c2_b_hoistedGlobal = *c2_b_q1_dot;
  c2_c_hoistedGlobal = *c2_b_q2;
  c2_d_hoistedGlobal = *c2_b_q2_dot;
  c2_e_hoistedGlobal = *c2_b_to1;
  c2_q1 = c2_hoistedGlobal;
  c2_q1_dot = c2_b_hoistedGlobal;
  c2_q2 = c2_c_hoistedGlobal;
  c2_q2_dot = c2_d_hoistedGlobal;
  c2_to1 = c2_e_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 15U, 15U, c2_debug_family_names,
    c2_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c2_beta1, 0U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_beta2, 1U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_beta3, 2U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_beta4, 3U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_beta5, 4U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_g, 5U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c2_nargin, 6U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c2_nargout, 7U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c2_q1, 8U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_q1_dot, 9U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_q2, 10U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_q2_dot, 11U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c2_to1, 12U, c2_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c2_q1_2dot, 13U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c2_q2_2dot, 14U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 2);
  c2_beta1 = 0.01122;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 3);
  c2_beta2 = 0.00193;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 4);
  c2_beta3 = 0.00156;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 5);
  c2_beta4 = 0.0406;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 6);
  c2_beta5 = 0.0078;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 7);
  c2_g = 9.81;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 8);
  c2_x = c2_q2;
  c2_b_x = c2_x;
  c2_b_x = muDoubleScalarCos(c2_b_x);
  c2_b = c2_mpower(chartInstance, c2_b_x);
  c2_y = 3.796416E-9 * c2_b;
  c2_B = 2.16546E-5 - c2_y;
  c2_b_y = c2_B;
  c2_c_y = c2_b_y;
  c2_d_y = 1.0 / c2_c_y;
  c2_b_b = c2_to1;
  c2_e_y = 0.00193 * c2_b_b;
  c2_c_b = c2_mpower(chartInstance, c2_q1_dot + c2_q2_dot);
  c2_f_y = 3.0108E-6 * c2_c_b;
  c2_c_x = c2_q2;
  c2_d_x = c2_c_x;
  c2_d_x = muDoubleScalarSin(c2_d_x);
  c2_a = c2_f_y;
  c2_d_b = c2_d_x;
  c2_g_y = c2_a * c2_d_b;
  c2_e_b = c2_mpower(chartInstance, c2_q1_dot);
  c2_h_y = 2.4336E-6 * c2_e_b;
  c2_e_x = c2_q2;
  c2_f_x = c2_e_x;
  c2_f_x = muDoubleScalarSin(c2_f_x);
  c2_b_a = c2_h_y;
  c2_f_b = c2_f_x;
  c2_i_y = c2_b_a * c2_f_b;
  c2_g_x = c2_q2;
  c2_h_x = c2_g_x;
  c2_h_x = muDoubleScalarCos(c2_h_x);
  c2_c_a = c2_i_y;
  c2_g_b = c2_h_x;
  c2_j_y = c2_c_a * c2_g_b;
  c2_i_x = c2_q1;
  c2_j_x = c2_i_x;
  c2_j_x = muDoubleScalarCos(c2_j_x);
  c2_h_b = c2_j_x;
  c2_k_y = 0.00076869198 * c2_h_b;
  c2_k_x = c2_q2;
  c2_l_x = c2_k_x;
  c2_l_x = muDoubleScalarCos(c2_l_x);
  c2_i_b = c2_l_x;
  c2_l_y = 0.00011936808 * c2_i_b;
  c2_m_x = c2_q1 + c2_q2;
  c2_n_x = c2_m_x;
  c2_n_x = muDoubleScalarCos(c2_n_x);
  c2_d_a = c2_l_y;
  c2_j_b = c2_n_x;
  c2_m_y = c2_d_a * c2_j_b;
  c2_e_a = c2_d_y;
  c2_k_b = (((c2_e_y + c2_g_y) + c2_j_y) - c2_k_y) + c2_m_y;
  c2_q1_2dot = c2_e_a * c2_k_b;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 9);
  c2_o_x = c2_q2;
  c2_p_x = c2_o_x;
  c2_p_x = muDoubleScalarCos(c2_p_x);
  c2_l_b = c2_mpower(chartInstance, c2_p_x);
  c2_n_y = 3.796416E-9 * c2_l_b;
  c2_b_B = 2.16546E-5 - c2_n_y;
  c2_o_y = c2_b_B;
  c2_p_y = c2_o_y;
  c2_q_y = 1.0 / c2_p_y;
  c2_q_x = c2_q2;
  c2_r_x = c2_q_x;
  c2_r_x = muDoubleScalarCos(c2_r_x);
  c2_m_b = c2_r_x;
  c2_r_y = 0.00156 * c2_m_b;
  c2_f_a = -c2_beta2 - c2_r_y;
  c2_n_b = c2_to1;
  c2_s_y = c2_f_a * c2_n_b;
  c2_s_x = c2_q2;
  c2_t_x = c2_s_x;
  c2_t_x = muDoubleScalarCos(c2_t_x);
  c2_o_b = c2_t_x;
  c2_t_y = 0.00156 * c2_o_b;
  c2_p_b = c2_beta2 + c2_t_y;
  c2_u_y = 0.00156 * c2_p_b;
  c2_g_a = c2_u_y;
  c2_q_b = c2_mpower(chartInstance, c2_q1_dot + c2_q2_dot);
  c2_v_y = c2_g_a * c2_q_b;
  c2_u_x = c2_q2;
  c2_v_x = c2_u_x;
  c2_v_x = muDoubleScalarSin(c2_v_x);
  c2_h_a = c2_v_y;
  c2_r_b = c2_v_x;
  c2_w_y = c2_h_a * c2_r_b;
  c2_w_x = c2_q2;
  c2_x_x = c2_w_x;
  c2_x_x = muDoubleScalarCos(c2_x_x);
  c2_s_b = c2_x_x;
  c2_x_y = 0.00156 * c2_s_b;
  c2_t_b = c2_beta1 + c2_x_y;
  c2_y_y = 0.076518 * c2_t_b;
  c2_y_x = c2_q1 + c2_q2;
  c2_ab_x = c2_y_x;
  c2_ab_x = muDoubleScalarCos(c2_ab_x);
  c2_i_a = c2_y_y;
  c2_u_b = c2_ab_x;
  c2_ab_y = c2_i_a * c2_u_b;
  c2_bb_x = c2_q2;
  c2_cb_x = c2_bb_x;
  c2_cb_x = muDoubleScalarCos(c2_cb_x);
  c2_v_b = c2_cb_x;
  c2_bb_y = 0.00156 * c2_v_b;
  c2_w_b = c2_beta2 + c2_bb_y;
  c2_cb_y = 0.398286 * c2_w_b;
  c2_db_x = c2_q1;
  c2_eb_x = c2_db_x;
  c2_eb_x = muDoubleScalarCos(c2_eb_x);
  c2_j_a = c2_cb_y;
  c2_x_b = c2_eb_x;
  c2_db_y = c2_j_a * c2_x_b;
  c2_y_b = c2_mpower(chartInstance, c2_q1_dot);
  c2_eb_y = 0.00156 * c2_y_b;
  c2_fb_x = c2_q2;
  c2_gb_x = c2_fb_x;
  c2_gb_x = muDoubleScalarSin(c2_gb_x);
  c2_k_a = c2_eb_y;
  c2_ab_b = c2_gb_x;
  c2_fb_y = c2_k_a * c2_ab_b;
  c2_hb_x = c2_q2;
  c2_ib_x = c2_hb_x;
  c2_ib_x = muDoubleScalarCos(c2_ib_x);
  c2_bb_b = c2_ib_x;
  c2_gb_y = 0.00156 * c2_bb_b;
  c2_l_a = c2_fb_y;
  c2_cb_b = c2_beta1 + c2_gb_y;
  c2_hb_y = c2_l_a * c2_cb_b;
  c2_m_a = c2_q_y;
  c2_db_b = (((c2_s_y - c2_w_y) - c2_ab_y) + c2_db_y) - c2_hb_y;
  c2_q2_2dot = c2_m_a * c2_db_b;
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, -9);
  sf_debug_symbol_scope_pop();
  *c2_b_q1_2dot = c2_q1_2dot;
  *c2_b_q2_2dot = c2_q2_2dot;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
}

static void initSimStructsc2_pendubot_simulate_1_8_5_2017_fuzzy
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  real_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance;
  chartInstance = (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *)
    chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(real_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, FALSE);
  return c2_mxArrayOutData;
}

static real_T c2_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_q2_2dot, const char_T *c2_identifier)
{
  real_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_q2_2dot), &c2_thisId);
  sf_mex_destroy(&c2_q2_2dot);
  return c2_y;
}

static real_T c2_b_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d0;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_q2_2dot;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance;
  chartInstance = (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *)
    chartInstanceVoid;
  c2_q2_2dot = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_q2_2dot), &c2_thisId);
  sf_mex_destroy(&c2_q2_2dot);
  *(real_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

const mxArray
  *sf_c2_pendubot_simulate_1_8_5_2017_fuzzy_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo;
  c2_ResolvedFunctionInfo c2_info[14];
  const mxArray *c2_m0 = NULL;
  int32_T c2_i0;
  c2_ResolvedFunctionInfo *c2_r0;
  c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  c2_info_helper(c2_info);
  sf_mex_assign(&c2_m0, sf_mex_createstruct("nameCaptureInfo", 1, 14), FALSE);
  for (c2_i0 = 0; c2_i0 < 14; c2_i0++) {
    c2_r0 = &c2_info[c2_i0];
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c2_r0->context)), "context", "nameCaptureInfo",
                    c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c2_r0->name)), "name", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c2_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c2_r0->resolved)), "resolved", "nameCaptureInfo",
                    c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c2_i0);
  }

  sf_mex_assign(&c2_nameCaptureInfo, c2_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static void c2_info_helper(c2_ResolvedFunctionInfo c2_info[14])
{
  c2_info[0].context = "";
  c2_info[0].name = "mtimes";
  c2_info[0].dominantType = "double";
  c2_info[0].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[0].fileTimeLo = 1289552092U;
  c2_info[0].fileTimeHi = 0U;
  c2_info[0].mFileTimeLo = 0U;
  c2_info[0].mFileTimeHi = 0U;
  c2_info[1].context = "";
  c2_info[1].name = "mpower";
  c2_info[1].dominantType = "double";
  c2_info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c2_info[1].fileTimeLo = 1286851242U;
  c2_info[1].fileTimeHi = 0U;
  c2_info[1].mFileTimeLo = 0U;
  c2_info[1].mFileTimeHi = 0U;
  c2_info[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c2_info[2].name = "power";
  c2_info[2].dominantType = "double";
  c2_info[2].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[2].fileTimeLo = 1336554496U;
  c2_info[2].fileTimeHi = 0U;
  c2_info[2].mFileTimeLo = 0U;
  c2_info[2].mFileTimeHi = 0U;
  c2_info[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  c2_info[3].name = "eml_scalar_eg";
  c2_info[3].dominantType = "double";
  c2_info[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c2_info[3].fileTimeLo = 1286851196U;
  c2_info[3].fileTimeHi = 0U;
  c2_info[3].mFileTimeLo = 0U;
  c2_info[3].mFileTimeHi = 0U;
  c2_info[4].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  c2_info[4].name = "eml_scalexp_alloc";
  c2_info[4].dominantType = "double";
  c2_info[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c2_info[4].fileTimeLo = 1330640834U;
  c2_info[4].fileTimeHi = 0U;
  c2_info[4].mFileTimeLo = 0U;
  c2_info[4].mFileTimeHi = 0U;
  c2_info[5].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  c2_info[5].name = "floor";
  c2_info[5].dominantType = "double";
  c2_info[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c2_info[5].fileTimeLo = 1286851142U;
  c2_info[5].fileTimeHi = 0U;
  c2_info[5].mFileTimeLo = 0U;
  c2_info[5].mFileTimeHi = 0U;
  c2_info[6].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c2_info[6].name = "eml_scalar_floor";
  c2_info[6].dominantType = "double";
  c2_info[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  c2_info[6].fileTimeLo = 1286851126U;
  c2_info[6].fileTimeHi = 0U;
  c2_info[6].mFileTimeLo = 0U;
  c2_info[6].mFileTimeHi = 0U;
  c2_info[7].context = "";
  c2_info[7].name = "cos";
  c2_info[7].dominantType = "double";
  c2_info[7].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  c2_info[7].fileTimeLo = 1286851106U;
  c2_info[7].fileTimeHi = 0U;
  c2_info[7].mFileTimeLo = 0U;
  c2_info[7].mFileTimeHi = 0U;
  c2_info[8].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  c2_info[8].name = "eml_scalar_cos";
  c2_info[8].dominantType = "double";
  c2_info[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  c2_info[8].fileTimeLo = 1286851122U;
  c2_info[8].fileTimeHi = 0U;
  c2_info[8].mFileTimeLo = 0U;
  c2_info[8].mFileTimeHi = 0U;
  c2_info[9].context = "";
  c2_info[9].name = "mrdivide";
  c2_info[9].dominantType = "double";
  c2_info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c2_info[9].fileTimeLo = 1342843344U;
  c2_info[9].fileTimeHi = 0U;
  c2_info[9].mFileTimeLo = 1319762366U;
  c2_info[9].mFileTimeHi = 0U;
  c2_info[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c2_info[10].name = "rdivide";
  c2_info[10].dominantType = "double";
  c2_info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[10].fileTimeLo = 1286851244U;
  c2_info[10].fileTimeHi = 0U;
  c2_info[10].mFileTimeLo = 0U;
  c2_info[10].mFileTimeHi = 0U;
  c2_info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[11].name = "eml_div";
  c2_info[11].dominantType = "double";
  c2_info[11].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  c2_info[11].fileTimeLo = 1313380210U;
  c2_info[11].fileTimeHi = 0U;
  c2_info[11].mFileTimeLo = 0U;
  c2_info[11].mFileTimeHi = 0U;
  c2_info[12].context = "";
  c2_info[12].name = "sin";
  c2_info[12].dominantType = "double";
  c2_info[12].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  c2_info[12].fileTimeLo = 1286851150U;
  c2_info[12].fileTimeHi = 0U;
  c2_info[12].mFileTimeLo = 0U;
  c2_info[12].mFileTimeHi = 0U;
  c2_info[13].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  c2_info[13].name = "eml_scalar_sin";
  c2_info[13].dominantType = "double";
  c2_info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  c2_info[13].fileTimeLo = 1286851136U;
  c2_info[13].fileTimeHi = 0U;
  c2_info[13].mFileTimeLo = 0U;
  c2_info[13].mFileTimeHi = 0U;
}

static void c2_eml_scalar_eg
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
}

static real_T c2_mpower(SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct
  *chartInstance, real_T c2_a)
{
  real_T c2_b_a;
  real_T c2_c_a;
  real_T c2_ak;
  c2_b_a = c2_a;
  c2_c_a = c2_b_a;
  c2_eml_scalar_eg(chartInstance);
  c2_ak = c2_c_a;
  return muDoubleScalarPower(c2_ak, 2.0);
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData = NULL;
  int32_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance;
  chartInstance = (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *)
    chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_u = *(int32_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, FALSE);
  return c2_mxArrayOutData;
}

static int32_T c2_c_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_i1;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_i1, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i1;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_y;
  SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance;
  chartInstance = (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *)
    chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static uint8_T c2_d_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_b_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy, const char_T
   *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_y = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy);
  return c2_y;
}

static uint8_T c2_e_emlrt_marshallIn
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance, const
   mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info
  (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c2_pendubot_simulate_1_8_5_2017_fuzzy_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2047838762U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3169712691U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1486427851U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2621393196U);
}

mxArray *sf_c2_pendubot_simulate_1_8_5_2017_fuzzy_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("BivRuM7qswXTTxHU98xEmF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray
  *sf_get_sim_state_info_c2_pendubot_simulate_1_8_5_2017_fuzzy(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"q1_2dot\",},{M[1],M[10],T\"q2_2dot\",},{M[8],M[0],T\"is_active_c2_pendubot_simulate_1_8_5_2017_fuzzy\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_pendubot_simulate_1_8_5_2017_fuzzy_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance;
    chartInstance = (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_pendubot_simulate_1_8_5_2017_fuzzyMachineNumber_,
           2,
           1,
           1,
           7,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation
            (_pendubot_simulate_1_8_5_2017_fuzzyMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_pendubot_simulate_1_8_5_2017_fuzzyMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_pendubot_simulate_1_8_5_2017_fuzzyMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"q1");
          _SFD_SET_DATA_PROPS(1,2,0,1,"q1_2dot");
          _SFD_SET_DATA_PROPS(2,1,1,0,"q1_dot");
          _SFD_SET_DATA_PROPS(3,1,1,0,"q2");
          _SFD_SET_DATA_PROPS(4,1,1,0,"q2_dot");
          _SFD_SET_DATA_PROPS(5,1,1,0,"to1");
          _SFD_SET_DATA_PROPS(6,2,0,1,"q2_2dot");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,575);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)c2_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)c2_sf_marshallIn);

        {
          real_T *c2_q1;
          real_T *c2_q1_2dot;
          real_T *c2_q1_dot;
          real_T *c2_q2;
          real_T *c2_q2_dot;
          real_T *c2_to1;
          real_T *c2_q2_2dot;
          c2_q2_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c2_to1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c2_q2_dot = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c2_q2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c2_q1_dot = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c2_q1_2dot = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c2_q1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_q1);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_q1_2dot);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_q1_dot);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_q2);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_q2_dot);
          _SFD_SET_DATA_VALUE_PTR(5U, c2_to1);
          _SFD_SET_DATA_VALUE_PTR(6U, c2_q2_2dot);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_pendubot_simulate_1_8_5_2017_fuzzyMachineNumber_,
         chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "lurECBThnHkTAl11AUNJ0G";
}

static void sf_opaque_initialize_c2_pendubot_simulate_1_8_5_2017_fuzzy(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar
     )->S,0);
  initialize_params_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
  initialize_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_pendubot_simulate_1_8_5_2017_fuzzy(void
  *chartInstanceVar)
{
  enable_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_pendubot_simulate_1_8_5_2017_fuzzy(void
  *chartInstanceVar)
{
  disable_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_pendubot_simulate_1_8_5_2017_fuzzy(void
  *chartInstanceVar)
{
  sf_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c2_pendubot_simulate_1_8_5_2017_fuzzy();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*)
    sf_get_sim_state_info_c2_pendubot_simulate_1_8_5_2017_fuzzy();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray*
  sf_opaque_get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy(S);
}

static void sf_opaque_set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy
  (SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy(S, st);
}

static void sf_opaque_terminate_c2_pendubot_simulate_1_8_5_2017_fuzzy(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_pendubot_simulate_1_8_5_2017_fuzzy
      ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_pendubot_simulate_1_8_5_2017_fuzzy_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_pendubot_simulate_1_8_5_2017_fuzzy
    ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_pendubot_simulate_1_8_5_2017_fuzzy(SimStruct
  *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_pendubot_simulate_1_8_5_2017_fuzzy
      ((SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct*)
       (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_pendubot_simulate_1_8_5_2017_fuzzy(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct =
      load_pendubot_simulate_1_8_5_2017_fuzzy_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,2,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,2);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2501787482U));
  ssSetChecksum1(S,(857328728U));
  ssSetChecksum2(S,(2432519383U));
  ssSetChecksum3(S,(2907004589U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c2_pendubot_simulate_1_8_5_2017_fuzzy(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_pendubot_simulate_1_8_5_2017_fuzzy(SimStruct *S)
{
  SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *chartInstance;
  chartInstance = (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct *)
    malloc(sizeof(SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc2_pendubot_simulate_1_8_5_2017_fuzzyInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_pendubot_simulate_1_8_5_2017_fuzzy;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c2_pendubot_simulate_1_8_5_2017_fuzzy_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_pendubot_simulate_1_8_5_2017_fuzzy(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_pendubot_simulate_1_8_5_2017_fuzzy(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_pendubot_simulate_1_8_5_2017_fuzzy(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_pendubot_simulate_1_8_5_2017_fuzzy_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
