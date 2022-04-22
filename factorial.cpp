#include <iostream>

using namespace std;

int main()
{
    int num, fact=1;
    printf("Dame un numero: ");
    scanf("%d",&num);

    for (num; num>0; num--)
    {
        fact=fact*num;
    }

    printf("%d",fact);
    
}