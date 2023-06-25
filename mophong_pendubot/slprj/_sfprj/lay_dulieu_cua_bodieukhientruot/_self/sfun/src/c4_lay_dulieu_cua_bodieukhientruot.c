/* Include files */

#include "blascompat32.h"
#include "lay_dulieu_cua_bodieukhientruot_sfun.h"
#include "c4_lay_dulieu_cua_bodieukhientruot.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "lay_dulieu_cua_bodieukhientruot_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static const char * c4_debug_family_names[29] = { "beta1", "beta2", "beta3",
  "beta4", "beta5", "g", "f1", "f2", "b1", "b2", "s1", "s2", "u_eq_1", "u_eq_2",
  "S1", "S2", "nargin", "nargout", "x1", "x2", "x3", "x4", "a1", "a2", "c1",
  "c2", "k2", "nuy2", "u" };

/* Function Declarations */
static void initialize_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void initialize_params_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void enable_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void disable_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void c4_update_debugger_state_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void set_sim_state_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_st);
static void finalize_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void sf_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void c4_chartstep_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void initSimStructsc4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber);
static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData);
static real_T c4_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const char_T *c4_identifier);
static real_T c4_b_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static void c4_info_helper(c4_ResolvedFunctionInfo c4_info[16]);
static void c4_eml_scalar_eg(SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *
  chartInstance);
static real_T c4_mpower(SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct
  *chartInstance, real_T c4_a);
static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData);
static int32_T c4_c_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData);
static uint8_T c4_d_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_b_is_active_c4_lay_dulieu_cua_bodieukhientruot, const char_T
   *c4_identifier);
static uint8_T c4_e_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void init_dsm_address_info
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c4_is_active_c4_lay_dulieu_cua_bodieukhientruot = 0U;
}

static void initialize_params_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
}

static void enable_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c4_update_debugger_state_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  real_T c4_hoistedGlobal;
  real_T c4_u;
  const mxArray *c4_b_y = NULL;
  uint8_T c4_b_hoistedGlobal;
  uint8_T c4_b_u;
  const mxArray *c4_c_y = NULL;
  real_T *c4_c_u;
  c4_c_u = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellarray(2), FALSE);
  c4_hoistedGlobal = *c4_c_u;
  c4_u = c4_hoistedGlobal;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_b_hoistedGlobal =
    chartInstance->c4_is_active_c4_lay_dulieu_cua_bodieukhientruot;
  c4_b_u = c4_b_hoistedGlobal;
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", &c4_b_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  sf_mex_assign(&c4_st, c4_y, FALSE);
  return c4_st;
}

static void set_sim_state_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_st)
{
  const mxArray *c4_u;
  real_T *c4_b_u;
  c4_b_u = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c4_doneDoubleBufferReInit = TRUE;
  c4_u = sf_mex_dup(c4_st);
  *c4_b_u = c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)),
    "u");
  chartInstance->c4_is_active_c4_lay_dulieu_cua_bodieukhientruot =
    c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)),
    "is_active_c4_lay_dulieu_cua_bodieukhientruot");
  sf_mex_destroy(&c4_u);
  c4_update_debugger_state_c4_lay_dulieu_cua_bodieukhientruot(chartInstance);
  sf_mex_destroy(&c4_st);
}

static void finalize_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
}

static void sf_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
  real_T *c4_u;
  real_T *c4_x1;
  real_T *c4_x2;
  real_T *c4_x3;
  real_T *c4_x4;
  real_T *c4_a1;
  real_T *c4_a2;
  real_T *c4_c1;
  real_T *c4_c2;
  real_T *c4_k2;
  real_T *c4_nuy2;
  c4_nuy2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c4_k2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c4_c2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c4_c1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c4_a2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_a1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c4_x4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_x3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_x2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_x1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c4_u = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c4_u, 0U);
  _SFD_DATA_RANGE_CHECK(*c4_x1, 1U);
  _SFD_DATA_RANGE_CHECK(*c4_x2, 2U);
  _SFD_DATA_RANGE_CHECK(*c4_x3, 3U);
  _SFD_DATA_RANGE_CHECK(*c4_x4, 4U);
  _SFD_DATA_RANGE_CHECK(*c4_a1, 5U);
  _SFD_DATA_RANGE_CHECK(*c4_a2, 6U);
  _SFD_DATA_RANGE_CHECK(*c4_c1, 7U);
  _SFD_DATA_RANGE_CHECK(*c4_c2, 8U);
  _SFD_DATA_RANGE_CHECK(*c4_k2, 9U);
  _SFD_DATA_RANGE_CHECK(*c4_nuy2, 10U);
  chartInstance->c4_sfEvent = CALL_EVENT;
  c4_chartstep_c4_lay_dulieu_cua_bodieukhientruot(chartInstance);
  sf_debug_check_for_state_inconsistency
    (_lay_dulieu_cua_bodieukhientruotMachineNumber_, chartInstance->chartNumber,
     chartInstance->instanceNumber);
}

