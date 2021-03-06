/*  =========================================================================
    guessten - GUESSTEN wrapper

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
    =========================================================================
*/

#ifndef guessten_library_H_INCLUDED
#define guessten_library_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <zmq.h>
#include <czmq.h>

//  GUESSTEN version macros for compile-time API detection

#define GUESSTEN_VERSION_MAJOR 1
#define GUESSTEN_VERSION_MINOR 0
#define GUESSTEN_VERSION_PATCH 0

#define GUESSTEN_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define GUESSTEN_VERSION \
    GUESSTEN_MAKE_VERSION(GUESSTEN_VERSION_MAJOR, GUESSTEN_VERSION_MINOR, GUESSTEN_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined LIBGUESSTEN_STATIC
#       define GUESSTEN_EXPORT
#   elif defined LIBGUESSTEN_EXPORTS
#       define GUESSTEN_EXPORT __declspec(dllexport)
#   else
#       define GUESSTEN_EXPORT __declspec(dllimport)
#   endif
#else
#   define GUESSTEN_EXPORT
#endif

//  Opaque class structures to allow forward references
typedef struct _guessten_t guessten_t;
#define GUESSTEN_T_DEFINED


//  Public API classes

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
