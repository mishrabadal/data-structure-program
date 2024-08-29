#include <iostream>
using namespace std;
int main()
{
    char str[] = "badalkumar";
    string vowel = "";
    string consonant = "";
    int size = sizeof(str) - 2;
    for (int i = 0; i <= size; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel += str[i];
        }
        else
        {
            consonant += str[i];
        }
    }
    cout << "vowels are : " << vowel << endl;
    ;
    cout << "vowels are : " << consonant << endl;
    return 0;
}