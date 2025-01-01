from setuptools import setup, Extension
from Cython.Build import cythonize

# C uzantısı
ext_modules = [
    Extension("extension_module", ["extension_module.c"])
]

# Cython derlemesi
setup(
    name="extension_module",
    ext_modules=cythonize(ext_modules)
)
