// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_KLUDGE_NO_DOUBLETAPGUARD)
  #if defined (MIRYOKU_KLUDGE_LANGUAGE_SWITCHER)
    #define u_to_U_BASE macro_U_BASE
    #define u_to_U_EXTRA macro_U_EXTRA
  #else
    #define u_to_U_BASE to U_BASE
    #define u_to_U_EXTRA to U_EXTRA
  #endif
  #define u_to_U_TAP to U_TAP
  #define u_to_U_BUTTON to U_BUTTON
  #define u_to_U_NAV to U_NAV
  #define u_to_U_MOUSE to U_MOUSE
  #define u_to_U_MEDIA to U_MEDIA
  #define u_to_U_NUM to U_NUM
  #define u_to_U_SYM to U_SYM
  #define u_to_U_FUN to U_FUN
  #define u_to_U_HE_NUM to U_HE_NUM
#endif

#if defined (MIRYOKU_KLUDGE_DOUBLETAPBOOT)
  #if defined (MIRYOKU_KLUDGE_SOFT_OFF)
    #define U_BOOT &u_soft_off
  #else
    #define U_BOOT &u_bootloader
  #endif
#else
  #if defined (MIRYOKU_KLUDGE_SOFT_OFF)
    #define U_BOOT &soft_off
  #else
    #define U_BOOT &bootloader
  #endif
#endif
