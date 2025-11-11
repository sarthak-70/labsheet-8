#include <iostream>
#include <cstring>
using namespace std;

void copyString(char dest[], const char src[]) {
    strcpy(dest, src);
}

int main() {
    char src[50], dest[50];
    cout << "Enter a string: ";
    cin.getline(src, 50);
    copyString(dest, src);
    cout << "Copied string: " << dest;
    return 0;
}
