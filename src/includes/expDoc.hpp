#pragma once
#include <iostream>

class expDoc
{
private:
    bool expd = false;

public:
    bool getExpd() { return expd; };
    void exportDocument();
};