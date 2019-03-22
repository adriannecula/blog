#pragma once

#include "WidgetFactory.h"

class WidgetFactoryWindows : public WidgetFactory
{
public:
  virtual std::unique_ptr<Button> createButton();

  virtual std::unique_ptr<Rectangle> createRectangle();

  virtual std::unique_ptr<TextBox> createTexBox();
};