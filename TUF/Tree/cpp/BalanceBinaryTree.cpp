Class Solution{

	int DFS(Node *root){
		if(!root) return 0;

		int lh,rh;

		if(abs(lh-rh)>1) return -1;

		int rh = depthOfTree(root->right);
		int lh = depthOfTree(root->left);

		return 1+max(rh,lh);


	}

	int BalanceBinaryTree(Node *root){
		return DFS(root)!=-1;
	}

};