#include<iostream>
using namespace std;
class NODE{

    public:
    int data;
    NODE* next;

    NODE(int value){
        data = value;
        next=NULL;
    }
};
NODE* createLinkedList(int arr[],int index,int size,NODE* prev){

    if(index==size){
        return prev;
    }
    NODE* temp;
    temp = new NODE(arr[index]);
    temp->next=prev;
    createLinkedList(arr,index+1,size,temp);
}
int main(){
    int arr[]={1,2,3,4,5};
    int index=0,size =5;

    NODE * Head;

    Head = createLinkedList(arr,index,size,NULL);

      //displaying the linkedlist 
    NODE *temp;
    temp=Head;
    while (temp)
    {
        //printng the data
        cout<<temp->data<<endl;
        // updating the temp 
        temp = temp->next;
    }

}