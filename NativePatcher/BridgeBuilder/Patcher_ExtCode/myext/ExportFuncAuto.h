#pragma once
#define WRAPPING_CEF_SHARED 1
#include "mycef.h" //mycef's jsvalue   
#include "mycef_msg_const.h"
class MyBrowser; //forward decl
				 //---------------------
				 //for auto gen content
#include "include/internal/cef_types.h"
				 //
#include "include/capi/cef_resource_bundle_handler_capi.h"
#include "include/capi/cef_resource_bundle_capi.h"
#include "include/capi/cef_xml_reader_capi.h"
#include "include/capi/cef_zip_reader_capi.h"
#include "include/capi/cef_print_handler_capi.h"
#include "include/capi/cef_print_settings_capi.h"
#include "include/capi/cef_command_line_capi.h"
#include "include/capi/cef_urlrequest_capi.h"
#include "include/capi/cef_app_capi.h"
				 //
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/ctocpp/browser_host_ctocpp.h"
#include "libcef_dll/ctocpp/process_message_ctocpp.h"
#include "libcef_dll/ctocpp/drag_data_ctocpp.h"
#include "libcef_dll/ctocpp/navigation_entry_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_ctocpp.h"
#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/ctocpp/download_item_callback_ctocpp.h"
#include "libcef_dll/ctocpp/download_item_ctocpp.h"
#include "libcef_dll/ctocpp/stream_writer_ctocpp.h"
#include "libcef_dll/ctocpp/stream_reader_ctocpp.h"
#include "libcef_dll/ctocpp/image_ctocpp.h"
#include "libcef_dll/ctocpp/request_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_ctocpp.h"
#include "libcef_dll/ctocpp/request_callback_ctocpp.h"
#include "libcef_dll/ctocpp/binary_value_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_ctocpp.h"
#include "libcef_dll/ctocpp/post_data_element_ctocpp.h"
#include "libcef_dll/ctocpp/resource_bundle_ctocpp.h"
#include "libcef_dll/ctocpp/sslinfo_ctocpp.h"
#include "libcef_dll/ctocpp/sslstatus_ctocpp.h"
#include "libcef_dll/ctocpp/x509cert_principal_ctocpp.h"
#include "libcef_dll/ctocpp/x509certificate_ctocpp.h"
#include "libcef_dll/ctocpp/task_runner_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_info_ctocpp.h"
#include "libcef_dll/ctocpp/xml_reader_ctocpp.h"
#include "libcef_dll/ctocpp/zip_reader_ctocpp.h"
#include "libcef_dll/ctocpp/command_line_ctocpp.h"
				 //
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/ctocpp/v8exception_ctocpp.h"
#include "libcef_dll/ctocpp/v8stack_frame_ctocpp.h"
#include "libcef_dll/ctocpp/v8stack_trace_ctocpp.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"
#include "libcef_dll/ctocpp/context_menu_params_ctocpp.h"
#include "libcef_dll/ctocpp/cookie_manager_ctocpp.h"
#include "libcef_dll/ctocpp/run_context_menu_callback_ctocpp.h"
#include "libcef_dll/ctocpp/menu_model_ctocpp.h"
#include "libcef_dll/ctocpp/print_settings_ctocpp.h"
#include "libcef_dll/ctocpp/response_ctocpp.h"
#include "libcef_dll/ctocpp/urlrequest_ctocpp.h"
				 //
#include "libcef_dll/ctocpp/value_ctocpp.h"
#include "libcef_dll/ctocpp/dictionary_value_ctocpp.h"
#include "libcef_dll/ctocpp/list_value_ctocpp.h"

				 //
#include "libcef_dll/cpptoc/drag_handler_cpptoc.h" 
#include "libcef_dll/cpptoc/navigation_entry_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/pdf_print_callback_cpptoc.h"
#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/download_image_callback_cpptoc.h"
#include "libcef_dll/cpptoc/run_file_dialog_callback_cpptoc.h"
#include "libcef_dll/cpptoc/domvisitor_cpptoc.h"
#include "libcef_dll/cpptoc/completion_callback_cpptoc.h"
#include "libcef_dll/cpptoc/cookie_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/delete_cookies_callback_cpptoc.h"
#include "libcef_dll/cpptoc/menu_model_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/request_context_handler_cpptoc.h"
#include "libcef_dll/cpptoc/resolve_callback_cpptoc.h"
#include "libcef_dll/cpptoc/response_filter_cpptoc.h"
#include "libcef_dll/cpptoc/scheme_handler_factory_cpptoc.h"
#include "libcef_dll/cpptoc/task_cpptoc.h"
#include "libcef_dll/cpptoc/set_cookie_callback_cpptoc.h"
#include "libcef_dll/cpptoc/v8accessor_cpptoc.h"
#include "libcef_dll/cpptoc/v8handler_cpptoc.h"
#include "libcef_dll/cpptoc/v8interceptor_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_info_visitor_cpptoc.h"
#include "libcef_dll/cpptoc/web_plugin_unstable_callback_cpptoc.h"
#include "libcef_dll/cpptoc/write_handler_cpptoc.h"
#include "libcef_dll/cpptoc/app_cpptoc.h"
#include "libcef_dll/cpptoc/urlrequest_client_cpptoc.h"
#include "libcef_dll/cpptoc/string_visitor_cpptoc.h"

//---------------------
//for auto gen content 
//
extern "C" {
	MY_DLL_EXPORT void MyCefMet_CefBrowser(cef_browser_t* me1, int metName, jsvalue* ret, jsvalue* v1, jsvalue* v2, jsvalue* v3, jsvalue* v4, jsvalue* v5, jsvalue* v6);
	MY_DLL_EXPORT void MyCefMet_CefFrame(cef_frame_t* me1, int metName, jsvalue* ret, jsvalue* v1, jsvalue* v2, jsvalue* v3, jsvalue* v4, jsvalue* v5, jsvalue* v6);
}