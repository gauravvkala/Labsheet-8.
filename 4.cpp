#include <iostream>
#include <cstring>
using namespace std;

void copyString(char dest[], char source[]) {
    strcpy(dest, source);
}

int main() {
    char str1[100], str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    copyString(str2, str1);

    cout << "Copied string: " << str2;
    return 0;
}
