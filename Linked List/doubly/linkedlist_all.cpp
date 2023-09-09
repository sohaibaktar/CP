#include<bits/stdc++.h>
using namespace std;

#define ll long long
// Coded by Sohaib Aktar
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this-> data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this-> data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* &head){
    //point head to temp
    Node* temp = head;
    //jabtaj temp null nhi ho rhi temp ko barane lago
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;  
    }
    
}
int length(Node* &head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    return len;
}
void insertAtHEad(Node* &head, Node* &tail, int data){

     if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
     }
     else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
     }
}
void insertAtTail(Node* &head, Node* &tail, int data){
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        else{
            Node* newNode = new Node(data);
            tail->next = newNode;
            newNode ->prev = tail;
            tail = newNode;
        }

}
void insertatPosition(Node* &head,Node* &tail,int position, int data){
    
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        //insert at first
        if(position==1){
            insertAtHEad(head,tail,data);
            return;
        }
        int len = length(head);
        //insert at last
        if(position>len){
            insertAtTail(head,tail,data);
            return;
        }
        //insert at middle
        //create
        Node* newNode = new Node(data);
        int i=1;
        Node* prevNode = head;
        while(i<position-1){
            prevNode = prevNode ->next; 
            i++;
        }
        Node* curr = prevNode->next;

        //connection
        prevNode->next = newNode;
        newNode->prev = prevNode;

        newNode->next = curr;
        curr->prev = newNode; 


    }

}

// void deleteNode(Node* &head,Node8 &tail, int data){

// }
int main(){
    
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* head = first;
    Node* tail= third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev=second;

    print(head);
    cout << endl;
    //insert
    insertAtHEad(head,tail,101);
    insertAtTail(head,tail,205);
     print(head);cout << endl;
    insertatPosition(head,tail,20,500);

     print(head);
     cout << endl;
    cout << length(first);

    
   

return 0;
}