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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int level=0;
        //1. create a queue which stores nodes
        queue<TreeNode* >q;
        //2.insert root node
        if(root)q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int size=q.size();
            while(size--){
                TreeNode* curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            level++;
            if(level%2==0)reverse(temp.begin(),temp.end());
            ans.push_back(temp);
        }
        return ans;
    }
};