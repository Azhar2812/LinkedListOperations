#include <iostream>
using namespace std;
// Inserting at the beginnig
class NODE
{
public:
    int data;
    NODE *next;

    NODE(int value)
    {
        data = value;
        next = NULL;
    }
};

// int main()
// {

//     int arr[] = {2,4,6,8};
//     NODE *HEAD;
//     HEAD = NULL;
//     for (int i = 0; i < 4; i++)
//     {
//         //if the linkedlist was not there ,then this logic works
//         if (HEAD == NULL)
//         {
//             HEAD = new NODE(arr[i]);
//         }
//         //already existing linkedlist then ,this logic works 
//         else
//         {
//             NODE *tail=HEAD;
//             while (tail->next!=NULL)
//             {
//                 tail = tail->next;
//             }
//             NODE *temp = new NODE(arr[i]);
//             tail->next=temp;
         
            
//         }
//     }
int main()
{

    int arr[] = {2,4,6,8};
    NODE *HEAD,*tail;
    tail = HEAD = NULL;
    for (int i = 0; i < 4; i++)
    {
        //if the linkedlist was not there ,then this logic works
        if (HEAD == NULL)
        {
            HEAD = new NODE(arr[i]);
            tail = HEAD;
        }
        //already existing linkedlist then ,this logic works 
        else
        {
            tail->next = new NODE(arr[i]);
            tail = tail->next;
         
            
        }
    }
    
    

    //displaying the linkedlist 
    NODE *temp;
    temp=HEAD;
    while (temp)
    {
        //printng the data
        cout<<temp->data<<endl;
        // updating the temp 
        temp = temp->next;
    }
    
}
