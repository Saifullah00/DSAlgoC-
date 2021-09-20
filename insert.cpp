/* Insertion Operation */

#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size);
int insertion(int arr[], int size, int index, int element, int capacity);
int main()
{
    int arr[55] = {4, 2, 1, 5, 6};
    int capacity = 55, size = 5, element, index;
    cout << "Array before insertion" << endl;
    display(arr, size);
    cout << "Enter the element to be inserted" << endl;
    cin >> element;
    cout << "Enter the index to insert the element" << endl;
    cin >> index;
    size += 1;
    insertion(arr, size, index, element, capacity);
    if(size < index)
        cout<<"Index is greater than Size \n";
    else{
        cout << "Array after insertion" << endl;
        display(arr, size);
    }
        
    return 0;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int insertion(int arr[], int size, int index, int element, int capacity)
{
    if(size >= capacity)
        return -1;
    for (int i = size -1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;    
}

