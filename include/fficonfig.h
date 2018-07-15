#if defined(_WIN32)
#  include <fficonfig_winapi.h>
#elif defined(__linux__)
#  if defined(__x86_64__)
#    include <fficonfig_linux_x86_64.h>
#  elif defined(__i386__)
#    include <fficonfig_linux_i686.h>
#  elif defined(__aarch64__)
#    include <fficonfig_linux_aarch64.h>
#  elif defined(__arm__)
#    include <fficonfig_linux_arm.h>
#  else
#    error "Unknown linux arch."
#  endif
#elif defined(__APPLE__)
#  if defined(__x86_64__)
#    include <fficonfig_macosx_x86_64.h>
#  else
#    error "Unknown Apple arch."
#  endif
#else
#  error "Unknown platform."
#endif
