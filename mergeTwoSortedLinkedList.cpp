#include <stdc++.h> 
using namespace std; 

struct Node{      //defining a merge linked list
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){      //function to print a merge linked list
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *sortedMerge(Node *a,Node *b){         //function to sorted merge two linked list
    if(a==NULL)return b;                     //if anyone LL is NULL return another linked list 
    if(b==NULL)return a;
    Node *head=NULL,*tail=NULL;
    if(a->data<=b->data){
        head=tail=a;a=a->next;
    }
    else{
        head=tail=b;b=b->next;
    }
    while(a!=NULL&&b!=NULL){               //while loop continues until a or b become NULL
        if(a->data<=b->data){
            tail->next=a;tail=a;a=a->next;
        }
        else{
            tail->next=b;tail=b;b=b->next;
        }
    }
    if(a==NULL){tail->next=b;}
    else{
        tail->next=a;
    }
    return head;
}

int main() 
{ 
	Node *a=new Node(10);
	a->next=new Node(20);
	a->next->next=new Node(30);
	Node *b=new Node(5);
	b->next=new Node(35);
	printlist(sortedMerge(a,b));
	return 0;
} 