static void c4_chartstep_c4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
  real_T c4_hoistedGlobal;
  real_T c4_b_hoistedGlobal;
  real_T c4_c_hoistedGlobal;
  real_T c4_d_hoistedGlobal;
  real_T c4_e_hoistedGlobal;
  real_T c4_f_hoistedGlobal;
  real_T c4_g_hoistedGlobal;
  real_T c4_h_hoistedGlobal;
  real_T c4_i_hoistedGlobal;
  real_T c4_j_hoistedGlobal;
  real_T c4_x1;
  real_T c4_x2;
  real_T c4_x3;
  real_T c4_x4;
  real_T c4_a1;
  real_T c4_a2;
  real_T c4_c1;
  real_T c4_c2;
  real_T c4_k2;
  real_T c4_nuy2;
  uint32_T c4_debug_family_var_map[29];
  real_T c4_beta1;
  real_T c4_beta2;
  real_T c4_beta3;
  real_T c4_beta4;
  real_T c4_beta5;
  real_T c4_g;
  real_T c4_f1;
  real_T c4_f2;
  real_T c4_b1;
  real_T c4_b2;
  real_T c4_s1;
  real_T c4_s2;
  real_T c4_u_eq_1;
  real_T c4_u_eq_2;
  real_T c4_S1;
  real_T c4_S2;
  real_T c4_nargin = 10.0;
  real_T c4_nargout = 1.0;
  real_T c4_u;
  real_T c4_x;
  real_T c4_b_x;
  real_T c4_b;
  real_T c4_y;
  real_T c4_B;
  real_T c4_b_y;
  real_T c4_c_y;
  real_T c4_d_y;
  real_T c4_b_b;
  real_T c4_e_y;
  real_T c4_c_x;
  real_T c4_d_x;
  real_T c4_a;
  real_T c4_c_b;
  real_T c4_f_y;
  real_T c4_d_b;
  real_T c4_g_y;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_b_a;
  real_T c4_e_b;
  real_T c4_h_y;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_c_a;
  real_T c4_f_b;
  real_T c4_i_y;
  real_T c4_i_x;
  real_T c4_j_x;
  real_T c4_g_b;
  real_T c4_j_y;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_h_b;
  real_T c4_k_y;
  real_T c4_m_x;
  real_T c4_n_x;
  real_T c4_d_a;
  real_T c4_i_b;
  real_T c4_l_y;
  real_T c4_e_a;
  real_T c4_j_b;
  real_T c4_o_x;
  real_T c4_p_x;
  real_T c4_k_b;
  real_T c4_m_y;
  real_T c4_b_B;
  real_T c4_n_y;
  real_T c4_o_y;
  real_T c4_p_y;
  real_T c4_q_x;
  real_T c4_r_x;
  real_T c4_l_b;
  real_T c4_q_y;
  real_T c4_f_a;
  real_T c4_r_y;
  real_T c4_s_x;
  real_T c4_t_x;
  real_T c4_m_b;
  real_T c4_s_y;
  real_T c4_n_b;
  real_T c4_t_y;
  real_T c4_g_a;
  real_T c4_o_b;
  real_T c4_u_y;
  real_T c4_u_x;
  real_T c4_v_x;
  real_T c4_h_a;
  real_T c4_p_b;
  real_T c4_v_y;
  real_T c4_w_x;
  real_T c4_x_x;
  real_T c4_q_b;
  real_T c4_w_y;
  real_T c4_r_b;
  real_T c4_x_y;
  real_T c4_y_x;
  real_T c4_ab_x;
  real_T c4_i_a;
  real_T c4_s_b;
  real_T c4_y_y;
  real_T c4_bb_x;
  real_T c4_cb_x;
  real_T c4_t_b;
  real_T c4_ab_y;
  real_T c4_u_b;
  real_T c4_bb_y;
  real_T c4_db_x;
  real_T c4_eb_x;
  real_T c4_j_a;
  real_T c4_v_b;
  real_T c4_cb_y;
  real_T c4_w_b;
  real_T c4_db_y;
  real_T c4_fb_x;
  real_T c4_gb_x;
  real_T c4_k_a;
  real_T c4_x_b;
  real_T c4_eb_y;
  real_T c4_hb_x;
  real_T c4_ib_x;
  real_T c4_y_b;
  real_T c4_fb_y;
  real_T c4_l_a;
  real_T c4_ab_b;
  real_T c4_gb_y;
  real_T c4_m_a;
  real_T c4_bb_b;
  real_T c4_jb_x;
  real_T c4_kb_x;
  real_T c4_cb_b;
  real_T c4_hb_y;
  real_T c4_c_B;
  real_T c4_ib_y;
  real_T c4_jb_y;
  real_T c4_lb_x;
  real_T c4_mb_x;
  real_T c4_db_b;
  real_T c4_kb_y;
  real_T c4_nb_x;
  real_T c4_ob_x;
  real_T c4_eb_b;
  real_T c4_lb_y;
  real_T c4_A;
  real_T c4_d_B;
  real_T c4_pb_x;
  real_T c4_mb_y;
  real_T c4_qb_x;
  real_T c4_nb_y;
  real_T c4_n_a;
  real_T c4_fb_b;
  real_T c4_ob_y;
  real_T c4_o_a;
  real_T c4_gb_b;
  real_T c4_pb_y;
  real_T c4_p_a;
  real_T c4_hb_b;
  real_T c4_qb_y;
  real_T c4_b_A;
  real_T c4_e_B;
  real_T c4_rb_x;
  real_T c4_rb_y;
  real_T c4_sb_x;
  real_T c4_sb_y;
  real_T c4_q_a;
  real_T c4_ib_b;
  real_T c4_tb_y;
  real_T c4_c_A;
  real_T c4_f_B;
  real_T c4_tb_x;
  real_T c4_ub_y;
  real_T c4_ub_x;
  real_T c4_vb_y;
  real_T c4_r_a;
  real_T c4_jb_b;
  real_T c4_s_a;
  real_T c4_kb_b;
  real_T c4_wb_y;
  real_T c4_t_a;
  real_T c4_lb_b;
  real_T c4_xb_y;
  real_T c4_u_a;
  real_T c4_mb_b;
  real_T c4_yb_y;
  real_T c4_v_a;
  real_T c4_nb_b;
  real_T c4_ac_y;
  real_T c4_w_a;
  real_T c4_ob_b;
  real_T c4_bc_y;
  real_T c4_x_a;
  real_T c4_pb_b;
  real_T c4_cc_y;
  real_T c4_y_a;
  real_T c4_qb_b;
  real_T c4_dc_y;
  real_T c4_ab_a;
  real_T c4_rb_b;
  real_T c4_ec_y;
  real_T c4_bb_a;
  real_T c4_sb_b;
  real_T c4_fc_y;
  real_T c4_vb_x;
  real_T c4_wb_x;
  real_T c4_cb_a;
  real_T c4_tb_b;
  real_T c4_gc_y;
  real_T c4_db_a;
  real_T c4_ub_b;
  real_T c4_hc_y;
  real_T c4_eb_a;
  real_T c4_vb_b;
  real_T c4_ic_y;
  real_T c4_fb_a;
  real_T c4_wb_b;
  real_T c4_jc_y;
  real_T c4_d_A;
  real_T c4_g_B;
  real_T c4_xb_x;
  real_T c4_kc_y;
  real_T c4_yb_x;
  real_T c4_lc_y;
  real_T *c4_b_nuy2;
  real_T *c4_b_k2;
  real_T *c4_b_c2;
  real_T *c4_b_c1;
  real_T *c4_b_a2;
  real_T *c4_b_a1;
  real_T *c4_b_x4;
  real_T *c4_b_x3;
  real_T *c4_b_x2;
  real_T *c4_b_x1;
  real_T *c4_b_u;
  c4_b_nuy2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
  c4_b_k2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
  c4_b_c2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
  c4_b_c1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
  c4_b_a2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c4_b_a1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c4_b_x4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c4_b_x3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c4_b_x2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c4_b_x1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c4_b_u = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
  c4_hoistedGlobal = *c4_b_x1;
  c4_b_hoistedGlobal = *c4_b_x2;
  c4_c_hoistedGlobal = *c4_b_x3;
  c4_d_hoistedGlobal = *c4_b_x4;
  c4_e_hoistedGlobal = *c4_b_a1;
  c4_f_hoistedGlobal = *c4_b_a2;
  c4_g_hoistedGlobal = *c4_b_c1;
  c4_h_hoistedGlobal = *c4_b_c2;
  c4_i_hoistedGlobal = *c4_b_k2;
  c4_j_hoistedGlobal = *c4_b_nuy2;
  c4_x1 = c4_hoistedGlobal;
  c4_x2 = c4_b_hoistedGlobal;
  c4_x3 = c4_c_hoistedGlobal;
  c4_x4 = c4_d_hoistedGlobal;
  c4_a1 = c4_e_hoistedGlobal;
  c4_a2 = c4_f_hoistedGlobal;
  c4_c1 = c4_g_hoistedGlobal;
  c4_c2 = c4_h_hoistedGlobal;
  c4_k2 = c4_i_hoistedGlobal;
  c4_nuy2 = c4_j_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 29U, 29U, c4_debug_family_names,
    c4_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c4_beta1, 0U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_beta2, 1U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_beta3, 2U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_beta4, 3U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_beta5, 4U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_g, 5U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c4_f1, 6U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_f2, 7U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_b1, 8U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_b2, 9U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_s1, 10U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_s2, 11U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_u_eq_1, 12U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_u_eq_2, 13U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_S1, 14U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_S2, 15U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_nargin, 16U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml_importable(&c4_nargout, 17U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  sf_debug_symbol_scope_add_eml(&c4_x1, 18U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_x2, 19U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_x3, 20U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_x4, 21U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_a1, 22U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_a2, 23U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_c1, 24U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_c2, 25U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_k2, 26U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml(&c4_nuy2, 27U, c4_sf_marshallOut);
  sf_debug_symbol_scope_add_eml_importable(&c4_u, 28U, c4_sf_marshallOut,
    c4_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 2);
  c4_beta1 = 0.01122;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 3);
  c4_beta2 = 0.00193;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 4);
  c4_beta3 = 0.00156;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 5);
  c4_beta4 = 0.0406;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 6);
  c4_beta5 = 0.0078;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 7);
  c4_g = 9.81;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 9);
  c4_x = c4_x3;
  c4_b_x = c4_x;
  c4_b_x = muDoubleScalarCos(c4_b_x);
  c4_b = c4_mpower(chartInstance, c4_b_x);
  c4_y = 3.796416E-9 * c4_b;
  c4_B = 2.16546E-5 - c4_y;
  c4_b_y = c4_B;
  c4_c_y = c4_b_y;
  c4_d_y = 1.0 / c4_c_y;
  c4_b_b = c4_mpower(chartInstance, c4_x2 + c4_x4);
  c4_e_y = 3.0108E-6 * c4_b_b;
  c4_c_x = c4_x3;
  c4_d_x = c4_c_x;
  c4_d_x = muDoubleScalarSin(c4_d_x);
  c4_a = c4_e_y;
  c4_c_b = c4_d_x;
  c4_f_y = c4_a * c4_c_b;
  c4_d_b = c4_mpower(chartInstance, c4_x2);
  c4_g_y = 2.4336E-6 * c4_d_b;
  c4_e_x = c4_x3;
  c4_f_x = c4_e_x;
  c4_f_x = muDoubleScalarSin(c4_f_x);
  c4_b_a = c4_g_y;
  c4_e_b = c4_f_x;
  c4_h_y = c4_b_a * c4_e_b;
  c4_g_x = c4_x3;
  c4_h_x = c4_g_x;
  c4_h_x = muDoubleScalarCos(c4_h_x);
  c4_c_a = c4_h_y;
  c4_f_b = c4_h_x;
  c4_i_y = c4_c_a * c4_f_b;
  c4_i_x = c4_x1 + 1.5707963267948966;
  c4_j_x = c4_i_x;
  c4_j_x = muDoubleScalarCos(c4_j_x);
  c4_g_b = c4_j_x;
  c4_j_y = 0.00076869198 * c4_g_b;
  c4_k_x = c4_x3;
  c4_l_x = c4_k_x;
  c4_l_x = muDoubleScalarCos(c4_l_x);
  c4_h_b = c4_l_x;
  c4_k_y = 0.00011936808 * c4_h_b;
  c4_m_x = (c4_x1 + 1.5707963267948966) + c4_x3;
  c4_n_x = c4_m_x;
  c4_n_x = muDoubleScalarCos(c4_n_x);
  c4_d_a = c4_k_y;
  c4_i_b = c4_n_x;
  c4_l_y = c4_d_a * c4_i_b;
  c4_e_a = c4_d_y;
  c4_j_b = ((c4_f_y + c4_i_y) - c4_j_y) + c4_l_y;
  c4_f1 = c4_e_a * c4_j_b;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 10);
  c4_o_x = c4_x3;
  c4_p_x = c4_o_x;
  c4_p_x = muDoubleScalarCos(c4_p_x);
  c4_k_b = c4_mpower(chartInstance, c4_p_x);
  c4_m_y = 3.796416E-9 * c4_k_b;
  c4_b_B = 2.16546E-5 - c4_m_y;
  c4_n_y = c4_b_B;
  c4_o_y = c4_n_y;
  c4_p_y = 1.0 / c4_o_y;
  c4_q_x = c4_x3;
  c4_r_x = c4_q_x;
  c4_r_x = muDoubleScalarCos(c4_r_x);
  c4_l_b = c4_r_x;
  c4_q_y = 0.00156 * c4_l_b;
  c4_f_a = -c4_beta2 - c4_q_y;
  c4_r_y = c4_f_a * 0.0;
  c4_s_x = c4_x3;
  c4_t_x = c4_s_x;
  c4_t_x = muDoubleScalarCos(c4_t_x);
  c4_m_b = c4_t_x;
  c4_s_y = 0.00156 * c4_m_b;
  c4_n_b = c4_beta2 + c4_s_y;
  c4_t_y = 0.00156 * c4_n_b;
  c4_g_a = c4_t_y;
  c4_o_b = c4_mpower(chartInstance, c4_x2 + c4_x4);
  c4_u_y = c4_g_a * c4_o_b;
  c4_u_x = c4_x3;
  c4_v_x = c4_u_x;
  c4_v_x = muDoubleScalarSin(c4_v_x);
  c4_h_a = c4_u_y;
  c4_p_b = c4_v_x;
  c4_v_y = c4_h_a * c4_p_b;
  c4_w_x = c4_x3;
  c4_x_x = c4_w_x;
  c4_x_x = muDoubleScalarCos(c4_x_x);
  c4_q_b = c4_x_x;
  c4_w_y = 0.00156 * c4_q_b;
  c4_r_b = c4_beta1 + c4_w_y;
  c4_x_y = 0.076518 * c4_r_b;
  c4_y_x = (c4_x1 + 1.5707963267948966) + c4_x3;
  c4_ab_x = c4_y_x;
  c4_ab_x = muDoubleScalarCos(c4_ab_x);
  c4_i_a = c4_x_y;
  c4_s_b = c4_ab_x;
  c4_y_y = c4_i_a * c4_s_b;
  c4_bb_x = c4_x3;
  c4_cb_x = c4_bb_x;
  c4_cb_x = muDoubleScalarCos(c4_cb_x);
  c4_t_b = c4_cb_x;
  c4_ab_y = 0.00156 * c4_t_b;
  c4_u_b = c4_beta2 + c4_ab_y;
  c4_bb_y = 0.398286 * c4_u_b;
  c4_db_x = c4_x1 + 1.5707963267948966;
  c4_eb_x = c4_db_x;
  c4_eb_x = muDoubleScalarCos(c4_eb_x);
  c4_j_a = c4_bb_y;
  c4_v_b = c4_eb_x;
  c4_cb_y = c4_j_a * c4_v_b;
  c4_w_b = c4_mpower(chartInstance, c4_x2);
  c4_db_y = 0.00156 * c4_w_b;
  c4_fb_x = c4_x3;
  c4_gb_x = c4_fb_x;
  c4_gb_x = muDoubleScalarSin(c4_gb_x);
  c4_k_a = c4_db_y;
  c4_x_b = c4_gb_x;
  c4_eb_y = c4_k_a * c4_x_b;
  c4_hb_x = c4_x3;
  c4_ib_x = c4_hb_x;
  c4_ib_x = muDoubleScalarCos(c4_ib_x);
  c4_y_b = c4_ib_x;
  c4_fb_y = 0.00156 * c4_y_b;
  c4_l_a = c4_eb_y;
  c4_ab_b = c4_beta1 + c4_fb_y;
  c4_gb_y = c4_l_a * c4_ab_b;
  c4_m_a = c4_p_y;
  c4_bb_b = (((c4_r_y - c4_v_y) - c4_y_y) + c4_cb_y) - c4_gb_y;
  c4_f2 = c4_m_a * c4_bb_b;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 15);
  c4_jb_x = c4_x3;
  c4_kb_x = c4_jb_x;
  c4_kb_x = muDoubleScalarCos(c4_kb_x);
  c4_cb_b = c4_mpower(chartInstance, c4_kb_x);
  c4_hb_y = 3.796416E-9 * c4_cb_b;
  c4_c_B = 2.16546E-5 - c4_hb_y;
  c4_ib_y = c4_c_B;
  c4_jb_y = c4_ib_y;
  c4_b1 = 0.00193 / c4_jb_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 16);
  c4_lb_x = c4_x3;
  c4_mb_x = c4_lb_x;
  c4_mb_x = muDoubleScalarCos(c4_mb_x);
  c4_db_b = c4_mb_x;
  c4_kb_y = 0.00156 * c4_db_b;
  c4_nb_x = c4_x3;
  c4_ob_x = c4_nb_x;
  c4_ob_x = muDoubleScalarCos(c4_ob_x);
  c4_eb_b = c4_mpower(chartInstance, c4_ob_x);
  c4_lb_y = 3.796416E-9 * c4_eb_b;
  c4_A = -(c4_beta2 + c4_kb_y);
  c4_d_B = 2.16546E-5 - c4_lb_y;
  c4_pb_x = c4_A;
  c4_mb_y = c4_d_B;
  c4_qb_x = c4_pb_x;
  c4_nb_y = c4_mb_y;
  c4_b2 = c4_qb_x / c4_nb_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 18);
  c4_n_a = c4_c1;
  c4_fb_b = c4_x1;
  c4_ob_y = c4_n_a * c4_fb_b;
  c4_s1 = c4_ob_y + c4_x2;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 19);
  c4_o_a = c4_c2;
  c4_gb_b = c4_x3;
  c4_pb_y = c4_o_a * c4_gb_b;
  c4_s2 = c4_pb_y + c4_x4;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 21);
  c4_p_a = c4_c1;
  c4_hb_b = c4_x2;
  c4_qb_y = c4_p_a * c4_hb_b;
  c4_b_A = -(c4_qb_y + c4_f1);
  c4_e_B = c4_b1;
  c4_rb_x = c4_b_A;
  c4_rb_y = c4_e_B;
  c4_sb_x = c4_rb_x;
  c4_sb_y = c4_rb_y;
  c4_u_eq_1 = c4_sb_x / c4_sb_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 22);
  c4_q_a = c4_c2;
  c4_ib_b = c4_x4;
  c4_tb_y = c4_q_a * c4_ib_b;
  c4_c_A = -(c4_tb_y + c4_f2);
  c4_f_B = c4_b2;
  c4_tb_x = c4_c_A;
  c4_ub_y = c4_f_B;
  c4_ub_x = c4_tb_x;
  c4_vb_y = c4_ub_y;
  c4_u_eq_2 = c4_ub_x / c4_vb_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 24);
  c4_r_a = c4_a1;
  c4_jb_b = c4_s1;
  c4_S1 = c4_r_a * c4_jb_b;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 25);
  c4_s_a = c4_a1;
  c4_kb_b = c4_a2;
  c4_wb_y = c4_s_a * c4_kb_b;
  c4_t_a = c4_wb_y;
  c4_lb_b = c4_s1;
  c4_xb_y = c4_t_a * c4_lb_b;
  c4_u_a = c4_a2;
  c4_mb_b = c4_s2;
  c4_yb_y = c4_u_a * c4_mb_b;
  c4_S2 = c4_xb_y + c4_yb_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, 27);
  c4_v_a = c4_a1;
  c4_nb_b = c4_a2;
  c4_ac_y = c4_v_a * c4_nb_b;
  c4_w_a = c4_ac_y;
  c4_ob_b = c4_b1;
  c4_bc_y = c4_w_a * c4_ob_b;
  c4_x_a = c4_bc_y;
  c4_pb_b = c4_u_eq_1;
  c4_cc_y = c4_x_a * c4_pb_b;
  c4_y_a = c4_a2;
  c4_qb_b = c4_b2;
  c4_dc_y = c4_y_a * c4_qb_b;
  c4_ab_a = c4_dc_y;
  c4_rb_b = c4_u_eq_2;
  c4_ec_y = c4_ab_a * c4_rb_b;
  c4_bb_a = c4_k2;
  c4_sb_b = c4_S2;
  c4_fc_y = c4_bb_a * c4_sb_b;
  c4_vb_x = c4_S2;
  c4_wb_x = c4_vb_x;
  c4_wb_x = muDoubleScalarSign(c4_wb_x);
  c4_cb_a = c4_nuy2;
  c4_tb_b = c4_wb_x;
  c4_gc_y = c4_cb_a * c4_tb_b;
  c4_db_a = c4_a1;
  c4_ub_b = c4_a2;
  c4_hc_y = c4_db_a * c4_ub_b;
  c4_eb_a = c4_hc_y;
  c4_vb_b = c4_b1;
  c4_ic_y = c4_eb_a * c4_vb_b;
  c4_fb_a = c4_a2;
  c4_wb_b = c4_b2;
  c4_jc_y = c4_fb_a * c4_wb_b;
  c4_d_A = (c4_cc_y + c4_ec_y) - (c4_fc_y + c4_gc_y);
  c4_g_B = c4_ic_y + c4_jc_y;
  c4_xb_x = c4_d_A;
  c4_kc_y = c4_g_B;
  c4_yb_x = c4_xb_x;
  c4_lc_y = c4_kc_y;
  c4_u = c4_yb_x / c4_lc_y;
  _SFD_EML_CALL(0U, chartInstance->c4_sfEvent, -27);
  sf_debug_symbol_scope_pop();
  *c4_b_u = c4_u;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c4_sfEvent);
}

