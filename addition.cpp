#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter array size: ";
    cin>>n;

    int A[n];

    for( int i=0; i < n; i++){
        cin>> A[i];
    }

    //bubble sort
    for (int i=0; i<n-1; i++){
        int swapped=0;
        for( int j=0; j<n-1-i ;j++){
            if( A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                swapped=1;
            }
        }
        if( swapped==0){
            break;
        }
    }



    for( int i=0; i < n; i++){
        cout<< A[i]<< " ";
    }

    return 0;
}
