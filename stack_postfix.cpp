#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    string s;
    cin>>s;
    int sum=0, j ;
    for(int i=0 ; i<s.size() ; i++){
       if(s[i]>='0' && s[i]<='9'){
        int s1=s[i]-'0';
        st.push(s1);
       } 


       else if(s[i]=='+'){
        int num1=st.top();
        st.pop();
        int num2=st.top();
        st.pop();
        st.push(num2+num1);
       }


       else if(s[i]=='-'){
        int num1=st.top();
        st.pop();
        int num2=st.top();
        st.pop();
        st.push(num2-num1);
       }


       else if(s[i]=='*'){
        int num1=st.top();
        st.pop();
        int num2=st.top();
        st.pop();
        st.push(num2*num1);
       }



       else if(s[i]=='/'){
        int num1=st.top();
        st.pop();
        int num2=st.top();
        st.pop();
        st.push(num2/num1);
       }
    }


    if(!st.empty()) {
        cout << st.top() << endl;
    }

    
    return 0;
}