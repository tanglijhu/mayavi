/* Generated by Pyrex 0.9.6.3 on Sat Oct 20 12:04:11 2007 */

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#if PY_VERSION_HEX < 0x02050000
  typedef int Py_ssize_t;
  #define PY_SSIZE_T_MAX INT_MAX
  #define PY_SSIZE_T_MIN INT_MIN
  #define PyInt_FromSsize_t(z) PyInt_FromLong(z)
  #define PyInt_AsSsize_t(o)	PyInt_AsLong(o)
#endif
#ifndef WIN32
  #define __stdcall
  #define __cdecl
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#include <math.h>
#include "numpy/arrayobject.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static char __pyx_mdoc[] = "\nA Pyrex extension module for new scipy_core.  Currently this extension\nmodule allows us to massage a 2D scipy array into a form usable as a\n`vtkIdTypeArray`.  This is then used to set the cells of a\n`vtkCellArray` instance.\n";

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/

static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/

static PyObject *__Pyx_ImportModule(char *name); /*proto*/

static void __Pyx_AddTraceback(char *funcname); /*proto*/

/* Declarations from array_ext */

static PyTypeObject *__pyx_ptype_9array_ext_ndarray = 0;
static PyObject *__pyx_k3;
static PyObject *__pyx_f_9array_ext_c_set_id_type_array(PyArrayObject *,PyArrayObject *); /*proto*/


/* Implementation of array_ext */


static PyObject *__pyx_n_numpy;
static PyObject *__pyx_n_Int;
static PyObject *__pyx_n_l;
static PyObject *__pyx_n_float64;

static PyObject *__pyx_f_9array_ext_c_set_id_type_array(PyArrayObject *__pyx_v_id_array,PyArrayObject *__pyx_v_out_array) {
  int __pyx_v_cell_length;
  int __pyx_v_dim0;
  int *__pyx_v_id_data;
  int *__pyx_v_out_data;
  int __pyx_v_stride0;
  int __pyx_v_stride1;
  int __pyx_v_i;
  int __pyx_v_j;
  int __pyx_v_in_idx;
  int __pyx_v_out_idx;
  PyObject *__pyx_r;
  Py_INCREF(__pyx_v_id_array);
  Py_INCREF(__pyx_v_out_array);

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":59 */
  __pyx_v_cell_length = (__pyx_v_id_array->dimensions[1]);

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":60 */
  __pyx_v_dim0 = (__pyx_v_id_array->dimensions[0]);

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":61 */
  __pyx_v_id_data = ((int *)__pyx_v_id_array->data);

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":62 */
  __pyx_v_out_data = ((int *)__pyx_v_out_array->data);

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":63 */
  __pyx_v_stride0 = ((__pyx_v_id_array->strides[0]) / (sizeof(int)));

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":64 */
  __pyx_v_stride1 = ((__pyx_v_id_array->strides[1]) / (sizeof(int)));

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":67 */
  for (__pyx_v_i = 0; __pyx_v_i < __pyx_v_dim0; ++__pyx_v_i) {

    /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":68 */
    __pyx_v_in_idx = (__pyx_v_i * __pyx_v_stride0);

    /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":69 */
    __pyx_v_out_idx = ((__pyx_v_i * __pyx_v_cell_length) + __pyx_v_i);

    /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":70 */
    (__pyx_v_out_data[__pyx_v_out_idx]) = __pyx_v_cell_length;

    /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":71 */
    for (__pyx_v_j = 0; __pyx_v_j < __pyx_v_cell_length; ++__pyx_v_j) {
      (__pyx_v_out_data[((__pyx_v_out_idx + __pyx_v_j) + 1)]) = (__pyx_v_id_data[(__pyx_v_in_idx + (__pyx_v_j * __pyx_v_stride1))]);
    }
  }

  __pyx_r = Py_None; Py_INCREF(Py_None);
  Py_DECREF(__pyx_v_id_array);
  Py_DECREF(__pyx_v_out_array);
  return __pyx_r;
}

static PyObject *__pyx_n_empty;

