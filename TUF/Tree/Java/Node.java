
class  Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        Node left=null;
        Node right=null;
        this.data = data; 
    }
 void traverse(){
        if(nd==null) return;
        traverse(nd->left);
        System.out.println(nd.data);
        traverse(nd.right);  
    }

    public static void main(String [] args){
        System.out.println("Hello World");
        Node nd  = new Node(34);

    }
}