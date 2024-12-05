#include <iostream>
using namespace std;

class node{
    int data;
    node *left ,*right;
    node(){
        data=-1;
        left=right=NULL;
    }
    node(int e){
        data=e;
        left=right=NULL;
    }
};

class tree{
    node *root;
    int count;
    tree(){
        root=NULL;
        count=0;
    }
    int insert1(int e){
        node *n=new node(e);
        if(!root){
            root=n;
            count++;
            return 0;
        }
        node *temp=root;
        node *prev=NULL;
        while(temp!=NULL){
            prev=temp;
            if(e<temp->data)
            temp=temp->right;
            else
            temp=temp->left;}
            if (e<prev->data)
            prev->left=n;
            else
            prev->right=n;
            count++;
    }
    int insert2(int e)
        node *n=new node(e);
        if(!root){
            root=n;
            count++;
            return 0;
        }
        node *temp=root;

        while(true){
        if(temp->data<e){
            if(!temp->right){
                temp->right=n;
                break;
            }
            else{
                temp=temp->right;
            }
        }    
        else{
            if(!temp->left){
                temp->left=n;
                break;
            }
            else{
                temp=temp->left;
            }
        }
        count++;
        }
        node *search(int e){
            if(!root){
                return NULL;
            }
            node *temp=root;
            while(temp && temp->data!=e){
                if (e<temp->data){
                    temp=temp->left;
                }
                else{
                    temp=temp->right;
                }
                return temp;
            }
        } 
        };