// ex0916.c
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdcc.h> // Required for Common C language extension

#pragma region Constructors

/// <remarks />
int main()
{
  int fibo=0,nacci=1;

  do
  {
    printf("%d ",fibo);
    fibo=fibo+nacci;
    if (nacci > 1000) break;
    printf("%d ",nacci);
    nacci=nacci+fibo;
  } while (fibo < 1000);

  putchar('\n');

  return 0;

}

#pragma endregion

