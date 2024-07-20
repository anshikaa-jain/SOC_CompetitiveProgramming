#include <iostream>
using namespace std;

//  Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    int max_depth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int left_side = max_depth(root->left);
        int right_side = max_depth(root->right);
        return 1 + max(left_side, right_side);
}
};

int main(){
    Solution sol;
    int root[] = {3,9,20,NULL,NULL,15,7};
    int d = sol.max_depth(root);
    cout<<d;
}