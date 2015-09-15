//
// Created by max on 14.09.15.
//

#ifndef T7_COMPUTER_ARCHITECTURE_LAB1_DECODER_H
#define T7_COMPUTER_ARCHITECTURE_LAB1_DECODER_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Decoder {
    struct morse_symbol {
        string symbol;
        string code;

        morse_symbol(string symbol, string morse_seq) {
            this->symbol = symbol;
            this->code = morse_seq;
        }
    };

    vector<morse_symbol> alphabet;

public:
    Decoder();

    string encode_one_symbol(string symbol);

    string decode_one_symbol(string code);

    string decode(string code);

    string encode(string str);

    vector<string> decode_with_split(string str, string split_by);
};


#endif //T7_COMPUTER_ARCHITECTURE_LAB1_DECODER_H
