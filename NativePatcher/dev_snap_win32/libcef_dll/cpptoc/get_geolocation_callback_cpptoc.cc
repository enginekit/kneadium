//---THIS-FILE-WAS-PATCHED , org=D:\projects\cef_binary_3.3071.1647.win32\cpptoc\get_geolocation_callback_cpptoc.cc
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
// $hash=5609fad7a14bad55ece61758326b8fdb8a20ac2c$
//

#include "libcef_dll/cpptoc/get_geolocation_callback_cpptoc.h"

//---kneadium-ext-begin
#include "../myext/ExportFuncAuto.h"
#include "../myext/InternalHeaderForExportFunc.h"
//---kneadium-ext-end

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK get_geolocation_callback_on_location_update(
    struct _cef_get_geolocation_callback_t* self,
    const struct _cef_geoposition_t* position) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: position; type: struct_byref_const
  DCHECK(position);
  if (!position)
    return;

  // Translate param: position; type: struct_byref_const
  CefGeoposition positionObj;
  if (position)
    positionObj.Set(*position, false);

//---kneadium-ext-begin
#if ENABLE_KNEADIUM_EXT
auto me = CefGetGeolocationCallbackCppToC::Get(self);
const int CALLER_CODE=(CefGetGeolocationCallbackExt::_typeName << 16) | CefGetGeolocationCallbackExt::CefGetGeolocationCallbackExt_OnLocationUpdate_1;
auto m_callback= me->GetManagedCallBack(CALLER_CODE);
if(m_callback){
CefGetGeolocationCallbackExt::OnLocationUpdateArgs args1(&positionObj);
m_callback(CALLER_CODE, &args1.arg);
 if (((args1.arg.myext_flags >> 21) & 1) == 1){
return;
}
}
#endif
//---kneadium-ext-end

  // Execute
  CefGetGeolocationCallbackCppToC::Get(self)->OnLocationUpdate(positionObj);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefGetGeolocationCallbackCppToC::CefGetGeolocationCallbackCppToC() {
  GetStruct()->on_location_update = get_geolocation_callback_on_location_update;
}

template <>
CefRefPtr<CefGetGeolocationCallback>
CefCppToCRefCounted<CefGetGeolocationCallbackCppToC,
                    CefGetGeolocationCallback,
                    cef_get_geolocation_callback_t>::
    UnwrapDerived(CefWrapperType type, cef_get_geolocation_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCppToCRefCounted<CefGetGeolocationCallbackCppToC,
                        CefGetGeolocationCallback,
                        cef_get_geolocation_callback_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType
    CefCppToCRefCounted<CefGetGeolocationCallbackCppToC,
                        CefGetGeolocationCallback,
                        cef_get_geolocation_callback_t>::kWrapperType =
        WT_GET_GEOLOCATION_CALLBACK;
