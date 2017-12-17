/*************************************************************************
	> File Name: printListHeadToTail.cpp
	> Author: 
	> Mail: 
	> Created Time: 六 12/16 10:41:22 2017
 ************************************************************************/
#include "leetCode.h"
using namespace std;

vector<int> printListFromTailToHead(ListNode *head)
{
	if (head == NULL)
	{
		return std::vector<int>();
	}
	std::vector<int> res;
	while(head)
	{
		res.push_back(head->val);
		head = head->next; 
	}
	reverse(res.begin(),res.end());
	return res;
}