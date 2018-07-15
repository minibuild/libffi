build_list = [
  'closures.c',
  'java_raw_api.c',
  'prep_cif.c',
  'raw_api.c',
  'types.c',
]

build_list_linux_x86      = ['ffi.c', 'sysv.S','win32.S']
build_list_linux_x86_64   = ['ffi64.c', 'unix64.S']
build_list_linux_arm      = ['ffi.c', 'sysv.S']
build_list_linux_arm64    = ['ffi.c', 'sysv.S']
build_list_macosx         = ['ffi64.c', 'darwin64.S']
build_list_windows        = ['ffi.c']

if BUILDSYS_TOOLSET_NAME == 'msvs':
    build_list_windows_x86 = ['win32.asm']
    build_list_windows_x86_64 = ['win64.asm']
else:
    build_list_windows_x86 = ['win32.S']
    build_list_windows_x86_64 = ['win64.S']
