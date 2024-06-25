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
    stack<TreeNode*> stk;

   void add_to_stack(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    add_to_stack(root->left);
    stk.push(root);
    add_to_stack(root->right);
}
    TreeNode* bstToGst(TreeNode* root) {
      add_to_stack(root);
      int sum = 0;
   
    while (!stk.empty()) {
       // cout << "Im here " << endl;
        stk.top()->val += sum;
        sum = stk.top()->val;
       // cout << stk.top()->val << "  ";
        stk.pop();
        
    }
        return root ;
    }
};