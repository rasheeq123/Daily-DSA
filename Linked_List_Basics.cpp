#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* ConvertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        // mover = temp;
        mover = mover->next;
    }
    return head;
}
void LLTraversal(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int LengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp ){
        count++;
        temp = temp->next;
    }
    return count;
}
string SearchInLL(Node* head, int val){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == val) return "Present";
        temp = temp->next;
    }
    return "Not Present";
}
int main() {
    int val;
    vector<int> arr = {2,3,5,4,7,5};
    Node* head = ConvertArr2LL(arr);
    cout<<endl;
    cout<<"Head of the List/array is: "<<head->data<<endl;
    cout<<"Traversal of the List is: ";
    LLTraversal(head);
    cout<<endl;
    cout<<"Length is: "<<LengthOfLL(head)<<endl;
    cout<<"Enter the value to search: ";
    cin>>val;
    cout<<"Searching for 5: "<<SearchInLL(head, 5)<<endl;
}