static void initSimStructsc4_lay_dulieu_cua_bodieukhientruot
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c4_machineNumber, uint32_T
  c4_chartNumber)
{
}

static const mxArray *c4_sf_marshallOut(void *chartInstanceVoid, void *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  real_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance;
  chartInstance = (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(real_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static real_T c4_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const char_T *c4_identifier)
{
  real_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_u), &c4_thisId);
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static real_T c4_b_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  real_T c4_y;
  real_T c4_d0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_d0, 1, 0, 0U, 0, 0U, 0);
  c4_y = c4_d0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_u;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  real_T c4_y;
  SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance;
  chartInstance = (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *)
    chartInstanceVoid;
  c4_u = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_u), &c4_thisId);
  sf_mex_destroy(&c4_u);
  *(real_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

const mxArray
  *sf_c4_lay_dulieu_cua_bodieukhientruot_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo;
  c4_ResolvedFunctionInfo c4_info[16];
  const mxArray *c4_m0 = NULL;
  int32_T c4_i0;
  c4_ResolvedFunctionInfo *c4_r0;
  c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  c4_info_helper(c4_info);
  sf_mex_assign(&c4_m0, sf_mex_createstruct("nameCaptureInfo", 1, 16), FALSE);
  for (c4_i0 = 0; c4_i0 < 16; c4_i0++) {
    c4_r0 = &c4_info[c4_i0];
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c4_r0->context)), "context", "nameCaptureInfo",
                    c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c4_r0->name)), "name", "nameCaptureInfo", c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c4_r0->dominantType)), "dominantType",
                    "nameCaptureInfo", c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", c4_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c4_r0->resolved)), "resolved", "nameCaptureInfo",
                    c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->fileTimeLo,
      7, 0U, 0U, 0U, 0), "fileTimeLo", "nameCaptureInfo", c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->fileTimeHi,
      7, 0U, 0U, 0U, 0), "fileTimeHi", "nameCaptureInfo", c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->mFileTimeLo,
      7, 0U, 0U, 0U, 0), "mFileTimeLo", "nameCaptureInfo", c4_i0);
    sf_mex_addfield(c4_m0, sf_mex_create("nameCaptureInfo", &c4_r0->mFileTimeHi,
      7, 0U, 0U, 0U, 0), "mFileTimeHi", "nameCaptureInfo", c4_i0);
  }

  sf_mex_assign(&c4_nameCaptureInfo, c4_m0, FALSE);
  sf_mex_emlrtNameCapturePostProcessR2012a(&c4_nameCaptureInfo);
  return c4_nameCaptureInfo;
}

