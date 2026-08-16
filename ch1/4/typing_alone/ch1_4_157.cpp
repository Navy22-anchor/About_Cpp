#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words;
    
    for (string word; cin>>word;) words.push_back(word);
    cout << "단어 개수 : " << words.size() << "\n";

    sort(words.begin(),words.end());

    for (int i = 0; i<words.size(); ++i)
        if (i==0 || words[i-1] != words[i]) // || 는 or  bool 연산자임.
            cout << words[i] << "\n";
}