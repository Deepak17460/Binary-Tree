	int findHeight(Node* root)
	{
		// Base Condition
		if(root==nullptr) return 0;
		
		// Once left calling
		int left=findHeight(root->left);
		int right=findHeight(root->right);
		int ans=1+max(left,right);
		return ans;
	}
};
