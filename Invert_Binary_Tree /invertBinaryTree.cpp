

# include <iostream>
# include <queue>
# include <algorithm>

// Definition for a binary tree node.
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
        TreeNode* invertTree(TreeNode* root); 
        TreeNode* invertTree1(TreeNode* root); 
};
    // first code
// TreeNode* Solution::invertTree1(TreeNode* root) {
//     if ( root == nullptr ) return nullptr;
//     std::queue< TreeNode *> q;
//     q.push( root );
//     int size;
//     while ( !q.empty() ) {
//         size = q.size();
//         for ( int i = 0; i < size; i++ ) {
//             TreeNode* tmp = q.front();
//             q.pop();
//             if ( tmp->left != nullptr && tmp->right != nullptr ) {
//                 TreeNode* tmp1 = tmp->left;
//                 tmp->left = tmp->right;
//                 tmp->right = tmp1;
//             }
//             else if ( tmp->left != nullptr && tmp->right == nullptr ) {
//                 tmp->right = tmp->left;
//                 tmp->left = nullptr;
//             }
//             else if ( tmp->right != nullptr && tmp->left == nullptr ) {
//                 tmp->left = tmp->right;
//                 tmp->right = nullptr;
//             }
//             if ( tmp->left != nullptr ) q.push( tmp->left );
//             if ( tmp->right != nullptr ) q.push( tmp->right );
//         }
//     }
//     return root;
// }
    //Optimized code 
TreeNode* Solution::invertTree1(TreeNode* root) {
    if ( root == nullptr ) return nullptr;
    std::queue< TreeNode *> q;
    q.push( root );
    int size;
    while ( !q.empty() ) {
        size = q.size();
        for ( int i = 0; i < size; i++ ) {
            TreeNode* tmp = q.front();
            q.pop();
            TreeNode* tmp1 = tmp->left;
            tmp->left = tmp->right;
            tmp->right = tmp1;
            if ( tmp->left != nullptr ) q.push( tmp->left );
            if ( tmp->right != nullptr ) q.push( tmp->right );
        }
    }
    return root;
}

    // Use std::swap to invert the left and right children of the node
TreeNode* Solution::invertTree(TreeNode* root) {
    if ( root == nullptr ) return nullptr;
    std::queue< TreeNode *> q;
    q.push( root );
    int size;
    while ( !q.empty() ) {
        size = q.size();
        for ( int i = 0; i < size; i++ ) {
            TreeNode* tmp = q.front();
            q.pop();
            std::swap( tmp->left , tmp->right );
            if ( tmp->left != nullptr ) q.push( tmp->left );
            if ( tmp->right != nullptr ) q.push( tmp->right );
        }
    }
    return root;
}

