/*************************************************************************
> File Name: minNumberInRotateArray.cpp
> Author: 
> Mail: 
> Created Time: Fri 15 Dec 2017 12:00:38 AM PST
************************************************************************/
#include<iostream>
#include"leetCode.h"
using namespace std;
int minNumberInRotateArray(vector<int> rotateArray)
{
    if(rotateArray.empty())
        return 0;
    int high = rotateArray.size() -1;
    int left = 0;
    int mid = -1;
    while(left <high)
    {
        if(high - left == 1)
        {
            mid = high;
            break;
        }
        mid = left + (high - left)/2;
        if(rotateArray[mid] >= rotateArray[left])
        {
            left = mid;
        }
        if(rotateArray[mid] <= rotateArray[high] )
        {
             high =mid;
        }
    }
    return rotateArray[mid];
}