static void c4_info_helper(c4_ResolvedFunctionInfo c4_info[16])
{
  c4_info[0].context = "";
  c4_info[0].name = "mtimes";
  c4_info[0].dominantType = "double";
  c4_info[0].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c4_info[0].fileTimeLo = 1289552092U;
  c4_info[0].fileTimeHi = 0U;
  c4_info[0].mFileTimeLo = 0U;
  c4_info[0].mFileTimeHi = 0U;
  c4_info[1].context = "";
  c4_info[1].name = "mpower";
  c4_info[1].dominantType = "double";
  c4_info[1].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c4_info[1].fileTimeLo = 1286851242U;
  c4_info[1].fileTimeHi = 0U;
  c4_info[1].mFileTimeLo = 0U;
  c4_info[1].mFileTimeHi = 0U;
  c4_info[2].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c4_info[2].name = "power";
  c4_info[2].dominantType = "double";
  c4_info[2].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c4_info[2].fileTimeLo = 1336554496U;
  c4_info[2].fileTimeHi = 0U;
  c4_info[2].mFileTimeLo = 0U;
  c4_info[2].mFileTimeHi = 0U;
  c4_info[3].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  c4_info[3].name = "eml_scalar_eg";
  c4_info[3].dominantType = "double";
  c4_info[3].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m";
  c4_info[3].fileTimeLo = 1286851196U;
  c4_info[3].fileTimeHi = 0U;
  c4_info[3].mFileTimeLo = 0U;
  c4_info[3].mFileTimeHi = 0U;
  c4_info[4].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  c4_info[4].name = "eml_scalexp_alloc";
  c4_info[4].dominantType = "double";
  c4_info[4].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m";
  c4_info[4].fileTimeLo = 1330640834U;
  c4_info[4].fileTimeHi = 0U;
  c4_info[4].mFileTimeLo = 0U;
  c4_info[4].mFileTimeHi = 0U;
  c4_info[5].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower";
  c4_info[5].name = "floor";
  c4_info[5].dominantType = "double";
  c4_info[5].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c4_info[5].fileTimeLo = 1286851142U;
  c4_info[5].fileTimeHi = 0U;
  c4_info[5].mFileTimeLo = 0U;
  c4_info[5].mFileTimeHi = 0U;
  c4_info[6].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c4_info[6].name = "eml_scalar_floor";
  c4_info[6].dominantType = "double";
  c4_info[6].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m";
  c4_info[6].fileTimeLo = 1286851126U;
  c4_info[6].fileTimeHi = 0U;
  c4_info[6].mFileTimeLo = 0U;
  c4_info[6].mFileTimeHi = 0U;
  c4_info[7].context = "";
  c4_info[7].name = "cos";
  c4_info[7].dominantType = "double";
  c4_info[7].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  c4_info[7].fileTimeLo = 1286851106U;
  c4_info[7].fileTimeHi = 0U;
  c4_info[7].mFileTimeLo = 0U;
  c4_info[7].mFileTimeHi = 0U;
  c4_info[8].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m";
  c4_info[8].name = "eml_scalar_cos";
  c4_info[8].dominantType = "double";
  c4_info[8].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m";
  c4_info[8].fileTimeLo = 1286851122U;
  c4_info[8].fileTimeHi = 0U;
  c4_info[8].mFileTimeLo = 0U;
  c4_info[8].mFileTimeHi = 0U;
  c4_info[9].context = "";
  c4_info[9].name = "mrdivide";
  c4_info[9].dominantType = "double";
  c4_info[9].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c4_info[9].fileTimeLo = 1342843344U;
  c4_info[9].fileTimeHi = 0U;
  c4_info[9].mFileTimeLo = 1319762366U;
  c4_info[9].mFileTimeHi = 0U;
  c4_info[10].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p";
  c4_info[10].name = "rdivide";
  c4_info[10].dominantType = "double";
  c4_info[10].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c4_info[10].fileTimeLo = 1286851244U;
  c4_info[10].fileTimeHi = 0U;
  c4_info[10].mFileTimeLo = 0U;
  c4_info[10].mFileTimeHi = 0U;
  c4_info[11].context =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c4_info[11].name = "eml_div";
  c4_info[11].dominantType = "double";
  c4_info[11].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  c4_info[11].fileTimeLo = 1313380210U;
  c4_info[11].fileTimeHi = 0U;
  c4_info[11].mFileTimeLo = 0U;
  c4_info[11].mFileTimeHi = 0U;
  c4_info[12].context = "";
  c4_info[12].name = "sin";
  c4_info[12].dominantType = "double";
  c4_info[12].resolved = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  c4_info[12].fileTimeLo = 1286851150U;
  c4_info[12].fileTimeHi = 0U;
  c4_info[12].mFileTimeLo = 0U;
  c4_info[12].mFileTimeHi = 0U;
  c4_info[13].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  c4_info[13].name = "eml_scalar_sin";
  c4_info[13].dominantType = "double";
  c4_info[13].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m";
  c4_info[13].fileTimeLo = 1286851136U;
  c4_info[13].fileTimeHi = 0U;
  c4_info[13].mFileTimeLo = 0U;
  c4_info[13].mFileTimeHi = 0U;
  c4_info[14].context = "";
  c4_info[14].name = "sign";
  c4_info[14].dominantType = "double";
  c4_info[14].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  c4_info[14].fileTimeLo = 1286851150U;
  c4_info[14].fileTimeHi = 0U;
  c4_info[14].mFileTimeLo = 0U;
  c4_info[14].mFileTimeHi = 0U;
  c4_info[15].context = "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sign.m";
  c4_info[15].name = "eml_scalar_sign";
  c4_info[15].dominantType = "double";
  c4_info[15].resolved =
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sign.m";
  c4_info[15].fileTimeLo = 1307683638U;
  c4_info[15].fileTimeHi = 0U;
  c4_info[15].mFileTimeLo = 0U;
  c4_info[15].mFileTimeHi = 0U;
}

