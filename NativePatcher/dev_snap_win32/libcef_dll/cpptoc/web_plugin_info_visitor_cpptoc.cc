//---THIS-FILE-WAS-PATCHED , org=D:\projects\cef_binary_3.3071.1647.win32\cpptoc\web_plugin_info_visitor_cpptoc.cc
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
// $hash=816066f7dd4898066b737cc6a990a8b384d3ae9a$
//

#include "libcef_dll/cpptoc/web_plugin_info_visitor_cpptoc.h"
#include "libcef_dll/ctocpp/web_plugin_info_ctocpp.h"

//---kneadium-ext-begin
#include "../myext/ExportFuncAuto.h"
#include "../myext/InternalHeaderForExportFunc.h"
//---kneadium-ext-end

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
web_plugin_info_visitor_visit(struct _cef_web_plugin_info_visitor_t* self,
                              cef_web_plugin_info_t* info,
                              int count,
                              int total) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: info; type: refptr_diff
  DCHECK(info);
  if (!info)
    return 0;

//---kneadium-ext-begin
#if ENABLE_KNEADIUM_EXT
auto me = CefWebPluginInfoVisitorCppToC::Get(self);
const int CALLER_CODE=(CefWebPluginInfoVisitorExt::_typeName << 16) | CefWebPluginInfoVisitorExt::CefWebPluginInfoVisitorExt_Visit_1;
auto m_callback= me->GetManagedCallBack(CALLER_CODE);
if(m_callback){
CefWebPluginInfoVisitorExt::VisitArgs args1(info,count,total);
m_callback(CALLER_CODE, &args1.arg);
 if (((args1.arg.myext_flags >> 21) & 1) == 1){
 return args1.arg.myext_ret_value;
}
}
#endif
//---kneadium-ext-end

  // Execute
  bool _retval = CefWebPluginInfoVisitorCppToC::Get(self)->Visit(
      CefWebPluginInfoCToCpp::Wrap(info), count, total);

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefWebPluginInfoVisitorCppToC::CefWebPluginInfoVisitorCppToC() {
  GetStruct()->visit = web_plugin_info_visitor_visit;
}

template <>
CefRefPtr<CefWebPluginInfoVisitor> CefCppToCRefCounted<
    CefWebPluginInfoVisitorCppToC,
    CefWebPluginInfoVisitor,
    cef_web_plugin_info_visitor_t>::UnwrapDerived(CefWrapperType type,
                                                  cef_web_plugin_info_visitor_t*
                                                      s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCppToCRefCounted<CefWebPluginInfoVisitorCppToC,
                        CefWebPluginInfoVisitor,
                        cef_web_plugin_info_visitor_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType
    CefCppToCRefCounted<CefWebPluginInfoVisitorCppToC,
                        CefWebPluginInfoVisitor,
                        cef_web_plugin_info_visitor_t>::kWrapperType =
        WT_WEB_PLUGIN_INFO_VISITOR;
