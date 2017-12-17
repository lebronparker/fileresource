/*************************************************************************
> File Name: hasSubTree.cpp
> Author: 
> Mail: 
> Created Time: 日 12/17 21:02:27 2017
************************************************************************/

#include"leetCode.h"


bool isSameTree(TreeNode *p1,TreeNode *p2)
{
    if(p1 != p2)
    {
        return false;
    }
    else if(!p1 && !p2)
    {
        return true;
    }
    else
    {
        if(p1->val == p2->val)
            return isSameTree(p1->left,p2->left) && isSameTree(p2->left,p2->right);
    }
    return false;

}

bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
   if(pRoot1 == NULL && pRoot2 == NULL)
        return true;
    else if(!pRoot1 || !pRoot2)
    {
        return false;
    }
   return isSameTree(pRoot1,pRoot2) || HasSubTree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right ,pRoot2);
}
