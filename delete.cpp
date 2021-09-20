#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size);
int deletion(int arr[], int size,int index);
int main(){
     int arr[55] = {4, 2, 1, 5, 6};
     int size = 5, index;
     cout << "Array before Deletion" << endl;
     display(arr, size);
     cout << "Enter the index of number to be Deleted" << endl;
     cin >> index;
     deletion(arr,size,index);
     size -=1;
     cout << "Array After Deletion" << endl;
     display(arr, size);
    
    return 0;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int deletion(int arr[], int size,int index)
{
    for (int i = index; i < size-1; i++)
    {
         arr[i] = arr[i+1];
    }   
    
}