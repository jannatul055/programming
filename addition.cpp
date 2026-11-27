#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<< "Enter Array size: ";
    cin >> n;

    int A[n];

    for (int i=0; i<n ;i++)
    {
        cin>> A[i];
    }

    // insortion sort


    for (int i=1; i<n ; i++)
    {
        temp= A[i];
        int j=i-1;
        while( j>=0 && A[j]>temp){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }

    for (int i=0; i<n ;i++)
    {
        cout<< A[i]<< " ";
    }

    return 0;
}
