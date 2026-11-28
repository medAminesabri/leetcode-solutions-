/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int x , int y){
    return x>y?x:y ;
}
int maxDepth(struct TreeNode* root) {
    if(root == NULL){
        return 0 ; 
    }
    return 1+max(maxDepth(root->left),maxDepth(root->right)) ; 
}