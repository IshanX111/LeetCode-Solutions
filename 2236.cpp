
class Solution {
public:
    bool checkTree(TreeNode* root) {

        int sum=0;
        int sum1=root->left->val;
        int sum2=root->right->val;
        sum=sum1+sum2;
        if(root->val==sum){
            return true;
        }
        else{
            return false;
        }

    }
};
