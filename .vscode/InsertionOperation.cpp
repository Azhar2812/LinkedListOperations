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
    
}
