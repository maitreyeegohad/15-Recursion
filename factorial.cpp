//factorial using recusrion

#include<iostream>
using namespace std;

int fact(int n)
{
    if (n<=1)
        return 1;

    else return (n*fact(n-1));
}
int main()
{
    int a;
    cout<<"Enter an integer: "<<endl;
    cin>>a;
    cout<<"Factorial is: "<<fact(a);
}

/*
OUTOUT: 
Enter an integer: 
7
Factorial is: 5040
*/
