#include <iostream>
#include <vector>


using namespace std;
class Solution
{
public:
  string reverseWords(string s) {
        vector<string> words;
        
        // remove leading whitespace
        while (!s.empty() && s[0] == ' ') {
            s.erase(0, 1);
        }

        // remove trailing whitespace
        while (!s.empty() && s[s.length() - 1] == ' ') {
            s.erase(s.length() - 1, 1);
        }

        // remove multiplte whitespaces between words
        for (int i = 1; i < s.length();)
        {
            if (s[i] == ' ' && s[i - 1] == ' ') {
                s.erase(i, 1);
            } else {
                i++;
            }
        }

        // fetch the words from the string
        int wordStart = -1;
        for (int i = 0; i <= s.length(); i++) {
            if (i < s.length() && s[i] != ' ' && wordStart == -1) {
                wordStart = i;
            }

            if ((i == s.length() || s[i] == ' ') && wordStart != -1) {
                words.push_back(s.substr(wordStart, i - wordStart));
                wordStart = -1;
            }
        }

        // reverse the words;
        string reversedResult;
        for (int i = words.size() - 1; i >= 0; i--) {
            reversedResult += words[i];
            if (i > 0) reversedResult += ' ';
        }
        return reversedResult;
    }
};

int main() 
{

}
