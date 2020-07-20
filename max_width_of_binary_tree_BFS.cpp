/*
Maximum Width of Binary Tree

Solution
Given a binary tree, write a function to get the maximum width of the given tree. The width of a tree is the maximum width among all levels. The binary tree has the same structure as a full binary tree, but some nodes are null.

The width of one level is defined as the length between the end-nodes (the leftmost and right most non-null nodes in the level, where the null nodes between the end-nodes are also counted into the length calculation.

Example 1:

Input: 

           1
         /   \
        3     2
       / \     \  
      5   3     9 

Output: 4
Explanation: The maximum width existing in the third level with the length 4 (5,3,null,9).
*/
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
//BFS based solution,also storing the index of all nodes in the queue to calculate the width 
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int result = 1;
        queue<pair<TreeNode*, int>> Q;
        Q.push({root, 0});
        while(!Q.empty()){
            int count = Q.size();
            int start = Q.front().second;
            int end = Q.back().second;
            result = max(result, end-start+1);
            for(int i = 0; i < count; ++i){
                pair<TreeNode*, int> p = Q.front();
                int idx = p.second - start; //to fix integer overflow
                Q.pop();
                if(p.first->left) Q.push({p.first->left, 2*idx+1});
                if(p.first->right) Q.push({p.first->right, 2*idx+2});
            }
            
        }
        return result;
       
}};
