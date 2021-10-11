// The flag of the Netherlands consists of three colors: white, red, and blue. The task is to randomly arrange balls of white, red, and blue such that balls of the same color are placed together.

// Task:
// the task is to sort arrays of 0, 1, and 2 in linear time without any extra space.

// Approach:
// Three pointers are used: low, mid, high. . Low and mid pointers point at start and high pointer points at the end of the given array.
//Cases:
//1. if array [mid ] = 0, then swap array [ mid ] with array [ low] and increment both pointers once. 
//2 if array [mid ] = 1, then no swapping is required, just increment mid pointer once. 
//3. if array [mid ] = 2, then swap array [ mid ] with array [high ] and decrement the high pointer once.

// Code:
// C++ program to sort an array  
#include<bits/stdc++.h>  
using namespace std;  

// Function to sort the input array, 
// the array is assumed  
// to have values in {0, 1, 2}  
void DNFS(int arr[], int arr_size)  
{  
    int low = 0;  
    int high = arr_size - 1;  
    int mid = 0;  
      
    // Iterate till all the elements 
    // are sorted  
    while (mid <= high)  
    {  
        switch (arr[mid])  
        {  
              
            // mid is 0  
        case 0:  
            swap(arr[low++], arr[mid++]);  
            break;  
              
            // mid is 1 .  
        case 1:  
            mid++;  
            break;  
              
            // mid is 2  
        case 2:  
            swap(arr[mid], arr[high--]);  
            break;  
        }  
    }  
}  
  
  
  
// Function to print array arr[]  
void printArray(int arr[], int arr_size)  
{  
    // Iterate and print every element  
    for (int i = 0; i < arr_size; i++)  
        cout << arr[i] << " ";  
  
}  
  
// Driver Code  
int main()  
{  
    int arr[];
    int n;
      for(i=0;i<n;i++){
        cin<<arr[i];
      }
    cout << "Array before running the algorithm: ";  
      
    printArray(arr, n);   
    
    DNFS(arr, n);  
  
    cout << "\nArray after DNFS algorithm: ";  
      
    printArray(arr, n);  
  
    return 0;  
}  
