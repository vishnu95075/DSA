class Solution{

	int depthOfTree(Node *root){
		if(!root) return 0;

		int rh = depthOfTree(root->right);
		int lh = depthOfTree(root->left);

		return 1+max(rh,lh);
	}

};