#ifndef MODEL_LOADING_H
#define MODEL_LOADING_H

#include "Common.h"
#include "GameObject.h"

shared_ptr<GameObject> loadModelFromFile(const string& filename);


#endif