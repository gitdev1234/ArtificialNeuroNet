/**
    artificialneuronet.cpp
    Purpose: definess class ArtificialNeuroNet

    @author Wall.Of.Death
    @version 1.0
    @since 2016-05-12
*/

#ifndef ARTIFICIALNEURONET_H
#define ARTIFICIALNEURONET_H

#include <vector>
#include "layer.h"

class ArtificialNeuroNet {
    public:
        ArtificialNeuroNet(const vector<int>* structure_);
    private:
        vector<Layer> layers;


};

#endif // ARTIFICIALNEURONET_H
