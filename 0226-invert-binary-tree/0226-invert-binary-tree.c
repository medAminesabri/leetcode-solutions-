/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(root ==NULL){
        return root ;
    }
    struct TreeNode* q  ; 
    if(root->left != NULL || root->right != NULL){
        q = root->right ; 
        root->right = root->left ; 
        root->left = q ; 
    }
    root->left = invertTree(root->left) ; 
    root->right = invertTree(root->right) ; 
    return root ; 
}