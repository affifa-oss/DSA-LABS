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
n1->data=100;  
n2->data=200;  
n3->data=300;  
n4->data=400;  
n1->next=n2;  
n2->next=n3;  
n3->next=n4;  
n4->next=n1;  
n1->prev=n4;  
n2->prev=n1;  
n3->prev=n2;  
n4->prev=n3;  
node *head=n1;  
cout<<"circular list is:"<<endl;  
node *k;  
k=head;  
do{  
cout<<k->data<<endl;  
k=k->next;  
}  
while(k!=head);  
cout<<endl;  
//insertion in mid  
int insertion;  
cout<<"Against which value u want to insert"<<endl;  
cin>>insertion;  
node *ptr;  
ptr=head;  
while(ptr->data!=insertion){  
ptr=ptr->next;  
}  
node *nn3=new node;  
nn3->data=500;  
nn3->next=ptr->next;  
nn3->prev=ptr;  
ptr->next=nn3;  
ptr->next->prev=nn3;  
node *j;  
j=head;  
cout<<"Insertion at middle: "<<endl;  
do{  
cout<<j->data<<endl;  
j=j->next;  
}  
while(j!=head);  
cout<<endl; 
}
