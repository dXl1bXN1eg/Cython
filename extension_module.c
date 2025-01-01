#include <Python.h>
// doc
static PyObject* say_hello(PyObject* self, PyObject* args) {
    return Py_BuildValue("s", "Hello from C!");
}

static PyMethodDef ExtensionMethods[] = {
    {"say_hello", say_hello, METH_VARARGS, "Says hello from C."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef extensionmodule = {
    PyModuleDef_HEAD_INIT,
    "extension_module", 
    "A simple extension module", 
    -1,
    ExtensionMethods
};

PyMODINIT_FUNC PyInit_extension_module(void) {
    return PyModule_Create(&extensionmodule);
}
