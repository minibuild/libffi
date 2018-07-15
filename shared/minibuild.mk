#include "../build_list.inc"

module_type = 'lib-shared'
module_name = 'ffi'

if BUILDSYS_TARGET_PLATFORM == 'windows' and BUILDSYS_TARGET_ARCH == 'x86_64':
    export_def_file = 'libffi_win64.def'
else:
    export_def_file = 'libffi.def'

symbol_visibility_default = 1

include_dir_list                   = ['../include']
asm_include_dir_list               = ['../include']
src_search_dir_list                = ['../src']
src_search_dir_list_windows        = ['../src/x86']
asm_search_dir_list_windows        = ['../src/x86']
asm_search_dir_list_linux_arm      = ['../src/arm']
src_search_dir_list_linux_arm      = ['../src/arm']
src_search_dir_list_linux_arm64    = ['../src/aarch64']
asm_search_dir_list_linux_arm64    = ['../src/aarch64']
src_search_dir_list_linux_x86      = ['../src/x86']
asm_search_dir_list_linux_x86      = ['../src/x86']
src_search_dir_list_linux_x86_64   = ['../src/x86']
asm_search_dir_list_linux_x86_64   = ['../src/x86']
src_search_dir_list_macosx         = ['../src/x86']
asm_search_dir_list_macosx         = ['../src/x86']
