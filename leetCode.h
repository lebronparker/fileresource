#include<iostream>
#include<algorithm>
#include<vector>

struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
    };
    

     // Definition for binary tree
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
