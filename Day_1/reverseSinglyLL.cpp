#include<iostream>
#include<forward_list>
using namespace std;

struct node
{
    int data;
    node *next;
    node():data(0), next(NULL)
    {  }
    node(int x):data(x), next(NULL)
    {     }
};

void printLL(node *head)
{
        node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


// REERSING A LINKED LIST USING THREE POINTER
node* reverseLL(node *head){
    node *prev=NULL,*curr=head,*nex=head->next;
    while(nex!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=nex;
        nex=nex->next;

    }
    curr->next=prev;
    return curr;
}

//REVERSEING LINKED LIST USING RECURSSION - (Method 1) reversing the rest of LL and then reversing the first node

node *reverseLLRec(node *head)
{
    if(head==NULL|| head->next==NULL)   
        return head;

     node *rest_head=reverseLLRec(head->next);
     node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}


//REVERSEING LINKED LIST USING RECURSSION - (Method 1) reversing the rest of LL and then reversing the first node

node *reverseLLutil(node *curr, node *prev)
{
    if(curr==NULL)
        return prev;
    
    node *nex=curr->next;
    prev=curr;
    curr=nex;
    return reverseLLutil(curr,prev);
}

node *reverseLLRec2(node *head)
{
    node *res=reverseLLutil(head,NULL);
    return res;
}

int main(){
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);

    cout<<"Original List: "<<endl;
    printLL(head);

    cout<<endl;

    cout<<"Reversed Linked List is: "<<endl;
    node *new_head=reverseLL(head);
    printLL(new_head);
    cout<<endl;


    cout<<"Reversing Linked list using recusrrion method 1: "<<endl;
    node *new_headRec=reverseLLRec(new_head);
    printLL(new_headRec);
    cout<<endl;

    cout<<"Reversing Linked list using recusrrion method 2: "<<endl;
    node *new_headRec2=reverseLLRec(new_headRec);
    printLL(new_headRec2);
    return 0;
}