#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std; 
stack<int> s1;
stack<int> s2;
int front;
void enqueue(int num) {
    while(!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
    if(s1.empty()) {
        front = num;
    }
    s1.push(num);
}
int dequeue() {
    while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    int x = s2.top();
    s2.pop();
    if(!s2.empty()) {
        front = s2.top();
    }
    return x;
}
int front_val() {
    return front;
}
int main() 
{  
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
         switch(x) {
            case 1:
                int num;
                cin>>num;
                enqueue(num);
                break;
            case 2:
                dequeue();
                break;
            case 3:
               cout<<front_val()<<endl;
                break;
        }
    }
    return 0;
}