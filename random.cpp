#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

unsigned int hash3(unsigned int h1, unsigned int h2, unsigned int h3)
{
    return (((h1 * 2654435789U) + h2) * 2654435789U) ^ h3 | h2 ^ h1 & h3 + int(pow(h2, 2));
}

int main()
{
    for (int i = 0; i < 200; i++) {
        srand(hash3(time(NULL),i,i));
        cout << rand() % 20 << ",";
    }

    return 0;
}
