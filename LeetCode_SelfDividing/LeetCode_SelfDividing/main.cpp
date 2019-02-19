
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;


vector<int> selfDividingNumbers(int left, int right) {
    vector<int> answer;
    int currentNumber = left;
    while(currentNumber <= right)
    {
        string stringVers = to_string(currentNumber);
        bool isDivis = true;
        for(int i = 0; i < stringVers.length(); i++)
        {
            int digit = stringVers[i] - '0';
            if(digit == 0)
            {
                isDivis = false;
                break;
            }
            else if (currentNumber % digit == 0)
            {
                
            }
            else
            {
                isDivis = false;
                break;
            }
        }
        if(isDivis == true)
        {
            answer.push_back(currentNumber);
        }
        currentNumber++;
    }
    return answer;
}

int main(int argc, const char * argv[]) {
    vector<char> input;
    vector<int> answer = selfDividingNumbers(1, 22);
    for(int i = 0; i< answer.size(); i++)
    {
        cout << " ";
        cout << answer[i];
    }
    cout << "" << endl;
    return 0;
}
