//
// Created by max on 14.09.15.
//

#ifndef T7_COMPUTER_ARCHITECTURE_LAB1_MORSE_ALPHABET_H
#define T7_COMPUTER_ARCHITECTURE_LAB1_MORSE_ALPHABET_H


#include <string>
#include <vector>
//#include <bits/stl_vector.h>

using namespace std;


class Morse_alphabet {

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
    Morse_alphabet();

    string decode(string code);

    string encode(string symbol);
};


#endif //T7_COMPUTER_ARCHITECTURE_LAB1_MORSE_ALPHABET_H
