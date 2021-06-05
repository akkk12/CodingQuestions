#include<iostream>
using namespace std ;

class node{

public:
	int data;
	node*next;
	node(int n){
		data = n;
		next =NULL;}

};



void insathead(node *&head ,int n ){
if(head == NULL){
	head = new node(n);
	return;
}
node *temp ;
temp = new node(n);
temp->next = head ;
head = temp;


}

void makeCycle(node *head , int pos){
int c = 1 ;
node*temp = head ;
node * startnode;
while(temp->next!=NULL){
    if(c==pos){
        startnode =temp ;
    }
    c++;
    temp = temp->next ;

}
temp->next = startnode;}

void print(node * head )
{
	while(head!=NULL){
		cout<<head->data<<"->";
		head = head ->next;
	}
	cout<<endl;
}


bool detect_cycle(node* head){
	node *slow = head ;
	node *fast = head ;
	while(fast->next!=NULL && fast!=NULL){
		fast = fast ->next ->next ;
		slow = slow->next ;
		if(fast==slow){
			return true ;
        }
	}
return false ;
}

node* remove_cycle(node* head){
	node *slow = head ;
	node *fast = head ;

    do{
    	slow = slow->next ;
    	fast = fast->next->next ;
    }while(slow!=fast);

fast= head ;
while(slow->next!=fast->next){
	slow = slow->next ;
	fast = fast->next;
}

slow->next = NULL;
return head;
}



bool floydCycleRemoval(Node *head)
{

 if(detect_cycle(head)){

    node *slow = head ;
	node *fast = head ;

    do{
    	slow = slow->next ;
    	fast = fast->next->next ;
    }while(slow!=fast);

fast= head ;
while(slow->next!=fast->next){
	slow = slow->next ;
	fast = fast->next;
}

slow->next = NULL;
return head;




 }






}
















int main()
{
	/* code */
node *head  = NULL;
insathead(head , 1);
insathead(head , 2);
insathead(head , 3);
insathead(head , 4);
//if(detect_cycle(head)){
//	cout<<"Cycle!!";
//}
//else {
//	cout<<"Not a Cycle!!";
//}

//print(head);
makeCycle(head,2);
if(detect_cycle(head)){
	cout<<"Cycle!!";
}
else {
	cout<<"Not a Cycle!!";
}
cout<<endl;

remove_cycle(head);
//if(detect_cycle(head)){
//	cout<<"Cycle!!";
//}
//else {
//	cout<<"Not a Cycle!!";
//}
//cout<<endl;
cout<<"After removing cycle:";
print(head);
	return 0;
}
