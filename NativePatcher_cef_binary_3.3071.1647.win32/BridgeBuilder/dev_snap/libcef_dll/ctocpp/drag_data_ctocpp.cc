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
// $hash=543054b6b4e606ea5c571ca48d2108f8ed6674ab$
//

#include "libcef_dll/ctocpp/drag_data_ctocpp.h"
#include "libcef_dll/ctocpp/image_ctocpp.h"
#include "libcef_dll/ctocpp/stream_writer_ctocpp.h"
#include "libcef_dll/transfer_util.h"

// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefDragData> CefDragData::Create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_drag_data_t* _retval = cef_drag_data_create();

  // Return type: refptr_same
  return CefDragDataCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefDragData> CefDragDataCToCpp::Clone() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clone))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_drag_data_t* _retval = _struct->clone(_struct);

  // Return type: refptr_same
  return CefDragDataCToCpp::Wrap(_retval);
}

bool CefDragDataCToCpp::IsReadOnly() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval ? true : false;
}

bool CefDragDataCToCpp::IsLink() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_link))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_link(_struct);

  // Return type: bool
  return _retval ? true : false;
}

bool CefDragDataCToCpp::IsFragment() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_fragment))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_fragment(_struct);

  // Return type: bool
  return _retval ? true : false;
}

bool CefDragDataCToCpp::IsFile() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_file))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_file(_struct);

  // Return type: bool
  return _retval ? true : false;
}

CefString CefDragDataCToCpp::GetLinkURL() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDragDataCToCpp::GetLinkTitle() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_title))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_title(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDragDataCToCpp::GetLinkMetadata() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_metadata))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_metadata(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDragDataCToCpp::GetFragmentText() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_fragment_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_fragment_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDragDataCToCpp::GetFragmentHtml() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_fragment_html))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_fragment_html(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDragDataCToCpp::GetFragmentBaseURL() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_fragment_base_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_fragment_base_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDragDataCToCpp::GetFileName() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_file_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

size_t CefDragDataCToCpp::GetFileContents(CefRefPtr<CefStreamWriter> writer) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_contents))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: writer

  // Execute
  size_t _retval = _struct->get_file_contents(
      _struct, CefStreamWriterCToCpp::Unwrap(writer));

  // Return type: simple
  return _retval;
}

bool CefDragDataCToCpp::GetFileNames(std::vector<CefString>& names) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_file_names))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: names; type: string_vec_byref
  cef_string_list_t namesList = cef_string_list_alloc();
  DCHECK(namesList);
  if (namesList)
    transfer_string_list_contents(names, namesList);

  // Execute
  int _retval = _struct->get_file_names(_struct, namesList);

  // Restore param:names; type: string_vec_byref
  if (namesList) {
    names.clear();
    transfer_string_list_contents(namesList, names);
    cef_string_list_free(namesList);
  }

  // Return type: bool
  return _retval ? true : false;
}

void CefDragDataCToCpp::SetLinkURL(const CefString& url) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_link_url))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: url

  // Execute
  _struct->set_link_url(_struct, url.GetStruct());
}

void CefDragDataCToCpp::SetLinkTitle(const CefString& title) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_link_title))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: title

  // Execute
  _struct->set_link_title(_struct, title.GetStruct());
}

void CefDragDataCToCpp::SetLinkMetadata(const CefString& data) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_link_metadata))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: data

  // Execute
  _struct->set_link_metadata(_struct, data.GetStruct());
}

void CefDragDataCToCpp::SetFragmentText(const CefString& text) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_fragment_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: text

  // Execute
  _struct->set_fragment_text(_struct, text.GetStruct());
}

void CefDragDataCToCpp::SetFragmentHtml(const CefString& html) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_fragment_html))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: html

  // Execute
  _struct->set_fragment_html(_struct, html.GetStruct());
}

void CefDragDataCToCpp::SetFragmentBaseURL(const CefString& base_url) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_fragment_base_url))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: base_url

  // Execute
  _struct->set_fragment_base_url(_struct, base_url.GetStruct());
}

void CefDragDataCToCpp::ResetFileContents() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, reset_file_contents))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->reset_file_contents(_struct);
}

void CefDragDataCToCpp::AddFile(const CefString& path,
                                const CefString& display_name) {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, add_file))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(!path.empty());
  if (path.empty())
    return;
  // Unverified params: display_name

  // Execute
  _struct->add_file(_struct, path.GetStruct(), display_name.GetStruct());
}

CefRefPtr<CefImage> CefDragDataCToCpp::GetImage() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_image))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_image_t* _retval = _struct->get_image(_struct);

  // Return type: refptr_same
  return CefImageCToCpp::Wrap(_retval);
}

CefPoint CefDragDataCToCpp::GetImageHotspot() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_image_hotspot))
    return CefPoint();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_image_hotspot(_struct);

  // Return type: simple
  return _retval;
}

bool CefDragDataCToCpp::HasImage() {
  cef_drag_data_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_image))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_image(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefDragDataCToCpp::CefDragDataCToCpp() {}

template <>
cef_drag_data_t*
CefCToCppRefCounted<CefDragDataCToCpp, CefDragData, cef_drag_data_t>::
    UnwrapDerived(CefWrapperType type, CefDragData* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefDragDataCToCpp,
                                         CefDragData,
                                         cef_drag_data_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefDragDataCToCpp,
                                   CefDragData,
                                   cef_drag_data_t>::kWrapperType =
    WT_DRAG_DATA;
