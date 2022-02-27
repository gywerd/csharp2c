// ex0817.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
    int code=0;


    printf("Enter the error code (1-3): ");
    int res=scanf("%d",&code);

    switch (code)
    {
        case 1: printf("%d is a drive fault, not your fault.",code); break;
        case 2: printf("%d is an illegal format. Call a lawyer.",code); break;
        case 3: printf("%d is a bad filename. Spank it.",code); break;
        default: printf("%d is not recognized as a valid error code.",code); break;
    }

    return 0;

}

#pragma endregion

