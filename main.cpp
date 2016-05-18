/**
    main.cpp
    Purpose: main execution file

    @author Wall.Of.Death
    @version 1.0
    @since 2016-05-12
*/

#include <iostream>
#include <vector>
#include "artificialneuronet.h"

using namespace std;

int main()
{
   cout << "Hello World!" << endl;
   vector<int> structure = {1,2,3,1};
   ArtificialNeuroNet ANN(&structure);

}
