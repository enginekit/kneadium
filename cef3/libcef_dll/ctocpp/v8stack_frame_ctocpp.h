// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8STACK_FRAME_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8STACK_FRAME_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_v8.h"
#include "include/capi/cef_v8_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefV8StackFrameCToCpp
    : public CefCToCpp<CefV8StackFrameCToCpp, CefV8StackFrame,
        cef_v8stack_frame_t> {
 public:
  explicit CefV8StackFrameCToCpp(cef_v8stack_frame_t* str)
      : CefCToCpp<CefV8StackFrameCToCpp, CefV8StackFrame, cef_v8stack_frame_t>(
          str) {}
  virtual ~CefV8StackFrameCToCpp() {}

  // CefV8StackFrame methods
  virtual bool IsValid() OVERRIDE;
  virtual CefString GetScriptName() OVERRIDE;
  virtual CefString GetScriptNameOrSourceURL() OVERRIDE;
  virtual CefString GetFunctionName() OVERRIDE;
  virtual int GetLineNumber() OVERRIDE;
  virtual int GetColumn() OVERRIDE;
  virtual bool IsEval() OVERRIDE;
  virtual bool IsConstructor() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_V8STACK_FRAME_CTOCPP_H_

