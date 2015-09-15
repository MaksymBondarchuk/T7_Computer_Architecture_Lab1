#include <iostream>
#include "Decoder.h"

using namespace std;


int main() {
    Decoder d = Decoder();

    vector<string> v = d.decode_with_split("Liubych        sss        Asad   d", "        ");
    for (unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

//    cout << d.decode("Liubych       sss       Asad") << endl;

//    cout << m_a.encode_one_symbol("A") << endl;
//    cout << m_a.decode_one_symbol("...") << m_a.decode_one_symbol("---") << m_a.decode_one_symbol("...") << endl;
}