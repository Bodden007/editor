#pragma once
#include <iostream>

class deleteGraph
{
private:
    bool delgr = false;

public:
    bool getDelgr() { return delgr; };
    void deleteGraphPrim();
};