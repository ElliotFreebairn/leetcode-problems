#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution
{
public:
int compress(vector<char>& chars) {
        vector<char> compressedChars;
        int groupLength = 1;

        if(chars.size() == 1) {
            return 1;
        }

        for (int i = 0; i < chars.size() - 1; i++) {
            bool compress = false;
            if (chars[i] == chars[i + 1]) {
                groupLength++;

                if (i + 1 == chars.size() - 1)
                    compress = true;
            } 
            if (compress || chars[i] != chars[i + 1]) {
                compressedChars.push_back(chars[i]);
                if (groupLength != 1) {
                    string str = to_string(groupLength);
                    for (int i = 0; i < str.length(); i++) {
                        compressedChars.push_back((char)str[i]);
                    }
                }

                if (i + 1 == chars.size() - 1 && !compress) {
                    compressedChars.push_back(chars[i + 1]);
                }
                groupLength = 1;
            }
        }

        chars = compressedChars;

        return compressedChars.size();
       
    }
};

int main() 
{

}
