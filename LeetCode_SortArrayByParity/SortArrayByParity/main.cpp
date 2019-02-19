#include <iostream>
#include <vector>

std::vector<int> sortArrayByParity(std::vector<int>& A) {
    std::vector<int> answer;
    for(int i = 0; i < A.size(); i ++)
    {
        if (A[i] % 2 == 0)
        {
            answer.push_back(A[i]);
        }
    }
    for(int i = 0; i < A.size(); i ++)
    {
        if (A[i] % 2 == 1)
        {
            answer.push_back(A[i]);
        }
    }
    return answer;
}

int main(int argc, const char * argv[]) {
    std::vector<int> input;
    input.push_back(3);
    input.push_back(1);
    input.push_back(2);
    input.push_back(4);
    std::vector<int> answer = sortArrayByParity(input);
    for(int i = 0; i < answer.size(); i++)
    {
        std::cout << answer[i] << std::endl;
    }
    return 0;
}
