#include"leetCode.h"


int MoreThanHalfNum_Solution(vector<int> numbers)
{
    if(numbers.empty())
        return 0;
    int length = numbers.size();
    int time = 0;
    int result = 0;
    for(int i =0;i< length;++i)
    {
        if(time == 0)
        {
            result = numbers[i];
            time++;
        } 
        else if(numbers[i] == result)
            ++time;
        else
            --time;
    }
    
   return result; 
}
