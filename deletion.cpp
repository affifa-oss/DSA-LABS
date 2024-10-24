#include<iostream> 
using namespace std; 
int main(){ 
struct node{ 
int data; 
node *next; 
node *prev; 
}; 
node *n1=new node(); 
 node *n2=new node(); 
 node *n3=new node(); 
 node *n4=new node(); 
 node *n5=new node(); 
 node *n6=new node(); 
 n1->data=100; 
 n2->data=200; 
 n3->data=300; 
 n4->data=400; 
 n5->data=500; 
 n6->data=600; 
 n1->prev=NULL; 
 n2->prev=n1; 
 n3->prev=n2; 
 n4->prev=n3; 
 n1->next=n2; 
 n2->next=n3; 
 n3->next=n4; 
 n4->next=n5; 
    n5->next=n6; 
 n6->next=NULL; 
 node *head; 
 head=n1; 
 cout<<"        *Traverse* "<<endl; 
node *curr=head; 
while(curr!=NULL){ 
cout<<curr->data<<endl; 
curr=curr->next; 
} 
cout<<endl; 
//Deletion at start 
head=n2; 
delete(n1); 
cout<<"After deletion at start: "<<endl; 
node *current=head; 
while(current!=NULL){ 
cout<<current->data<<" "<<endl; 
current=current->next; 
} 
cout<<endl<<endl; 
//Deletion at end 
node*pre=NULL; 
node *n=head; 
while(n->next!=NULL){ 
pre=n; 
n=n->next; 
} 
pre->next=nullptr; 
delete(n); 
cout<<"After Deletion at end: "<<endl; 
node *temp=head; 
while(temp!=NULL){ 
cout<<temp->data<<" "<<endl; 
temp=temp->next; 
} 
return 0; 
}