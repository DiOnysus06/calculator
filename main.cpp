#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n1, n2;
char op;

cout << "enter your first number:";
cin >> n1;

cout << "enter your second number:";
cin >> n2;

cout << "enter your operator:";
cin >> op; 

int result;

if(op == '+'){
   cout << n1+n2;
}   
else if(op == '-'){
     cout << n1-n2;
}
else if(op == '*'){
     cout << n1*n2;
}
else if(op == '/'){
     cout << n1/n2;
}
else{
cout << "invalid operator";
}
    cout << result;
    return 0;
}


