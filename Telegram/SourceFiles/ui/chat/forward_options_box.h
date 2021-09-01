/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/layers/generic_box.h"

namespace Ui {

struct ForwardOptions {
	bool dropNames = false;
	bool hasCaptions = false;
	bool dropCaptions = false;
};

void ForwardOptionsBox(
	not_null<GenericBox*> box,
	int count,
	ForwardOptions options,
	Fn<void(ForwardOptions)> optionsChanged,
	Fn<void()> changeRecipient);

} // namespace Ui