static PyObject *__pyx_f_9array_ext_empty_array(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_9array_ext_empty_array[] = "A simple wrapper function along the lines of what is done for\n    older Numeric versions that returns an uninitialized numarray\n    array.";
static PyObject *__pyx_f_9array_ext_empty_array(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_dims = 0;
  PyObject *__pyx_v_dtype = 0;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"dims","dtype",0};
  __pyx_v_dtype = __pyx_k3;
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O|O", __pyx_argnames, &__pyx_v_dims, &__pyx_v_dtype)) return 0;
  Py_INCREF(__pyx_v_dims);
  Py_INCREF(__pyx_v_dtype);
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_numpy); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_empty); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyTuple_New(2); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; goto __pyx_L1;}
  Py_INCREF(__pyx_v_dims);
  PyTuple_SET_ITEM(__pyx_1, 0, __pyx_v_dims);
  Py_INCREF(__pyx_v_dtype);
  PyTuple_SET_ITEM(__pyx_1, 1, __pyx_v_dtype);
  __pyx_3 = PyObject_CallObject(__pyx_2, __pyx_1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 83; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_r = __pyx_3;
  __pyx_3 = 0;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("array_ext.empty_array");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_dims);
  Py_DECREF(__pyx_v_dtype);
  return __pyx_r;
}

static PyObject *__pyx_n_vtk;
static PyObject *__pyx_n_vtkIdTypeArray;
static PyObject *__pyx_n_GetDataTypeSize;
static PyObject *__pyx_n_issubdtype;
static PyObject *__pyx_n_dtype;
static PyObject *__pyx_n_signedinteger;
static PyObject *__pyx_n_itemsize;
static PyObject *__pyx_n_flags;
static PyObject *__pyx_n_contiguous;
static PyObject *__pyx_n_shape;
static PyObject *__pyx_n_size;

static PyObject *__pyx_k5p;
static PyObject *__pyx_k6p;
static PyObject *__pyx_k7p;

static char __pyx_k5[] = "out_array must be contiguous.";
static char __pyx_k6[] = "id_array must be a two dimensional array.";
static char __pyx_k7[] = "out_array size is incorrect, expected: %s, given: %s";

