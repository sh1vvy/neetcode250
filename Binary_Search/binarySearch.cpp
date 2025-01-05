#include<iostream>
using namespace std;

int binSearch(int arr[], int size, int target)
{
    // sorted array is required
    int start = 0;
    int end = size;
    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // if nothing found
    return -1;
}

int main()
{
    int arr[] = {1,2,3,5,6,7,0,9,63};
    int size = 8;
    int target = 9;

    int ans = binSearch(arr,size,target);

    if(ans != -1)
    {
        cout<<"Found at: "<<ans;
    }
    else
    {
        cout<<"Not found! "<<ans;
    }
}