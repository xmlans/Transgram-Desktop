/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "base/const_string.h"

#define TDESKTOP_REQUESTED_ALPHA_VERSION (0ULL)

#ifdef TDESKTOP_ALLOW_CLOSED_ALPHA
#define TDESKTOP_ALPHA_VERSION TDESKTOP_REQUESTED_ALPHA_VERSION
#else // TDESKTOP_ALLOW_CLOSED_ALPHA
#define TDESKTOP_ALPHA_VERSION (0ULL)
#endif // TDESKTOP_ALLOW_CLOSED_ALPHA

// used in Updater.cpp and Setup.iss for Windows
// TransGram: own id and names so data, shortcuts and registry entries
// never collide with the official Telegram Desktop.
constexpr auto AppId = "{7FA4B91D-EC51-482D-8F14-FFE27E0D9281}"_cs;
constexpr auto AppNameOld = "TransGram (Legacy)"_cs;
constexpr auto AppName = "TransGram"_cs;
constexpr auto AppFile = "TransGram"_cs;
constexpr auto AppVersion = 7003001;
constexpr auto AppVersionStr = "7.3.1";
constexpr auto AppBetaVersion = false;
constexpr auto AppAlphaVersion = TDESKTOP_ALPHA_VERSION;
