#include<iostream>
using namespace std;
// Dynamic allocation of linkedlist 
class NODE{
    public:
    int data;
    NODE* next;

    NODE(int value){
        data=value;
        next=NULL;
    }

};

int main(){

    NODE* HEAD;
    HEAD = new NODE(12);

    cout<<HEAD->data<<endl;;
    cout<<HEAD->next;

}

