## Status
libffi-3.2.1 was released on November 12, 2014.  Check the libffi web
page for updates: http://sourceware.org/libffi

## Supported toolchains and platforms
This fork of libffi aims to provide preconfigured headers for:
  
* Windows (i686, x86_64):
  - Microsoft Visual Studio 2005, 2008, 2010, 2012, 2013, 2015, 2017
  - MinGW
* Linux (i686, x86_64, arm-eabi, aarch64):
  - GCC
  - A range of gcc cross-toolchains generated by crosstool-ng: https://crosstool-ng.github.io
* MacOSX (x86_64):
  - clang
  
## Used build system
MiniBuild, for documentation see: https://minibuild.github.io/minibuild/
  
  * makefile for static library - minibuild.mk
  * makefile for shared library - shared/minibuild.mk