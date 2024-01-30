class Solution {
public:
     int recursion(TreeNode* root, int sum){
   // base case
      if(root==NULL) return false;
      
      sum=sum-root->val;
      if(sum==0 && root->left==NULL && root->right==NULL) return true;
      return recursion(root->left,sum) || recursion(root->right,sum);

     }
    bool hasPathSum(TreeNode* root, int targetSum) {
     
      return recursion(root,targetSum);
    }
};