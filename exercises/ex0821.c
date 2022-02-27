// ex0821.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
    int a=0,b=0,larger=0;


    printf("Enter value A: ");
    int res=scanf("%d",&a);
    printf("Enter value B: ");
    res=scanf("%d",&b);

    larger = (a > b) ? a : b;

    printf("Value %d is larger.\n",larger);

    return 0;

}

#pragma endregion

