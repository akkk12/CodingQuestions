int k ;
#include<iostream>
using namespace std ;
class node{
public:
    int data;
    node(int d){
    data = d;
    next = NULL;
    }
    node *next;
};

void insertAtTail(node*&head,int d){
   node *newnode = new node(d);

   if(head == NULL)
{
    head = newnode;
return; }

node *temp = head ;
while(temp->next!=NULL){
    temp = temp->next;
}
temp->next = newnode;

}




void buildll(node *&head,int N ){

while(N--){
    int data;
    cin>>data;
    insertAtTail(head,data);
}
}



void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<endl;
}

node* reversek(node *&head , int k){

node *curr = head ;
node *nextnode = NULL;
node *prev = NULL;
int c= 0 ;
while(curr!=NULL && c<k){
    nextnode = curr->next ;
    curr->next = prev;
    prev = curr;
    curr = nextnode ;
    c++;
}

if(nextnode!=NULL){
head->next = reversek(nextnode,k);
}

return prev;
}



int main(){
node *head = NULL ;
int N;
cin>>N;
int k ;
cin>>k;
buildll(head,N);

node * newhead =  reversek(head,k);
print(newhead);

return 0 ;
}
