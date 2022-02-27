// ex0701.c
#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
    printf("I'm waiting for a character: ");
    int c = getchar();
    printf("I waited for the '%c' character.\n",c);
    return 0;
}

#pragma endregion

