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
}

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
int main(){
    
   

return 0;
}