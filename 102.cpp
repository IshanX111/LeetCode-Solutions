class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int> > res;
        if(root==NULL){
         return res;
        }
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            vector<int>v;
            int si=q.size();
            for(int i=0;i<si;i++){
                TreeNode * node;
                node=q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                v.push_back(node->val);
            }
            res.push_back(v);
        }
        return res;
    }
};
