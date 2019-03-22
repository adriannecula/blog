#define WIN64
#ifdef WIN64
#include "WidgetFactoryWindows.h"
#else
#include "WidgetFactoryPosix.h"
#endif // WIN64



#include <memory>


int main()
{
  
  std::unique_ptr<WidgetFactory> factory;
#ifdef  WIN64
  factory = std::make_unique<WidgetFactoryWindows>();
#else
  factory = std::make_unique<WidgetFactoryPosix>();
#endif //  WIN64
  std::unique_ptr<Button> button = factory->createButton();
  std::unique_ptr<Rectangle> rectangle = factory->createRectangle();
  std::unique_ptr<TextBox> textBox = factory->createTexBox();

  button->press();
  rectangle->draw();
  textBox->getInput();

  getchar();
  return 0;
}