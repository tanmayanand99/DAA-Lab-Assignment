#include<iostream>
using namespace std;
int main()
{
    int t,n,key;
    cout << "Enter the number of test cases" << endl;
    cin >> t;
    while(t--)
    {
        cout << "Enter the number on elements you want to enter in the array" << endl;
        cin >> n;
        int *a=(int *)malloc(sizeof(int)*n);
        cout << "Enter the elements of array" << endl;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        cout << "Enter the element which you want to search in the array" << endl;
        cin >> key;
        int mid=0,first=0,last=n,flag=0;
        while(first<=last)
        {
            mid = (first+last)/2;
            if(a[mid]==key)
            {
                flag=1;
                break;
            }
            else if(a[mid]>key)
            {
                last=mid-1;
            }
            else
            {
                first = mid+1;
            }
        }
        if(flag==1)
        {
            cout << "Element Found At : " << mid << endl;
        }
        else
        {
            cout << "Element Not found" << endl;
        }
    }
}