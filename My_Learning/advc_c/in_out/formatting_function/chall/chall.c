#include <stdio.h>
#include <stdlib.h>

/* Function declarations */
int isEven(const int);
int isPrime(const int);

int main()  {

   FILE * fPtrIn = NULL;
   int num = 0, success = 0;
   fPtrIn   = fopen("numbers.txt", "r");
   if(fPtrIn == NULL)
   {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
   }
   printf("File opened successfully. Reading integers from file. \n\n");
   success = fscanf(fPtrIn, "%d", &num);
    do {
       if (isPrime(num))
           printf("Prime number found: %d\n", num);
       else if (isEven(num))
           printf("Even number found: %d\n", num);
       else
           printf("Odd number found: %d\n", num);
       success = fscanf(fPtrIn, "%d", &num);

    }while(success != -1);

    fclose(fPtrIn);

    return 0;
}

int isEven(const int num)
{
    return !(num & 1);
}


int isPrime(const int num)
{
    int i = 0;
    if (num < 0)
        return 0;
    for ( i=2; i<=num/2; i++ )
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
