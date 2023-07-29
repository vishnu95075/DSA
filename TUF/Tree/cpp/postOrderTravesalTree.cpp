class Solution{
	vector<int> postOrderTravesalTree(Node *root){
		vector<int> ans;

		if(!root) return ans;

		stack<Node *> st,s;
		st.push(root);

		while(st.empty()){
			Node *temp = st.top();
			st.pop();

			s.push(temp);
			if(temp->right){
				st.push(temp->right);
			}

			if(temp->left){
				st.push(temp->left);
			}
		}

		while(!temp.empty()){
			ans.push_back(temp.top()->data);
			temp.pop();
		}

		return ans;

	}
};