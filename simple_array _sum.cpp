#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin>>*(a+i);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(a+i);
    }
    cout<<sum;
    delete[] a;
    return 0;
}
