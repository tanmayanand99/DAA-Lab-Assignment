#include<iostream>
using namespace std;
void linearsearch()
{
    static int c=1;
    int n,key,flag=0,comp=1;
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

    int i;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
        else
        {
            comp++;
        }
    }
    if(flag==1)
    {
        cout << "Test Case #" << c << " : Element Found At Index : " << i << endl;
    }
    else
    {
        cout << "Test Case #" << c << " : Element Not Found" << endl;
    }
    cout << "Number of comparisons taken : " << comp << endl;  
    c++;
}
int main()
{
    int t;
    cout << "Enter the number of test cases you want to enter" << endl;
    cin >> t;
    while(t--)
    {
        linearsearch();         
    }
}