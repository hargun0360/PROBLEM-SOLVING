#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    
    Node(int x){
        data = x;
        left  = right = NULL;
    }
};

int main(){
    int x ;
    cout<<"Enter the root node :";
    cin>>x;
    queue <Node *> q;
    Node *root = new Node(x);
    q.push(root);
    
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        int first;
        cout<<"Enter the left node :" << temp -> data << " ";
        cin>>first;
        if(first != -1){
            temp -> left = new Node(first);
            q.push(temp -> left);
        }
        int second;
        cout<<"Enter the right node :" << temp -> data << " ";
        cin>>second;
        if(second != -1){
            temp -> right = new Node(second);
            q.push(temp -> right);
        }
    }
    
    
}
