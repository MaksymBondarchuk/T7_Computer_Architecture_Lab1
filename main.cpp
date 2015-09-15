#include <iostream>
#include "Decoder.h"

using namespace std;


int main() {
    Decoder d = Decoder();

    cout << d.decode("Liubych       sss       Asad");

//    cout << m_a.encode_one_symbol("A") << endl;
//    cout << m_a.decode_one_symbol("...") << m_a.decode_one_symbol("---") << m_a.decode_one_symbol("...") << endl;
}