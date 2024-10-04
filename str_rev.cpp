//print a string in reverse
#include <iostream>
using namespace std;

int length(char *str) 
{
    int l = 0;
    while (str[l] != '\0') 
    {
        l++;
    }
    return l;
}

void reverse(char *str, int i, int n)  
{ 
    if (i == n) 
        return;  
    reverse(str, i + 1, n);  
    cout << str[i]; 
}

int main() 
{ 
    char str[50]; 
    cout << "Enter a string: ";
    cin>>str;

    int n = length(str);  
    reverse(str, 0, n); 
    return 0; 
}

/*
OUTPUT: 
Enter a string: C++AndDataStructuresLab
baLserutcurtSataDdnA++C
*/

//ALTERNATE METHOD

#include <iostream>
using namespace std;

void print_rev(char *str)
{
    if (*str!='\0')
    {
        print_rev(str+1);
        cout<<*str;
    }
}
int main()
{
    char str[]="JiyaPalod";
    print_rev(str);
}

//OUTPUT: dolaPayiJ
