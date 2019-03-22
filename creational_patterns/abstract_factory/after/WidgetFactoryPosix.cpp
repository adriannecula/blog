#include "WidgetFactoryPosix.h"

#include "ButtonPosix.h"
#include "RectanglePosix.h"
#include "TextBoxPosix.h"

std::unique_ptr<Button> WidgetFactoryPosix::createButton()
{
  return std::make_unique<ButtonPosix>();
}

std::unique_ptr<Rectangle> WidgetFactoryPosix::createRectangle()
{
  return std::make_unique<RectanglePosix>();
}

std::unique_ptr<TextBox> WidgetFactoryPosix::createTexBox()
{
  return std::make_unique<TextBoxPosix>();
}