static PyObject *__pyx_f_9array_ext_set_id_type_array(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static char __pyx_doc_9array_ext_set_id_type_array[] = "Given a 2D Int array (`id_array`), and a contiguous 1D numarray\n    array (`out_array`) having the correct size, this function sets\n    the data from `id_array` into `out_array` so that it can be used\n    in place of a `vtkIdTypeArray` in order to set the cells of a\n    `vtkCellArray`.\n\n    Note that if `shape = id_array.shape` then `size(out_array) ==\n    shape[0]*(shape[1] + 1)` should be true.  If not you\'ll get an\n    `AssertionError`.\n\n    `id_array` need not be contiguous but `out_array` must be.\n    ";
static PyObject *__pyx_f_9array_ext_set_id_type_array(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_id_array = 0;
  PyObject *__pyx_v_out_array = 0;
  PyObject *__pyx_v_vtk;
  PyObject *__pyx_v_VTK_ID_TYPE_SIZE;
  PyObject *__pyx_v_shp;
  PyObject *__pyx_v_sz;
  PyObject *__pyx_v_e_sz;
  PyObject *__pyx_r;
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  PyObject *__pyx_3 = 0;
  PyObject *__pyx_4 = 0;
  PyObject *__pyx_5 = 0;
  int __pyx_6;
  static char *__pyx_argnames[] = {"id_array","out_array",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_id_array, &__pyx_v_out_array)) return 0;
  Py_INCREF(__pyx_v_id_array);
  Py_INCREF(__pyx_v_out_array);
  __pyx_v_vtk = Py_None; Py_INCREF(Py_None);
  __pyx_v_VTK_ID_TYPE_SIZE = Py_None; Py_INCREF(Py_None);
  __pyx_v_shp = Py_None; Py_INCREF(Py_None);
  __pyx_v_sz = Py_None; Py_INCREF(Py_None);
  __pyx_v_e_sz = Py_None; Py_INCREF(Py_None);

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":99 */
  __pyx_1 = __Pyx_Import(__pyx_n_vtk, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 99; goto __pyx_L1;}
  Py_DECREF(__pyx_v_vtk);
  __pyx_v_vtk = __pyx_1;
  __pyx_1 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":100 */
  __pyx_1 = PyObject_GetAttr(__pyx_v_vtk, __pyx_n_vtkIdTypeArray); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyObject_GetAttr(__pyx_2, __pyx_n_GetDataTypeSize); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_2 = PyObject_CallObject(__pyx_1, 0); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 100; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_v_VTK_ID_TYPE_SIZE);
  __pyx_v_VTK_ID_TYPE_SIZE = __pyx_2;
  __pyx_2 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":101 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  __pyx_2 = __Pyx_GetName(__pyx_m, __pyx_n_numpy); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  __pyx_3 = PyObject_GetAttr(__pyx_2, __pyx_n_issubdtype); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_2 = PyObject_GetAttr(__pyx_v_id_array, __pyx_n_dtype); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  __pyx_4 = __Pyx_GetName(__pyx_m, __pyx_n_numpy); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  __pyx_5 = PyObject_GetAttr(__pyx_4, __pyx_n_signedinteger); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_4 = PyTuple_New(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_2);
  PyTuple_SET_ITEM(__pyx_4, 1, __pyx_5);
  __pyx_2 = 0;
  __pyx_5 = 0;
  __pyx_1 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  __pyx_6 = PyObject_IsTrue(__pyx_1); if (__pyx_6 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  if (__pyx_6) {
    Py_DECREF(__pyx_1); __pyx_1 = 0;
    __pyx_2 = PyObject_GetAttr(__pyx_v_id_array, __pyx_n_dtype); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
    __pyx_5 = PyObject_GetAttr(__pyx_2, __pyx_n_itemsize); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
    Py_DECREF(__pyx_2); __pyx_2 = 0;
    if (PyObject_Cmp(__pyx_5, __pyx_v_VTK_ID_TYPE_SIZE, &__pyx_6) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
    __pyx_6 = __pyx_6 == 0;
    Py_DECREF(__pyx_5); __pyx_5 = 0;
    __pyx_1 = PyInt_FromLong(__pyx_6); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 102; goto __pyx_L1;}
  }
  __pyx_6 = PyObject_IsTrue(__pyx_1); if (__pyx_6 < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  if (!__pyx_6) {
    PyErr_SetNone(PyExc_AssertionError);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 101; goto __pyx_L1;}
  }
  #endif

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":104 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  __pyx_3 = PyObject_GetAttr(__pyx_v_out_array, __pyx_n_flags); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  __pyx_4 = PyObject_GetAttr(__pyx_3, __pyx_n_contiguous); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  if (PyObject_Cmp(__pyx_4, __pyx_2, &__pyx_6) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  __pyx_6 = __pyx_6 == 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  if (!__pyx_6) {
    PyErr_SetObject(PyExc_AssertionError, __pyx_k5p);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 104; goto __pyx_L1;}
  }
  #endif

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":107 */
  __pyx_5 = PyObject_GetAttr(__pyx_v_id_array, __pyx_n_shape); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 107; goto __pyx_L1;}
  Py_DECREF(__pyx_v_shp);
  __pyx_v_shp = __pyx_5;
  __pyx_5 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":108 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  if (!(PyObject_Length(__pyx_v_shp) == 2)) {
    PyErr_SetObject(PyExc_AssertionError, __pyx_k6p);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 108; goto __pyx_L1;}
  }
  #endif

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":110 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_numpy); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
  __pyx_3 = PyObject_GetAttr(__pyx_1, __pyx_n_size); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_4 = PyTuple_New(1); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
  Py_INCREF(__pyx_v_out_array);
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_out_array);
  __pyx_2 = PyObject_CallObject(__pyx_3, __pyx_4); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 110; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  Py_DECREF(__pyx_v_sz);
  __pyx_v_sz = __pyx_2;
  __pyx_2 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":111 */
  __pyx_5 = PyInt_FromLong(0); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  __pyx_1 = PyObject_GetItem(__pyx_v_shp, __pyx_5); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  __pyx_3 = PyInt_FromLong(1); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  __pyx_4 = PyObject_GetItem(__pyx_v_shp, __pyx_3); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  Py_DECREF(__pyx_3); __pyx_3 = 0;
  __pyx_2 = PyInt_FromLong(1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  __pyx_5 = PyNumber_Add(__pyx_4, __pyx_2); if (!__pyx_5) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  __pyx_3 = PyNumber_Multiply(__pyx_1, __pyx_5); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 111; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_5); __pyx_5 = 0;
  Py_DECREF(__pyx_v_e_sz);
  __pyx_v_e_sz = __pyx_3;
  __pyx_3 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":112 */
  #ifndef PYREX_WITHOUT_ASSERTIONS
  if (PyObject_Cmp(__pyx_v_sz, __pyx_v_e_sz, &__pyx_6) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 112; goto __pyx_L1;}
  __pyx_6 = __pyx_6 == 0;
  __pyx_4 = PyTuple_New(2); if (!__pyx_4) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 113; goto __pyx_L1;}
  Py_INCREF(__pyx_v_e_sz);
  PyTuple_SET_ITEM(__pyx_4, 0, __pyx_v_e_sz);
  Py_INCREF(__pyx_v_sz);
  PyTuple_SET_ITEM(__pyx_4, 1, __pyx_v_sz);
  __pyx_2 = PyNumber_Remainder(__pyx_k7p, __pyx_4); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 113; goto __pyx_L1;}
  Py_DECREF(__pyx_4); __pyx_4 = 0;
  if (!__pyx_6) {
    PyErr_SetObject(PyExc_AssertionError, __pyx_2);
    {__pyx_filename = __pyx_f[0]; __pyx_lineno = 112; goto __pyx_L1;}
  }
  Py_DECREF(__pyx_2); __pyx_2 = 0;
  #endif

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":115 */
  if (!__Pyx_TypeTest(__pyx_v_id_array, __pyx_ptype_9array_ext_ndarray)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
  if (!__Pyx_TypeTest(__pyx_v_out_array, __pyx_ptype_9array_ext_ndarray)) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
  __pyx_1 = __pyx_f_9array_ext_c_set_id_type_array(((PyArrayObject *)__pyx_v_id_array),((PyArrayObject *)__pyx_v_out_array)); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 115; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  Py_XDECREF(__pyx_3);
  Py_XDECREF(__pyx_4);
  Py_XDECREF(__pyx_5);
  __Pyx_AddTraceback("array_ext.set_id_type_array");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_vtk);
  Py_DECREF(__pyx_v_VTK_ID_TYPE_SIZE);
  Py_DECREF(__pyx_v_shp);
  Py_DECREF(__pyx_v_sz);
  Py_DECREF(__pyx_v_e_sz);
  Py_DECREF(__pyx_v_id_array);
  Py_DECREF(__pyx_v_out_array);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_GetDataTypeSize, "GetDataTypeSize"},
  {&__pyx_n_Int, "Int"},
  {&__pyx_n_contiguous, "contiguous"},
  {&__pyx_n_dtype, "dtype"},
  {&__pyx_n_empty, "empty"},
  {&__pyx_n_flags, "flags"},
  {&__pyx_n_float64, "float64"},
  {&__pyx_n_issubdtype, "issubdtype"},
  {&__pyx_n_itemsize, "itemsize"},
  {&__pyx_n_l, "l"},
  {&__pyx_n_numpy, "numpy"},
  {&__pyx_n_shape, "shape"},
  {&__pyx_n_signedinteger, "signedinteger"},
  {&__pyx_n_size, "size"},
  {&__pyx_n_vtk, "vtk"},
  {&__pyx_n_vtkIdTypeArray, "vtkIdTypeArray"},
  {0, 0}
};

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_k5p, __pyx_k5, sizeof(__pyx_k5)},
  {&__pyx_k6p, __pyx_k6, sizeof(__pyx_k6)},
  {&__pyx_k7p, __pyx_k7, sizeof(__pyx_k7)},
  {0, 0, 0}
};

