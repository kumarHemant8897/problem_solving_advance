
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;

        if(root == NULL) {
            return -1;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int n = q.size();

            for(int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                ans.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }

        sort(ans.begin(), ans.end());

        return ans[k-1];
    }
};
