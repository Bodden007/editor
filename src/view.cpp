#include "includes/view.hpp"

void View::userView(std::string message)
{
    std::cout << message << " done" << std::endl;
}
void View::managePrimitive()
{
    rect rec;
    circle circ;
    rec.createFigure();
    circ.createFigure();
}