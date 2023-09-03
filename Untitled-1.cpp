#include <iostream>
#include <cstring>

bool ainb(const char* a, const char* b) {
    return std::strstr(a, b) != nullptr;
}

int main() {
    const char* a = "abrakadabra";
    const char* b = "brakn";
    bool result = ainb(a, b);

    if(result) 
    {
        std::cout<<"Yes";
    } else 
    {
        std::cout<<"No";
    }
}