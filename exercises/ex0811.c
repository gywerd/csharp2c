// ex0811.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
    int a=0;
    int b=0;


    printf("Comparison of numbers.\nInput number 1: ");
    int res=scanf("%d",&a);
    printf("Input number 2: ");
    res = scanf("%d",&b);

    if (a==b) printf("%d equals %d.\n",a,b);
    else if (a>b) printf("%d is greater than %d.\n",a,b);
    else printf("%d is less than %d.\n",a,b);

    return 0;

}

#pragma endregion

