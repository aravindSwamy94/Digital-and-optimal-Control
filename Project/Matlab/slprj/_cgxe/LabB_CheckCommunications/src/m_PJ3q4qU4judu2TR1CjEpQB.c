/* Include files */

#include "modelInterface.h"
#include "m_PJ3q4qU4judu2TR1CjEpQB.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "soMPU6050Accel",                    /* fcnName */
  "/home/aravind/Documents/MATLAB/RASPlib/blocks/soMPU6050Accel.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "/usr/local/MATLAB/R2019b/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "/usr/local/MATLAB/R2019b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "/usr/local/MATLAB/R2019b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 43,  /* lineNo */
  "ExternalDependency",                /* fcnName */
  "/usr/local/MATLAB/R2019b/toolbox/shared/coder/coder/lib/+coder/ExternalDependency.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 6,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 14,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 16,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 21,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 18,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 1,   /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "/usr/local/MATLAB/R2019b/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "/usr/local/MATLAB/R2019b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp);
static soMPU6050Accel *soMPU6050Accel_soMPU6050Accel
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance, soMPU6050Accel *obj);
static void SystemCore_setup(const emlrtStack *sp, soMPU6050Accel *obj);
static void mw__internal__call__reset(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp, int16_T *c_y0, int16_T *c_y1, int16_T
  *b_y2);
static const mxArray *emlrt_marshallOut(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static soMPU6050Accel b_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj, const char_T *identifier);
static soMPU6050Accel c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, moduleInstance->b_y0,
    moduleInstance->b_y1, moduleInstance->y2);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance)
{
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "/home/aravind/Documents/MATLAB/RASPlib/blocks/soMPU6050Accel.m",
                  0U, 5U, 8U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "soMPU6050Accel_soMPU6050Accel", 9, -1, 23);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
               "soMPU6050Accel_getDescriptiveName", 1742, -1, 1818);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
               "soMPU6050Accel_isSupportedContext", 1836, -1, 1936);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
               "soMPU6050Accel_updateBuildInfo", 1996, -1, 4330);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "soMPU6050Accel_stepImpl", 901, -1, 1501);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 9,
                      -1, 23);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
                      1791, -1, 1805);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U,
                      1889, -1, 1923);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U,
                      2888, -1, 4284);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U,
                      2391, -1, 2561);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
                      1415, -1, 1488);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
                      1133, -1, 1288);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
                      1033, -1, 1056);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U, 2053, 2086,
              -1, 4318);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 1070, 1092,
              1302, 1333);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 1302, 1331,
              -1, 1333);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance)
{
  emlrtStack st;
  soMPU6050Accel *obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.site = &emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
    b_st.site = &l_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
      d_st.site = &e_emlrtRSI;
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
}

static void mw__internal__call__setup(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    soMPU6050Accel_soMPU6050Accel(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &h_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static soMPU6050Accel *soMPU6050Accel_soMPU6050Accel
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance, soMPU6050Accel *obj)
{
  soMPU6050Accel *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  b_obj = obj;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  st.site = &b_emlrtRSI;
  b_st.site = &c_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  b_st.site = &c_emlrtRSI;
  b_obj->isInitialized = 0;
  c_st.site = &e_emlrtRSI;
  st.site = &b_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp, soMPU6050Accel *obj)
{
  emlrtStack st;
  char_T u[51];
  int32_T i;
  const mxArray *y;
  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 51 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 51 };

  char_T c_u[5];
  const mxArray *c_y;
  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  obj->isSetupComplete = false;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;
  obj->isSetupComplete = true;
}

static void mw__internal__call__reset(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  emlrtStack b_st;
  char_T u[45];
  int32_T i;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T c_u[5];
  const mxArray *c_y;
  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv2[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    soMPU6050Accel_soMPU6050Accel(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &i_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp, int16_T *c_y0, int16_T *c_y1, int16_T
  *b_y2)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  soMPU6050Accel *obj;
  char_T u[45];
  int32_T i;
  const mxArray *y;
  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *m;
  static const int32_T iv[2] = { 1, 45 };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T c_u[4];
  const mxArray *c_y;
  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  static const int32_T iv2[2] = { 1, 4 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    soMPU6050Accel_soMPU6050Accel(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &j_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, iv);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &e_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, false);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1, true);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 3);
  *c_y0 = 0;
  *c_y1 = 0;
  *b_y2 = 0;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv[3] = { "matlabCodegenIsDeleted", "isInitialized",
    "isSetupComplete" };

  boolean_T u;
  const mxArray *c_y;
  const mxArray *m;
  int32_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 3, sv));
  u = moduleInstance->sysobj.matlabCodegenIsDeleted;
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "matlabCodegenIsDeleted", c_y, 0);
  b_u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = b_u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 1);
  u = moduleInstance->sysobj.isSetupComplete;
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isSetupComplete", c_y, 2);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m);
  emlrtSetCell(y, 1, b_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  moduleInstance->sysobj = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp,
    "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell(sp, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static soMPU6050Accel b_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj, const char_T *identifier)
{
  soMPU6050Accel y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static soMPU6050Accel c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  soMPU6050Accel y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[3] = { "matlabCodegenIsDeleted",
    "isInitialized", "isSetupComplete" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 3, fieldNames, 0U, &dims);
  thisId.fIdentifier = "matlabCodegenIsDeleted";
  y.matlabCodegenIsDeleted = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 0, "matlabCodegenIsDeleted")), &thisId);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 1, "isInitialized")), &thisId);
  thisId.fIdentifier = "isSetupComplete";
  y.isSetupComplete = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 2, "isSetupComplete")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m, 1, &pArray, "getString", true,
    location);
}

static void error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_PJ3q4qU4judu2TR1CjEpQB
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (int16_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y1 = (int16_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
  moduleInstance->y2 = (int16_T *)cgxertGetOutputPortSignal(moduleInstance->S, 2);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S, int_T tid)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S, int_T tid)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
  InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *moduleInstance =
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB *)calloc(1, sizeof
    (InstanceStruct_PJ3q4qU4judu2TR1CjEpQB));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_PJ3q4qU4judu2TR1CjEpQB);
  ssSetmdlInitializeConditions(S, mdlInitialize_PJ3q4qU4judu2TR1CjEpQB);
  ssSetmdlUpdate(S, mdlUpdate_PJ3q4qU4judu2TR1CjEpQB);
  ssSetmdlTerminate(S, mdlTerminate_PJ3q4qU4judu2TR1CjEpQB);
  ssSetmdlEnable(S, mdlEnable_PJ3q4qU4judu2TR1CjEpQB);
  ssSetmdlDisable(S, mdlDisable_PJ3q4qU4judu2TR1CjEpQB);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S)
{
}

void method_dispatcher_PJ3q4qU4judu2TR1CjEpQB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_PJ3q4qU4judu2TR1CjEpQB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_PJ3q4qU4judu2TR1CjEpQB(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_PJ3q4qU4judu2TR1CjEpQB(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_PJ3q4qU4judu2TR1CjEpQB(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: PJ3q4qU4judu2TR1CjEpQB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_PJ3q4qU4judu2TR1CjEpQB_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("soMPU6050Accel");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_PJ3q4qU4judu2TR1CjEpQB_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString("soMPU6050Accel");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
