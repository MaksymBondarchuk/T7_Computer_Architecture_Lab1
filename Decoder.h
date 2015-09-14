//
// Created by max on 14.09.15.
//

#ifndef T7_COMPUTER_ARCHITECTURE_LAB1_DECODER_H
#define T7_COMPUTER_ARCHITECTURE_LAB1_DECODER_H

#include <string>
using namespace std;

class Decoder {



public:
    Decoder();

    string encode(string morse_text);

    string decode(string morse_text);

};


#endif //T7_COMPUTER_ARCHITECTURE_LAB1_DECODER_H
