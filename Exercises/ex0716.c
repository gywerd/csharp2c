// ex0716.c
#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
    char name[30];

    printf("Greetings. Who are you? ");
    int res=gets(name);
    printf("Pleased to meet you, %s.\n",name);
    return 0;
}

#pragma endregion

