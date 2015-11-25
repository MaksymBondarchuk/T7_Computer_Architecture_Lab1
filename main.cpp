#include <iostream>
#include "Decoder/Decoder.h"
#include <chrono>

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2)
        return 1;

    auto d = Decoder();

    auto begin = std::chrono::high_resolution_clock::now();

    string dogShit = argv[1];
    if (dogShit == "encode")
        d.code_file("etext.txt", "dtext.txt", true);    // Encode
    else if (dogShit == "decode")
        d.code_file("dtext.txt", "etext.txt", false);       // Decode

    auto end = chrono::high_resolution_clock::now();
    auto time = chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count() / 1000000000.0;
    cout << "Worked for " << time << " s" << endl;

//    cout << d.decode("-.-.-...---.---.---...---.---...-.......---...-...---.-.-.---...---") << endl;
    return 0;
}