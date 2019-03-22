#include "WidgetFactoryWindows.h"

#include "ButtonWindows.h"
#include "RectangleWindow.h"
#include "TextBoxPosix.h"

std::unique_ptr<Button> WidgetFactoryWindows::createButton()
{
  return std::make_unique<ButtonWindows>();
}

std::unique_ptr<Rectangle> WidgetFactoryWindows::createRectangle()
{
  return std::make_unique<RectangleWindows>();
}

std::unique_ptr<TextBox> WidgetFactoryWindows::createTexBox()
{
  return std::make_unique<TextBoxPosix>();
}