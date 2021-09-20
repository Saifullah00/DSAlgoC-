#include<bits/stdc++.h>
using namespace std;

void transverse(int arr[], int size);
int LinearSearch(int arr[], int size, int key);
int BinarySearch(int arr[], int size, int key);
int main(){
    int arr[]={12,14,31,55,75}; //sorted arrays
    int size = 5;
    cout<<"Array are"<<endl;
    transverse(arr, size);
    
    int key;
    cout<<"Enter the Element to search "<<endl;
    cin>>key;

    //LinearSearch(arr,size,key);
    BinarySearch(arr,size,key); 

    return 0;
}


void transverse(int arr[], int size)
{
    for(int i =0; i< size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int LinearSearch(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if ( arr[i]== key)
            cout<<"The element is in index "<<i;
    }
    return -1;
}


int BinarySearch(int arr[], int size, int key) 
{   
    int low = 0, high = size-1;
    while(low<=high)
    {
        int mid = (low+high)/2; 
        if(key==arr[mid])
        {   
            cout<<"The element is in the index\n"<<mid;
        }
        if(key<arr[mid])
        {
            high =  mid - 1;
        }else
            low = mid + 1;
    }
    return -1;
}