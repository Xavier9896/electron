// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "shell/browser/win/util_win_service.h"

#include "shell/services/util_win/public/mojom/util_win.mojom.h"
#include "content/public/browser/service_process_host.h"

mojo::Remote<util_win::mojom::UtilWin> LaunchUtilWinServiceInstance() {
  // Runs with kNoSandbox from sandbox.mojom.Sandbox.
  return content::ServiceProcessHost::Launch<util_win::mojom::UtilWin>(
      content::ServiceProcessHost::Options()
          .WithDisplayName(std::u16string(u"Windows Utilities"))
          .Pass());
}
