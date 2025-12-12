#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {5,10,15,20,25,30,35};
    int n = 7;
    arr[0]= 10;
    for(int i=0; i<n; i++)
    {
       arr[i] = arr[i+1];
    }
        n--;

    for(int i= 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
