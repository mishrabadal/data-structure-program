#include<iostream>
using namespace std;
 class node{
    public:
    int data;
    node *next;
    node(int value){
        data = value;
        next = NULL;
    }

 };

void traverse(node *temp){
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
   
    }

}

void creating_linked_list(){
int arr[] = {1,2,3,4};
node *head;
head = NULL;
node *temp;
for (int i = 0; i < 4; i++)
{
    if(head==NULL){

        head=temp=new node(arr[i]);
   
    }
    else{
        temp->next = new node(arr[i]);
        temp = temp->next;
    }
}

traverse(head);

}

//insert in begining
void i_begin(){
int arr[] = {1,2,3,4};
node *head;
head = NULL;
node *temp;
for (int i = 0; i < 4; i++)
{
   
        temp= new node(arr[i]);
        temp->next = head;
       head =temp;
   
}

traverse(head);

}
int main(){
   i_begin();
    return 0;
}