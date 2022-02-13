#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    int arr[100];
    cout<<"enter size of array :";
    cin>>num;
    cout<<"Enter Array elements"<<endl;
    //input
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    //output
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}