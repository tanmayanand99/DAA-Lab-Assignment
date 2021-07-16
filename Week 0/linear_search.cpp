#include<iostream>
using namespace std;
int main()
{
    int t,key,n,c=1;
    cout << "Enter the number of test cases you want to enter" << endl;
    cin >> t;
    while(t--)
    {
        cout << "Enter the number of elements you want to enter in the array" << endl;
        cin >> n;
        int *a=(int *)malloc(sizeof(int)*n);
        cout << "Enter the elements in the array" << endl;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        cout << "Enter the element which you want to search in the array" << endl;
        cin >> key;
        for(int i=0;i<n;i++)
        {
            if(key==a[i])
            {
                cout << "Test Case #" << c << " : Element Found" << endl;
                break;
            }
        }
         
    }
}