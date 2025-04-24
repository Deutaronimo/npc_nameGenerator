#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class NameGenerator
{
    public:
    string npcName    = "";
    string placeName  = "";
    string firstName  = "";
    string secondName = "";

    vector<string>syllables;
    vector<string>firstWord;
    vector<string>secondWord;
    vector<string>placeNames;

    int maxSyllables;
    int minSyllables;
    int numSyllables;
    int randomOne;
    int randomTwo;
    
    NameGenerator();
    string getPlaceName();
    string getNpcName();


};