static void c4_eml_scalar_eg(SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *
  chartInstance)
{
}

static real_T c4_mpower(SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct
  *chartInstance, real_T c4_a)
{
  real_T c4_b_a;
  real_T c4_c_a;
  real_T c4_ak;
  c4_b_a = c4_a;
  c4_c_a = c4_b_a;
  c4_eml_scalar_eg(chartInstance);
  c4_ak = c4_c_a;
  return muDoubleScalarPower(c4_ak, 2.0);
}

static const mxArray *c4_b_sf_marshallOut(void *chartInstanceVoid, void
  *c4_inData)
{
  const mxArray *c4_mxArrayOutData = NULL;
  int32_T c4_u;
  const mxArray *c4_y = NULL;
  SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance;
  chartInstance = (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *)
    chartInstanceVoid;
  c4_mxArrayOutData = NULL;
  c4_u = *(int32_T *)c4_inData;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_create("y", &c4_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c4_mxArrayOutData, c4_y, FALSE);
  return c4_mxArrayOutData;
}

static int32_T c4_c_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  int32_T c4_y;
  int32_T c4_i1;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_i1, 1, 6, 0U, 0, 0U, 0);
  c4_y = c4_i1;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c4_mxArrayInData, const char_T *c4_varName, void *c4_outData)
{
  const mxArray *c4_b_sfEvent;
  const char_T *c4_identifier;
  emlrtMsgIdentifier c4_thisId;
  int32_T c4_y;
  SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance;
  chartInstance = (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *)
    chartInstanceVoid;
  c4_b_sfEvent = sf_mex_dup(c4_mxArrayInData);
  c4_identifier = c4_varName;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_sfEvent),
    &c4_thisId);
  sf_mex_destroy(&c4_b_sfEvent);
  *(int32_T *)c4_outData = c4_y;
  sf_mex_destroy(&c4_mxArrayInData);
}

