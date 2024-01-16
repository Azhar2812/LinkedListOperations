#include<iostream>
using namespace std;

class NODE{
public:
int data;
NODE* next;

NODE(int value){
    data=value;
    next=NULL;
}

};
NODE*  creatLinkedList(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    NODE* temp;
    temp = new NODE(arr[index]);
    temp->next=creatLinkedList(arr,index+1,size);
    return temp;
}
int main(){
    int arr[]={1,2,3,4};
    NODE* Head ;
    int index=0,size = 4;
    Head=creatLinkedList(arr,index,size);


    NODE* temp;
    temp = Head;
    while (temp)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}