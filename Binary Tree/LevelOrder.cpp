
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
int height (Node *root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;
    
}

void lo(Node*root , int k){
    
           if(root == NULL){
               return;
           }     
    if(k==1){
        cout<<root->data<<" ";
    }       
    lo(root->left,k-1);
    lo(root->right,k-1);
    }
    void levelOrder(Node * root) {
       if(root == NULL){
        return;
    }
    int h = height(root);
    for(int i = 0 ;i<=h;i++){
        lo(root,i);
        

    }}

