1st:-
vector<int> levelOrder(Node *root)
     {
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())

    {
        Node *temp = q.front();

        q.pop();
        if (temp->left != NULL)

            q.push(temp->left);

        if (temp->right != NULL)

            q.push(temp->right);
        ans.push_back(temp->data);

    }
    return ans;
}

2Nd:-
    vector<vector<int> >res;
        if (root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int>cur_vec;
        while(!q.empty()) {
            TreeNode* Curr_Node = q.front();
            q.pop();
            if (Curr_Node==NULL) {
                res.push_back(cur_vec);
                cur_vec.resize(0);
                if (q.size() > 0) {
                    q.push(NULL);
                }
            } else {
                cur_vec.push_back(Curr_Node->val);
                if (Curr_Node->left!=NULL) q.push(Curr_Node->left);
                if (Curr_Node->right!=NULL) q.push(Curr_Node->right);
            }
        }
        return res;
