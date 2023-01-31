class Solution {
    void swap(TreeNode* root){
        if(!root){
            return ;
        }

        swap(root->left);
        swap(root->right);

        //swap the child pointer -
        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
    }
}