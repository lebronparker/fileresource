/*************************************************************************
> File Name: findMinKNum.cpp
> Author: 
> Mail: 
> Created Time: 日 12/17 13:19:22 2017
************************************************************************/


#include"leetCode.h"

using namespace std;


int GetIndex(vector<int> &input,int left,int right)
{
    
    int key = input[0];
    int left =0 ,right = len -1;
    while(left < right)
    {
        while(left<right && input[right] >= key )
            --right;
        input[left]=input[right];
        while(left <right && key >= input[left])
            ++left;
        input[right] = input[left];
    }
    input[left] = key;
    return left;
}

vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
    int len = input.size();
    int index = 0;
    if(len < k)
        return std::vector<int>();
    if(len == k)
        return input;
   while(k != index)
    {

    }
    return std::vector<int>(input.begin(),input.begin() +k);
}


