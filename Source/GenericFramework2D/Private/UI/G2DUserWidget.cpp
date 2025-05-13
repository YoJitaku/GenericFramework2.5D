// Copyright (c) 2025 HeartString Entertainment (JitakuYo). All Rights Reserved.


#include "UI/G2DUserWidget.h"

void UG2DUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	WidgetControllerSet();
}
