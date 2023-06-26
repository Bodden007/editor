#pragma once
#include <iostream>

class Model
{
private:
    bool crd;
    bool impd;
    bool expd;
    bool crgr;
    bool delgr;

public:
    bool getCrd() { return crd; };
    bool getImprd() { return impd; };
    bool getExpd() { return expd; };
    bool getCrgr() { return crgr; };
    bool getDelgr() { return delgr; };

    void createDoc();
    void importDoc();
    void expDoc();
    void createGraph();
    void deleteGraph();
};