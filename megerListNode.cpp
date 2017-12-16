/*************************************************************************
> File Name: megerListNode.cpp
> Author: 
> Mail: 
> Created Time: Thu 14 Dec 2017 09:29:12 PM PST
************************************************************************/

#include<iostream>
#include"leetCode.h"
using namespace std;



 ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
 {
     if(!pHead1)
     return pHead2;
     else
     if(!pHead2)
     return pHead1;

     ListNode *current = new ListNode(0);
     while(pHead1 && pHead2)
     {
       if(pHead1->val > pHead2->val)
         {
             current->next = pHead2;
             pHead2 = pHead2->next;
         }
         else{
             current->next = pHead1;
             pHead1 = pHead1->next;
         }
         current  = current->next;
     }

     if(pHead1)
        current->next = pHead1;
     else if(pHead2)
       current->next = pHead2;


     return current;



 }
