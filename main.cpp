#include <iostream>
#include<vector>
#include<string>

using namespace std;
vector<string> SplitIntoWords(string s){
    vector<string> words;
    int separator = s.find(' ');
    while(separator > 0){
        words.push_back(s.substr(0, separator));
        s = s.substr(separator + 1);
        separator = s.find(' ');
    }
    words.push_back(s);
    return words;
}
int main()
{
    string s = "C Cpp Java Python";

  vector<string> words = SplitIntoWords(s);
  cout << words.size() << " ";
  for (auto it = begin(words); it != end(words); ++it) {
    if (it != begin(words)) {
      cout << "/";
    }
    cout << *it;
  }
  cout << endl;

  return 0;
}
