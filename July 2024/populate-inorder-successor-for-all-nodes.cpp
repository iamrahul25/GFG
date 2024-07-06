//Link: https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1

class Solution {
  public:
    vector<pair<int, Node*>> all;
    void populateNext(Node *root) {
        helper(root);
        for (int i = 0; i < all.size(); ++i) {
            if (i == all.size() - 1) {
                all[i].second->next = nullptr;
            } else {
                all[i].second->next = all[i + 1].second;
            }
        }
    }

    void helper(Node* root) {
        if (root == nullptr) {
            return;
        }
        helper(root->left);
        all.push_back({root->data, root});
        helper(root->right);
    }
};