static uint8_T c4_d_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_b_is_active_c4_lay_dulieu_cua_bodieukhientruot, const char_T
   *c4_identifier)
{
  uint8_T c4_y;
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = c4_identifier;
  c4_thisId.fParent = NULL;
  c4_y = c4_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_lay_dulieu_cua_bodieukhientruot), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_lay_dulieu_cua_bodieukhientruot);
  return c4_y;
}

static uint8_T c4_e_emlrt_marshallIn
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance, const
   mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_y;
  uint8_T c4_u0;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_u0, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_u0;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void init_dsm_address_info
  (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c4_lay_dulieu_cua_bodieukhientruot_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3437129480U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1302351599U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4110799453U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2706204485U);
}

mxArray *sf_c4_lay_dulieu_cua_bodieukhientruot_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("Cu0V8akRVqbMC6hi97ntYC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,10,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c4_lay_dulieu_cua_bodieukhientruot
  (void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[4],T\"u\",},{M[8],M[0],T\"is_active_c4_lay_dulieu_cua_bodieukhientruot\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_lay_dulieu_cua_bodieukhientruot_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance;
    chartInstance = (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_lay_dulieu_cua_bodieukhientruotMachineNumber_,
           4,
           1,
           1,
           11,
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
            (_lay_dulieu_cua_bodieukhientruotMachineNumber_,
             chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_lay_dulieu_cua_bodieukhientruotMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_lay_dulieu_cua_bodieukhientruotMachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,2,0,1,"u");
          _SFD_SET_DATA_PROPS(1,1,1,0,"x1");
          _SFD_SET_DATA_PROPS(2,1,1,0,"x2");
          _SFD_SET_DATA_PROPS(3,1,1,0,"x3");
          _SFD_SET_DATA_PROPS(4,1,1,0,"x4");
          _SFD_SET_DATA_PROPS(5,1,1,0,"a1");
          _SFD_SET_DATA_PROPS(6,1,1,0,"a2");
          _SFD_SET_DATA_PROPS(7,1,1,0,"c1");
          _SFD_SET_DATA_PROPS(8,1,1,0,"c2");
          _SFD_SET_DATA_PROPS(9,1,1,0,"k2");
          _SFD_SET_DATA_PROPS(10,1,1,0,"nuy2");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,952);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)c4_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c4_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c4_u;
          real_T *c4_x1;
          real_T *c4_x2;
          real_T *c4_x3;
          real_T *c4_x4;
          real_T *c4_a1;
          real_T *c4_a2;
          real_T *c4_c1;
          real_T *c4_c2;
          real_T *c4_k2;
          real_T *c4_nuy2;
          c4_nuy2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 9);
          c4_k2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 8);
          c4_c2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 7);
          c4_c1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 6);
          c4_a2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c4_a1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c4_x4 = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
          c4_x3 = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c4_x2 = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c4_x1 = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c4_u = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c4_u);
          _SFD_SET_DATA_VALUE_PTR(1U, c4_x1);
          _SFD_SET_DATA_VALUE_PTR(2U, c4_x2);
          _SFD_SET_DATA_VALUE_PTR(3U, c4_x3);
          _SFD_SET_DATA_VALUE_PTR(4U, c4_x4);
          _SFD_SET_DATA_VALUE_PTR(5U, c4_a1);
          _SFD_SET_DATA_VALUE_PTR(6U, c4_a2);
          _SFD_SET_DATA_VALUE_PTR(7U, c4_c1);
          _SFD_SET_DATA_VALUE_PTR(8U, c4_c2);
          _SFD_SET_DATA_VALUE_PTR(9U, c4_k2);
          _SFD_SET_DATA_VALUE_PTR(10U, c4_nuy2);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_lay_dulieu_cua_bodieukhientruotMachineNumber_,
         chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "4bUQdoDYLeaJxWzNxZiixF";
}

