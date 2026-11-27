
class Solution {
public:

    bool check(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;

        if(root->val != subRoot->val) return false;

        bool left = check(root->left, subRoot->left);
        bool right = check(root->right, subRoot->right);

        return left && right;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if(subRoot == NULL) return true;
        if(root == NULL) return false;

        if(check(root, subRoot)) return true;

        bool left = isSubtree(root->left, subRoot);
        bool right = isSubtree(root->right, subRoot);

        return left || right;
    }
};
