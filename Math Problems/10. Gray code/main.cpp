#include <iostream>
#include <bitset>
#include <vector>

unsigned int binaryToGray(unsigned int num) {
    return num ^ (num >> 1);
}

unsigned int grayToBinary(unsigned int gray) {
    unsigned int binary = 0;
    for (; gray; gray = gray >> 1) {
        binary ^= gray;
    }
    return binary;
}

int main() {
    std::cout << "Decimal\tBinary\tGray Code\tDecoded Gray" << std::endl;
    for (unsigned int i = 0; i < 32; ++i) {
        std::bitset<5> binary(i);

        unsigned int gray = binaryToGray(i);
        std::bitset<5> grayCode(gray);

        unsigned int decodedGray = grayToBinary(gray);
        std::bitset<5> decodedBinary(decodedGray);

        std::cout << i << "\t\t" << binary << "\t" << grayCode << "\t\t" << decodedBinary << std::endl;
    }
    return 0;
}