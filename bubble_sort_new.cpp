#include<bits/stdc++.h>

using namespace std;


void bubble_sort(int arr[], int n)
{
    for(int i = n-1;i>=0;i--)
    {
        int did_swap = 0;
        for(int j = 0;j < i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
                did_swap = 1;
            }
        }
        if(did_swap==0)
        {
            break;
        }
    }
    
    for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}

int main()
{
    int arr[]={22,34,31,13,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubble_sort(arr,n);
    return 0;
}