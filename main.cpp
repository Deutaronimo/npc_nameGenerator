#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Function to generate a random name
std::string generateName() {
    std::vector<std::string> syllables = {"ch","psi","sh","th","um","mu","oz","zo","ri","ot","to","ro","ri","ex","ax","ix","xi", "ea","ae","al", "ar", "en", "dor", "mir", "thal", "wyn", "eth", "ion", "ael", "ka", "rin",
          "tor", "el", "fen", "gal", "nor", "sil", "val", "zor", "bra", "sha", "dra", "lor", "mal", "nel", "oth", "pyr",
          "qua", "ryn", "sel", "tan", "uth", "vor", "xel", "yra", "zyn", "bel", "cal", "den", "eri", "fyn", "gor", "hal",
          "iri", "jal", "kel", "len", "mor", "ner", "ol", "pal", "quin", "rel", "sar", "tal", "ul", "ven", "wyr", "xen",
          "yel", "zar", "bal", "cer", "del", "er", "fal", "gel", "har", "il", "jar", "kor", "lan", "mel", "nel", "or",
          "par", "quor", "ras", "sel", "tar", "ur", "vel", "wal", "xor", "yal", "zor", "bran", "char", "dren", "lir",
          "mar", "ner", "oryn", "tro", "quin", "ral", "syth", "thar", "vyn"};
    std::string name;
    
    int maxSyllables = 3;
    int minSyllables = 2;
    
    int numSyllables = rand() % maxSyllables + minSyllables; // Randomly choose 2-4 syllables
    for (int i = 0; i < numSyllables; i++) {
        name += syllables[rand() % syllables.size()];
    }

    // Capitalize the first letter
    name[0] = toupper(name[0]);

    return name;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    int numNames = 200; // Generate 10 random names
    std::cout << "Random Fantasy Names:\n";
    std::cout << "--------------------------------------------------" << std::endl;
    for (int i = 0; i < numNames; i++) {
        std::cout << generateName() << ",  "; 
        
    }
    std::cout << " " << std::endl;;
    std::cout << "--------------------------------\n";
    std::cout << generateName();
    return 0;
}
