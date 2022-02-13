#include <iostream>
using namespace std;

int main()
{
    int size,value,a;
    int count=0;
    int arr[50];
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    cout<<"Enter array elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are following :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"enter array elemnt to found"<<endl;
    cin>>value;
    for (int i = 0; i < size; i++)
    {
        // arr[i]=0;
        if (value==arr[i])
        {
            cout<<"Data element found at :"<<i<<endl;
            //break;
        }
        else
        {
            cout<<"Array index is not found"<<endl;
        }
        //or we can use below code also for else part
        // if (count<0)
        // {
        //     cout<<"Error!!!";
        // }
        
       // count++;
        
    }
    
    
    return 0;
}