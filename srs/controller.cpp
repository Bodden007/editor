#include "includes/controller.hpp"

void Controller::start()
{
    std::cout << "Controller start" << std::endl;
    Model model;
    View view;

    if (model.getCrd())
    {
        view.viewCreat();
    };
    if (model.getImprd())
    {
        view.viewImport();
    };
    if (model.getExpd())
    {
        view.viewExsport();
    };
    if (model.getCrgr())
    {
        view.viewCreatGraph();
    };
    if (model.getDelgr())
    {
        view.viewDeleteGraph();
    };
}
