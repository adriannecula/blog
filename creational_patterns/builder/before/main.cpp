#include "ButtonPosix.h"
#include "ButtonWindows.h"

#include "RectanglePosix.h"
#include "RectangleWindow.h"

#include "TextBoxPosix.h"
#include "TextBoxWindows.h"

#include <memory>

#define WIN64
int main()
{
  
  std::unique_ptr<Button> button;
#ifdef  WIN64
  button = std::make_unique<ButtonWindows>();
#else
  button = std::make_unique<ButtonPosix>();
#endif //  WIN64

  std::unique_ptr<Rectangle> rectangle;

#ifdef  WIN64
  rectangle = std::make_unique<RectangleWindows>();
#else
  rectangle = std::make_unique<RectanglePosix>();
#endif //  WIN64

  std::unique_ptr<TextBox> textBox;
#ifdef  WIN64
  textBox = std::make_unique<TextBoxWindows>();
#else
  textBox = std::make_unique<TextBoxPosix>();
#endif //  WIN64

  button->press();
  rectangle->draw();
  textBox->getInput();

  getchar();
  return 0;
}