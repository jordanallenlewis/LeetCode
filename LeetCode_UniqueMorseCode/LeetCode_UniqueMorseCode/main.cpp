#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
    char alpha [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string alphaCode [26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string> newVector;
    string temp = "";
    for(int a = 0; a < words.size(); a++)
    {
        temp = "";
        for(int b = 0; b < words[a].size(); b++)
        {
            for(int c = 0; c < sizeof(alpha); c++)
            {
                if (alpha[c] == words[a][b])
                {

                    temp = temp + alphaCode[c];
                    break;
                }
            }
        }
        newVector.push_back(temp);
    }
    sort(newVector.begin(), newVector.end());
    int uniqueCount = unique(newVector.begin(), newVector.end()) - newVector.begin();
    return uniqueCount;
}

int main(int argc, const char * argv[]) {
    vector<string> input;
    input.push_back("gin");
    input.push_back("zen");
    input.push_back("gig");
    input.push_back("msg");
    int answer = uniqueMorseRepresentations(input);
    cout << answer << endl;
    return 0;
}
