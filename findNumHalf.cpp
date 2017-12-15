/*************************************************************************
	> File Name: findNumHalf.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 14 Dec 2017 04:27:09 AM PST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;





int MoreThanHalfNum_Solution(vector<int> numbers) {
        
            
            if(numbers.empty())
                return 0;
            int time = 0,result = 0;
            for(int i=0;i <numbers.size();i++)
    {
                    if(time == 0)
        {
                            ++time;
                            result = numbers[i];
                        
        }
                    else if(result == numbers[i])
        {
                            ++time;
                        
        }
                    else
                        --time;
                
    }
            
            
            
            
            return result;
            
        
}
