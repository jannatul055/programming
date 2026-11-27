#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        s.push(x);
    }
     
    s.push(7);
    s.push(8);
    cout<<"Top element is: "<<s.top()<<endl;
    s.pop();
     cout<<"Top element is: "<<s.top()<<endl;
     s.pop();

     cout<<"Size of the stack is : "<<s.size()<<endl;

     while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
     }
     return 0;
}