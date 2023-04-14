class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(checkBalanceTree(root)!=-1){
            return true;
        }
        else{
            return false;
        }
    }
    int checkBalanceTree(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int lh=checkBalanceTree(root->left);
        if(lh==-1){
            return -1;
        }
        int rh=checkBalanceTree(root->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lh-rh)>1){
            return -1;
        }
        return 1+max(lh,rh);
    }
};
