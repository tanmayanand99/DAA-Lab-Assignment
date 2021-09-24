#include<iostream>
#include<cmath>
using namespace std;
int jumpsearch(int a[],int n,int key)
{
    int size,prev=0;
    int k = sqrt(n);
    size=k;
    while(a[min(size,n)-1]<key)
    {
        prev = size;
        size=size+k;
        if(prev>=n)
            return -1;
    }
    while(a[prev]<key)
    {
        prev++;
        if(prev==min(size,n))
            return -1;
    }
    if(a[prev]==key)
        return prev;
    
    return -1;
    
}
int main()
{
    int n,key;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int *a = new int(n);
    cout << "Enter the elements of the array" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter the number which you want to check in the array" << endl;
    cin >> key;

    
    cout << jumpsearch(a,n,key);
}