// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ELECTRON_SHELL_BROWSER_WIN_UTIL_WIN_SERVICE_H_
#define ELECTRON_SHELL_BROWSER_WIN_UTIL_WIN_SERVICE_H_

#include "shell/services/util_win/public/mojom/util_win.mojom-forward.h"
#include "mojo/public/cpp/bindings/remote.h"

// Spawns a new isolated instance of the Windows utility service and returns a
// remote interface to it. The lifetime of the service process is tied strictly
// to the lifetime of the returned Remote.
mojo::Remote<util_win::mojom::UtilWin> LaunchUtilWinServiceInstance();

#endif  // ELECTRON_SHELL_BROWSER_WIN_UTIL_WIN_SERVICE_H_
