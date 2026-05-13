#include <iostream>
using namespace std;

class Node{
    public:
    int data;

    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){

    Node* Head1 = new Node(1);
    Node* sec = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    Head1 -> next = sec;
    sec -> next = third;    
    third -> next = fifth;
    fifth -> next = fourth;
    fourth -> next = NULL;

    Node* temp = Head1;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return 0; 


}