#pragma once

#include <memory>

#include "Button.h"
#include "Rectangle.h"
#include "TextBox.h"

class WidgetFactory
{
public:
  virtual std::unique_ptr<Button> createButton() = 0;

  virtual std::unique_ptr<Rectangle> createRectangle() = 0;
  
  virtual std::unique_ptr<TextBox> createTexBox() = 0;
};