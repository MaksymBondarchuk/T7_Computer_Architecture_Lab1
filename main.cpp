#include <iostream>
#include <fstream>
#include "Decoder/Decoder.h"

using namespace std;


int main() {
    ifstream file("text.txt");
//    string str((std::istreambuf_iterator<char>(ifs)),
//               (std::istreambuf_iterator<char>()));
//    cout << str << endl;
    string s;
    file >> s;
    cout << s << endl;


    Decoder d = Decoder();
    string tmp = d.encode("Dimitrijjj loves Asad and   ISIS");
//    cout << tmp << endl;
//    cout << d.decode(tmp) << endl;

    return 0;
}