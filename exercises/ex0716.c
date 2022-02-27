// ex0716.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
  char name[50];
  char trimName[50];

  printf("Greetings. Who are you? ");
  fgets(name, 50, stdin);

  for (int i = 0; i < sizeof name; i++)
  {
    if (name[i] == newline) trimName[i] = null;
    else trimName[i] = name[i];
  }

  printf("Pleased to meet you, %s.\n", trimName);
  return 0;

}

#pragma endregion

