/**
    layer.cpp
    Purpose: defines class Layer

    @author Wall.Of.Death
    @version 1.0
    @since 2016-05-12
*/

#ifndef LAYER_H
#define LAYER_H

#include "Types.h"
#include <vector>

using namespace std;

class Layer {
    public:
        Layer();
        /* --- getters --- */
        LayerType       getLayerType     () const { return layerType     ;};
        int             getNeuronsCount  () const { return neuronsCount  ;};
        Layer*          getPreviousLayer () const { return previousLayer ;};
        Layer*          getNextLayer     () const { return nextLayer     ;};
        vector<double>* getInputVals     () const { return inputVals     ;};
        vector<double>* getInputWeights  () const { return inputWeights  ;};
        vector<double>* getWeightedSum   () const { return weightedSum   ;};
        vector<double>* getOutputVals    () const { return outputVals    ;};
        vector<double>* getBiasVals      () const { return biasVals      ;};
        /* --- setters --- */
        void setLayerType       (LayerType       val_) {layerType       = val_;}
        void setNeuronsCount    (int             val_) {neuronsCount    = val_;};
        void setPreviousLayer   (Layer*          val_) {previousLayer   = val_;};
        void setNextLayer       (Layer*          val_) {nextLayer       = val_;};
        void setInputVals       (vector<double>* val_) {inputVals       = val_;};
        void setInputWeights    (vector<double>* val_) {inputWeights    = val_;};
        void setWeightedSum     (vector<double>* val_) {weightedSum     = val_;};
        void setOutputVals      (vector<double>* val_) {outputVals      = val_;};
        void setBiasVals        (vector<double>* val_) {biasVals        = val_;};

    private:
        LayerType layerType;
        int neuronsCount;
        Layer* previousLayer;
        Layer* nextLayer;
        vector<double>* inputVals;
        vector<double>* inputWeights;
        vector<double>* weightedSum;
        vector<double>* outputVals;
        vector<double>* biasVals;



};

#endif // LAYER_H