static struct PyMethodDef __pyx_methods[] = {
  {"empty_array", (PyCFunction)__pyx_f_9array_ext_empty_array, METH_VARARGS|METH_KEYWORDS, __pyx_doc_9array_ext_empty_array},
  {"set_id_type_array", (PyCFunction)__pyx_f_9array_ext_set_id_type_array, METH_VARARGS|METH_KEYWORDS, __pyx_doc_9array_ext_set_id_type_array},
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initarray_ext(void); /*proto*/
PyMODINIT_FUNC initarray_ext(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("array_ext", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  if (__Pyx_InitStrings(__pyx_string_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 1; goto __pyx_L1;};
  __pyx_ptype_9array_ext_ndarray = __Pyx_ImportType("numpy", "ndarray", sizeof(PyArrayObject)); if (!__pyx_ptype_9array_ext_ndarray) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 27; goto __pyx_L1;}

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":12 */
  __pyx_1 = __Pyx_Import(__pyx_n_numpy, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_numpy, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":13 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_Int, __pyx_n_l) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":38 */
  import_array();

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":79 */
  __pyx_1 = __Pyx_GetName(__pyx_m, __pyx_n_numpy); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
  __pyx_2 = PyObject_GetAttr(__pyx_1, __pyx_n_float64); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 79; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_k3 = __pyx_2;
  __pyx_2 = 0;

  /* "/skratch/prabhu/svn/enthought-branches/branches/enthought.tvtk_2.0/enthought/tvtk/src/array_ext.pyx":86 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("array_ext");
}

static char *__pyx_filenames[] = {
  "array_ext.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
    PyObject *__import__ = 0;
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    __import__ = PyObject_GetAttrString(__pyx_b, "__import__");
    if (!__import__)
        goto bad;
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    module = PyObject_CallFunction(__import__, "OOOO",
        name, global_dict, empty_dict, list);
bad:
    Py_XDECREF(empty_list);
    Py_XDECREF(__import__);
    Py_XDECREF(empty_dict);
    return module;
}

static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name) {
    PyObject *result;
    result = PyObject_GetAttr(dict, name);
    if (!result)
        PyErr_SetObject(PyExc_NameError, name);
    return result;
}

static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type) {
    if (!type) {
        PyErr_Format(PyExc_SystemError, "Missing type object");
        return 0;
    }
    if (obj == Py_None || PyObject_TypeCheck(obj, type))
        return 1;
    PyErr_Format(PyExc_TypeError, "Cannot convert %s to %s",
        obj->ob_type->tp_name, type->tp_name);
    return 0;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#ifndef __PYX_HAVE_RT_ImportType
#define __PYX_HAVE_RT_ImportType
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, 
    long size) 
{
    PyObject *py_module = 0;
    PyObject *result = 0;
    
    py_module = __Pyx_ImportModule(module_name);
    if (!py_module)
        goto bad;
    result = PyObject_GetAttrString(py_module, class_name);
    if (!result)
        goto bad;
    if (!PyType_Check(result)) {
        PyErr_Format(PyExc_TypeError, 
            "%s.%s is not a type object",
            module_name, class_name);
        goto bad;
    }
    if (((PyTypeObject *)result)->tp_basicsize != size) {
        PyErr_Format(PyExc_ValueError, 
            "%s.%s does not appear to be the correct type object",
            module_name, class_name);
        goto bad;
    }
    return (PyTypeObject *)result;
bad:
    Py_XDECREF(result);
    return 0;
}
#endif

static PyObject *__Pyx_ImportModule(char *name) {
    PyObject *py_name = 0;
    
    py_name = PyString_FromString(name);
    if (!py_name)
        goto bad;
    return PyImport_Import(py_name);
bad:
    Py_XDECREF(py_name);
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
