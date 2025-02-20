#include<iostream>
#include<vector>
using namespace std;

void reverse_array(vector<int>& arr)
{
    int n = arr.size();
    vector <int> temp(n);                   //vector size=n
    for(int i = 0;i<n;i++)
    {
        temp[i]=arr[n-i-1];
    }
    for(int i = 0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    
}

int main()
{
    vector <int> arr={1,2,3,4,5};
    reverse_array(arr);

    for(int i:arr)
    {
        cout<<i<<endl;
    }
    return 0;
}