#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstring>

using namespace std;

std::string toHexString(double value)
{
    uint64_t intBits;
    std::memcpy(&intBits, &value, sizeof(double));

    std::ostringstream oss;
    oss << "double: " << value << " -> Hex: 0x"
        << std::hex << std::uppercase << std::setfill('0') << std::setw(16)
        << intBits;

    return oss.str();
}

int main(int argc, char const *argv[])
{
    double a = 1.0;
    cout << toHexString(a) << endl;
    return 0;
}
