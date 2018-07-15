#if defined(_WIN32)
#    include <ffitarget_x86.h>
#elif defined(__APPLE__)
#    include <ffitarget_x86.h>
#elif defined(__linux__)
#  if defined(__x86_64__) || defined(__i386__)
#    include <ffitarget_x86.h>
#  elif defined(__aarch64__)
#    include <ffitarget_aarch64.h>
#  elif defined(__arm__)
#    include <ffitarget_arm.h>
#  else
#    error "Unknown linux arch."
#  endif
#elif defined(__APPLE__)
#  if defined(__x86_64__)
#    include <ffitarget_x86.h>
#  else
#    error "Unknown Apple arch."
#  endif
#else
#  error "Unknown platform."
#endif
