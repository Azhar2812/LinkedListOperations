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

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    NODE *HEAD;
    HEAD = NULL;
    for (int i = 0; i < 5; i++)
    {
        //if the linkedlist was not there ,then this logic works
        if (HEAD == NULL)
        {
            HEAD = new NODE(arr[i]);
        }
        //already existing linkedlist then ,this logic works 
        else
        {
            NODE *temp;
            temp = new NODE(arr[i]);
            temp->next = HEAD;
            HEAD = temp;
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

    int x;
    cin>>x;
    int value;
    cout<<"Enter the value :"<<endl;
    cin>>value;

  
    NODE *temp1;
    temp1=HEAD;
    x--;
    while (x--)
    {
        temp1 = temp1->next;
    }

    NODE * temp2 = new NODE(value);
    temp2->next = temp1->next;
    temp1->next= temp2;


    //displaying the linkedlist 
    NODE *temp3;
    temp3=HEAD;
    while (temp3)
    {
        //printng the data
        cout<<temp3->data<<endl;
        // updating the temp 
        temp3 = temp3->next;
    }
    
}
