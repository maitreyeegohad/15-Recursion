//addition of all integers upto n
#include<iostream>
using namespace std;

int sum(int n)
{
    if (n<=1)
        return n;
    else 
        return n + sum(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Sum is: "<<sum(num);
}

/*
OUTPUT: 
Enter a number: 
7
Sum is: 28
*/
