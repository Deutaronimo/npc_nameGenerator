#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include<string>
#include"name_generator.h"

using namespace std;

NameGenerator::NameGenerator()
{ 
    maxSyllables = 3;
    minSyllables = 2;

    numSyllables = rand() % maxSyllables + minSyllables;

    srand(time(NULL));

    syllables = {"ch","psi","sh","th","um","mu","oz","zo","ri","ot","to","ro","ri","ex","ax","ix","xi", "ea","ae","al", "ar", "en", "dor", "mir", "thal", "wyn", "eth", "ion", "ael", "ka", "rin",
        "tor", "el", "fen", "gal", "nor", "sil", "val", "zor", "bra", "sha", "dra", "lor", "mal", "nel", "oth", "pyr",
        "qua", "ryn", "sel", "tan", "uth", "vor", "xel", "yra", "zyn", "bel", "cal", "den", "eri", "fyn", "gor", "hal",
        "iri", "jal", "kel", "len", "mor", "ner", "ol", "pal", "quin", "rel", "sar", "tal", "ul", "ven", "wyr", "xen",
        "yel", "zar", "bal", "cer", "del", "er", "fal", "gel", "har", "il", "jar", "kor", "lan", "mel", "nel", "or",
        "par", "quor", "ras", "sel", "tar", "ur", "vel", "wal", "xor", "yal", "zor", "bran", "char", "dren", "lir",
        "mar", "ner", "oryn", "tro", "quin", "ral", "syth", "thar", "vyn"};

        firstWord = {
            "ever","chill","night","dark","deep",
            "front","grime","dirt","hallow","ember",
            "never","under","gloom","mist","shadow",
            "terra","spirit","ether","wind","water",
            "west","east","south","north","wither",
            "frost","sun","rain","snow","hail",
            "sayda","bore","over","ara","far",
            "mans","hells","heavens","gray","tarn",
            "sutton","earth","moon","star","gala",
            "ashen","earthen","celeste","molten","nether",
            "morden","pyro","zero","frozen","wither",
            "pike","hilts","dagger","bow","flail",
            "ghoul","lich","goblin","gnome","dragon",
            "silver","gold","wood","glass","potter",
            "gem","coin","trade","wonder","graven",
            "crystal","slates","rock","surface","day",
            "draken","mortal","fays","edge","farm",
            "tin","mortis","valis","glad","pad",
            "cron","bosh","agd","here","luds"
        };
        
        secondWord = {
            "glade","wood","dale","shade","hall",
            "moor","rend","mire","shire","crest",
            "vale","stead","wich","more","thton",
            "lyn","thol","enthal","orum","een",
            "ill","dul","ora","illa","ayn",
            "ten","fold","send","er","march",
            "strom","storm","bend","way","dore",
            "rest","break","tell","sond","beam",
            "tzer","peak","tellum","ray","reach",
            "berg","holt","heim","gart","still",
            "haven","trin","fen","sten","blend",
            "worth","wich","brook","holm","stow",
            "bury","stings","sham","mere","lech"
        
        };
}

string NameGenerator::getNpcName()
{
    
    numSyllables = rand() % maxSyllables + minSyllables;
    npcName = "";

    for (int i = 0; i < numSyllables; i++) 
    {
        npcName += syllables[rand() % syllables.size()];
    }

    npcName[0] = toupper(npcName[0]);

    return npcName;
}

string NameGenerator::getPlaceName()
{
    firstName  = firstWord [rand()% firstWord.size()];
    secondName = secondWord[rand()% secondWord.size()]; 
    placeName  = firstName + secondName;

    placeName[0] = toupper(placeName[0]);
    return placeName;
}