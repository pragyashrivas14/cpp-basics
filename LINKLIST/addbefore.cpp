#include<iostream>
using namespace std ;
struct node{
    int data;
    node*next;
};
node*next,*temp,*ttemp,*p,*first;
//create new node 
void create_Node(int val){
first= new node;
first->data=val;
first->next=NULL;
}
//add node in list after 1st
void Add_Node(int x){
    temp=first;
    while(temp->next=NULL){
        temp=temp->next;
    }
    ttemp=new node ;
    ttemp->data=x;
    ttemp->next=NULL;
    temp=ttemp->next;
}
void display(){
    temp=first;
    while (temp!=NULL)
    {
cout<<temp->data<<" ";
temp=temp->next;
    }  
    cout<<endl;
}
int main(){
    create_Node(10);
    Add_Node(20);
    Add_Node(30);
    Add_Node(40);
    Add_Node(50);
    display();
}