#include <iostream>
#include <vector>
#include <set>
using namespace std;

void  countUniqueCharacters(vector<string> &words) {
    set<char> uniqueChars;
    for (string word : words) {
        for (char c : word) {
            uniqueChars.insert(c);
        }
    }
    cout<<"N : "<<words.size()<<endl;
    cout<<"K : "<< uniqueChars.size();
}

int main() {
    vector<string> words = {"ba", "abcd", "abca", "cab","cad"};
   countUniqueCharacters(words);
   
    return 0;
}
