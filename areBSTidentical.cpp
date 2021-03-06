#include<iostream>
using namespace std;

struct Node{

    int data;
    Node* left = NULL;
    Node* right = NULL;
    
    Node(int val){
        data = val;
    }
};


bool isIdentical(Node* root1, Node* root2){

    if(root1 == NULL && root2 == NULL){
        return true;
    }

    else if(root1 == NULL || root2 == NULL){
        return false;
    }

    else{

        bool cond1 = root1->data == root2->data;
        bool cond2 = isIdentical(root1->left, root2->left);
        bool cond3 = isIdentical(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }  

        return false;
    }
}


int main(){

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    if(isIdentical(root,root)){
        cout<<"BSTs are identical"<<"\n";
    }else{
        cout<<"BSTs aren't identical"<<"\n";
    }

    return 0;
}