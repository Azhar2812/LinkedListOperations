#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE* next;

};
int main(){
    // creating object of node type 
    // static creation 
    NODE A1;
    A1.data=23;
    A1.next=NULL;

    cout<<A1.data<<endl;
    cout<<A1.next<<endl;

}

// By using constructor also we can do it 
// #include<iostream>
// using namespace std;

// class NODE{
//     public:
//     int data;
//     NODE* next;
//     NODE(){
        
//     }
//     NODE(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
//     // creating object of node type 
//     // static creation 
//     NODE A1;
//     NODE A2(28);
//     A1.data=23;
//     A1.next=NULL;

//     cout<<A1.data<<endl;
//     cout<<A1.next<<endl;
//     cout<<A2.data<<endl;
//     cout<<A2.next<<endl;
// }