#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include "name_generator.h"


int main() 
{
    //Make a name gen object.
    NameGenerator nameGenerator;

    //An example of creating 20 NPC names from 20 places.
    for( int x = 0; x < 20; x++ )
    {
        cout << "You meet " << nameGenerator.getNpcName() << " from " << nameGenerator.getPlaceName() << endl;
    }

    return 0;
}
