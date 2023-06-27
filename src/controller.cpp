#include "includes/controller.hpp"

void Controller::start()
{
    std::cout << "Controller start" << std::endl;
    createDoc crDoc;
    importDoc impDoc;
    expDoc exDoc;
    createGraph crGraph;
    deleteGraph deGraph;
    View view;
    crDoc.createDocument();
    if (crDoc.getCrd())
    {
        view.userView("Creating document");
    };
    impDoc.importDocument();
    if (impDoc.getImprd())
    {
        view.userView("Importing document");
    };
    exDoc.exportDocument();
    if (exDoc.getExpd())
    {
        view.userView("Exporting document");
    };
    crGraph.createGraphPrim();
    if (crGraph.getCrgr())
    {
        view.userView("Creating primitive graph");
    };
    deGraph.deleteGraphPrim();
    if (deGraph.getDelgr())
    {
        view.userView("Deleting primitive graph");
    };

    view.managePrimitive();
}