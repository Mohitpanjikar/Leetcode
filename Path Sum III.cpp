class Solution {
public:
    void solve(TreeNode* root,int targetSum,int &count,vector<int>path){
        if(root == NULL){
            return ;
        }

        path.push_back(root->val);
        // call for left
        solve(root->left,targetSum,count,path);
        // call for right
        solve(root->right,targetSum,count,path);

        int size = path.size();
        long long sum = 0;
        for(int i=size-1;i>=0;i--){
            sum += path[i];
            if(sum == targetSum){
                count++;
            }
        }
    path.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int count = 0;
        solve(root,targetSum,count,path);
        return count;
    }
};