static void sf_opaque_initialize_c4_lay_dulieu_cua_bodieukhientruot(void
  *chartInstanceVar)
{
  chart_debug_initialization
    (((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar)->S,
     0);
  initialize_params_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
  initialize_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c4_lay_dulieu_cua_bodieukhientruot(void
  *chartInstanceVar)
{
  enable_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_lay_dulieu_cua_bodieukhientruot(void
  *chartInstanceVar)
{
  disable_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c4_lay_dulieu_cua_bodieukhientruot(void
  *chartInstanceVar)
{
  sf_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
}

extern const mxArray*
  sf_internal_get_sim_state_c4_lay_dulieu_cua_bodieukhientruot(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*)
     chartInfo->chartInstance);        /* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_lay_dulieu_cua_bodieukhientruot();/* state var info */
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

extern void sf_internal_set_sim_state_c4_lay_dulieu_cua_bodieukhientruot
  (SimStruct* S, const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c4_lay_dulieu_cua_bodieukhientruot();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*)
     chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c4_lay_dulieu_cua_bodieukhientruot
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c4_lay_dulieu_cua_bodieukhientruot(S);
}

static void sf_opaque_set_sim_state_c4_lay_dulieu_cua_bodieukhientruot(SimStruct*
  S, const mxArray *st)
{
  sf_internal_set_sim_state_c4_lay_dulieu_cua_bodieukhientruot(S, st);
}

static void sf_opaque_terminate_c4_lay_dulieu_cua_bodieukhientruot(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c4_lay_dulieu_cua_bodieukhientruot
      ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_lay_dulieu_cua_bodieukhientruot_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_lay_dulieu_cua_bodieukhientruot
    ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_lay_dulieu_cua_bodieukhientruot(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_lay_dulieu_cua_bodieukhientruot
      ((SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c4_lay_dulieu_cua_bodieukhientruot(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_lay_dulieu_cua_bodieukhientruot_optimization_info
      ();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      4);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,4,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,4,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,4,10);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,4,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,4);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1850999835U));
  ssSetChecksum1(S,(50996204U));
  ssSetChecksum2(S,(2960209827U));
  ssSetChecksum3(S,(3861288797U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c4_lay_dulieu_cua_bodieukhientruot(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c4_lay_dulieu_cua_bodieukhientruot(SimStruct *S)
{
  SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *chartInstance;
  chartInstance = (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct *)malloc
    (sizeof(SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct));
  memset(chartInstance, 0, sizeof
         (SFc4_lay_dulieu_cua_bodieukhientruotInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.mdlStart =
    mdlStart_c4_lay_dulieu_cua_bodieukhientruot;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_lay_dulieu_cua_bodieukhientruot;
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

void c4_lay_dulieu_cua_bodieukhientruot_method_dispatcher(SimStruct *S, int_T
  method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c4_lay_dulieu_cua_bodieukhientruot(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_lay_dulieu_cua_bodieukhientruot(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_lay_dulieu_cua_bodieukhientruot(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_lay_dulieu_cua_bodieukhientruot_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
