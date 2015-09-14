#include <iostream>
#include "Morse_alphabet.h"

using namespace std;


int main() {
    Morse_alphabet m_a = Morse_alphabet();

//    cout << m_a.encode("A") << endl;
    cout << m_a.decode("...") << m_a.decode("---") << m_a.decode("...") << endl;
}