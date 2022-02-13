// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[100];
//     int size,i,j,temp;
//     //REading the size of array
//     cout<<"Enter the size of array"<<endl;
//     cin>>size;//REading size of array
//     cout<<"Enter elements in array"<<endl;
//     for ( i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
//     //sorting of array in Ascending order
//     for ( i = 0; i < size; i++)
//    {
//         for ( j = j+1; j < size; j++)
//         {

//             //if there is smaller elements found on right of the array then swap it
//             if (arr[j]<arr[i])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     //printing the sorted array in ascending order
//     cout<<"Elements of array sorted in Ascendin order: "<<endl;
//     for ( i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int size, i, j, temp;
    // Reading the size of the array
    cout << "Enter size of array: ";
    cin >> size; // Reading elements of array
    cout << "Enter elements in array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // Sorting an array in ascending order
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        { // If there is a smaller element found on right of the array then swap it.
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } // Printing the sorted array in ascending order
    cout << "Elements of array in sorted ascending order:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}