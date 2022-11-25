/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool res=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
            if(q==NULL && p==NULL)return true;
            if(q==NULL || p==NULL ||p->val!=q->val)return false;
            
            return isSameTree(q->left,p->left) && isSameTree(q->right,p->right);      
    }
};