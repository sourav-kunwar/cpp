#include<iostream>
#include<vector>

using namespace std;

int binarysearch(vector<int>& arr,int key)
{
    int low = 0;
    int high = arr.size()-1;
    while(low<=high)
    {
        int mid = low +(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}

int main()
{
    int n;
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter the number between 1 to 10:";
    cin>>n;
    int pos = binarysearch(arr,n);
    if(pos==-1){
        cout<<"not found in these array";
    }
    else{
        cout<<"\nThe position of: "<<n<<" is at: "<<pos;
    }
    return 0;
}
