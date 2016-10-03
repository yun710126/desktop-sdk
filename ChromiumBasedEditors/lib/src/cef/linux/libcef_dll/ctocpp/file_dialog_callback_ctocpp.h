// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_FILE_DIALOG_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_FILE_DIALOG_CALLBACK_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include <vector>
#include "include/cef_dialog_handler.h"
#include "include/capi/cef_dialog_handler_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefFileDialogCallbackCToCpp
    : public CefCToCpp<CefFileDialogCallbackCToCpp, CefFileDialogCallback,
        cef_file_dialog_callback_t> {
 public:
  CefFileDialogCallbackCToCpp();

  // CefFileDialogCallback methods.
  void Continue(int selected_accept_filter,
      const std::vector<CefString>& file_paths) OVERRIDE;
  void Cancel() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_FILE_DIALOG_CALLBACK_CTOCPP_H_
