#include <iostream>
#include <cstring>
using namespace std;

int countWords(char str[]) {
    int words = 1;
    int len = strlen(str);

    for(int i = 0; i < len; i++)
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            words++;

    return words;
}

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    cout << "Number of words = " << countWords(str);
    return 0;
}
