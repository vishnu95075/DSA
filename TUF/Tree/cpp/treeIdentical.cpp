// Cheak Tree is identical or not


class Solution{

	void CheakTreeIentical(Node *n1, Node *n2){
		if(!n1 || !n2){
			return n1==n2;
		}
		return (n1->data==n2->data) && CheakTreeIentical(n1->left ,n2->left) && CheakTreeIentical(n1->right,n2->right);
	}
} 