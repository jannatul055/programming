#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        q.push(x);
    }
     
    q.push(7);
    q.push(8);
    cout<<"Front element is: "<<q.front()<<endl;
    q.pop();
    cout<<"Front element is: "<<q.front()<<endl;
    q.pop();

    cout<<"Size of the queue is : "<<q.size()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
     }
     return 0;
}