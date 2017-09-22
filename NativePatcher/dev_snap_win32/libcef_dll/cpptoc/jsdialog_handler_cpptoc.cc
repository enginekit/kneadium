//---THIS-FILE-WAS-PATCHED , org=D:\projects\cef_binary_3.3071.1647.win32\cpptoc\jsdialog_handler_cpptoc.cc
// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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
// $hash=04255b222eef72aeea67720233b7b0b7b9000365$
//

#include "libcef_dll/cpptoc/jsdialog_handler_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/jsdialog_callback_ctocpp.h"

//---kneadium-ext-begin
#include "../myext/ExportFuncAuto.h"
#include "../myext/InternalHeaderForExportFunc.h"
//---kneadium-ext-end

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
jsdialog_handler_on_jsdialog(struct _cef_jsdialog_handler_t* self,
                             cef_browser_t* browser,
                             const cef_string_t* origin_url,
                             cef_jsdialog_type_t dialog_type,
                             const cef_string_t* message_text,
                             const cef_string_t* default_prompt_text,
                             cef_jsdialog_callback_t* callback,
                             int* suppress_message) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;
  // Verify param: suppress_message; type: bool_byref
  DCHECK(suppress_message);
  if (!suppress_message)
    return 0;
  // Unverified params: origin_url, message_text, default_prompt_text

  // Translate param: suppress_message; type: bool_byref
  bool suppress_messageBool =
      (suppress_message && *suppress_message) ? true : false;

//---kneadium-ext-begin
#if ENABLE_KNEADIUM_EXT
auto me = CefJSDialogHandlerCppToC::Get(self);
const int CALLER_CODE=(CefJSDialogHandlerExt::_typeName << 16) | CefJSDialogHandlerExt::CefJSDialogHandlerExt_OnJSDialog_1;
auto m_callback= me->GetManagedCallBack(CALLER_CODE);
if(m_callback){
CefString tmp_arg2 (origin_url);
CefString tmp_arg4 (message_text);
CefString tmp_arg5 (default_prompt_text);
CefJSDialogHandlerExt::OnJSDialogArgs args1(browser,tmp_arg2,dialog_type,tmp_arg4,tmp_arg5,callback,&suppress_messageBool);
m_callback(CALLER_CODE, &args1.arg);
 if (((args1.arg.myext_flags >> 21) & 1) == 1){
// Restore param: suppress_message; type: bool_byref
if (suppress_message)
*suppress_message = suppress_messageBool ? true : false;


 return args1.arg.myext_ret_value;
}
}
#endif
//---kneadium-ext-end

  // Execute
  bool _retval = CefJSDialogHandlerCppToC::Get(self)->OnJSDialog(
      CefBrowserCToCpp::Wrap(browser), CefString(origin_url), dialog_type,
      CefString(message_text), CefString(default_prompt_text),
      CefJSDialogCallbackCToCpp::Wrap(callback), suppress_messageBool);

  // Restore param: suppress_message; type: bool_byref
  if (suppress_message)
    *suppress_message = suppress_messageBool ? true : false;

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
jsdialog_handler_on_before_unload_dialog(struct _cef_jsdialog_handler_t* self,
                                         cef_browser_t* browser,
                                         const cef_string_t* message_text,
                                         int is_reload,
                                         cef_jsdialog_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return 0;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return 0;
  // Unverified params: message_text

//---kneadium-ext-begin
#if ENABLE_KNEADIUM_EXT
auto me = CefJSDialogHandlerCppToC::Get(self);
const int CALLER_CODE=(CefJSDialogHandlerExt::_typeName << 16) | CefJSDialogHandlerExt::CefJSDialogHandlerExt_OnBeforeUnloadDialog_2;
auto m_callback= me->GetManagedCallBack(CALLER_CODE);
if(m_callback){
CefString tmp_arg2 (message_text);
CefJSDialogHandlerExt::OnBeforeUnloadDialogArgs args1(browser,tmp_arg2,is_reload,callback);
m_callback(CALLER_CODE, &args1.arg);
 if (((args1.arg.myext_flags >> 21) & 1) == 1){
 return args1.arg.myext_ret_value;
}
}
#endif
//---kneadium-ext-end

  // Execute
  bool _retval = CefJSDialogHandlerCppToC::Get(self)->OnBeforeUnloadDialog(
      CefBrowserCToCpp::Wrap(browser), CefString(message_text),
      is_reload ? true : false, CefJSDialogCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

void CEF_CALLBACK
jsdialog_handler_on_reset_dialog_state(struct _cef_jsdialog_handler_t* self,
                                       cef_browser_t* browser) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

//---kneadium-ext-begin
#if ENABLE_KNEADIUM_EXT
auto me = CefJSDialogHandlerCppToC::Get(self);
const int CALLER_CODE=(CefJSDialogHandlerExt::_typeName << 16) | CefJSDialogHandlerExt::CefJSDialogHandlerExt_OnResetDialogState_3;
auto m_callback= me->GetManagedCallBack(CALLER_CODE);
if(m_callback){
CefJSDialogHandlerExt::OnResetDialogStateArgs args1(browser);
m_callback(CALLER_CODE, &args1.arg);
 if (((args1.arg.myext_flags >> 21) & 1) == 1){
return;
}
}
#endif
//---kneadium-ext-end

  // Execute
  CefJSDialogHandlerCppToC::Get(self)->OnResetDialogState(
      CefBrowserCToCpp::Wrap(browser));
}

void CEF_CALLBACK
jsdialog_handler_on_dialog_closed(struct _cef_jsdialog_handler_t* self,
                                  cef_browser_t* browser) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser);
  if (!browser)
    return;

//---kneadium-ext-begin
#if ENABLE_KNEADIUM_EXT
auto me = CefJSDialogHandlerCppToC::Get(self);
const int CALLER_CODE=(CefJSDialogHandlerExt::_typeName << 16) | CefJSDialogHandlerExt::CefJSDialogHandlerExt_OnDialogClosed_4;
auto m_callback= me->GetManagedCallBack(CALLER_CODE);
if(m_callback){
CefJSDialogHandlerExt::OnDialogClosedArgs args1(browser);
m_callback(CALLER_CODE, &args1.arg);
 if (((args1.arg.myext_flags >> 21) & 1) == 1){
return;
}
}
#endif
//---kneadium-ext-end

  // Execute
  CefJSDialogHandlerCppToC::Get(self)->OnDialogClosed(
      CefBrowserCToCpp::Wrap(browser));
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefJSDialogHandlerCppToC::CefJSDialogHandlerCppToC() {
  GetStruct()->on_jsdialog = jsdialog_handler_on_jsdialog;
  GetStruct()->on_before_unload_dialog =
      jsdialog_handler_on_before_unload_dialog;
  GetStruct()->on_reset_dialog_state = jsdialog_handler_on_reset_dialog_state;
  GetStruct()->on_dialog_closed = jsdialog_handler_on_dialog_closed;
}

template <>
CefRefPtr<CefJSDialogHandler> CefCppToCRefCounted<
    CefJSDialogHandlerCppToC,
    CefJSDialogHandler,
    cef_jsdialog_handler_t>::UnwrapDerived(CefWrapperType type,
                                           cef_jsdialog_handler_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefJSDialogHandlerCppToC,
                                         CefJSDialogHandler,
                                         cef_jsdialog_handler_t>::DebugObjCt =
    0;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefJSDialogHandlerCppToC,
                                   CefJSDialogHandler,
                                   cef_jsdialog_handler_t>::kWrapperType =
    WT_JSDIALOG_HANDLER;
