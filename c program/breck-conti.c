#include<stdio.h> //Includes the standard input/output library, needed for print function

void main()
{
    // A 'for' loop that iterates from i = 0 to i < 10
    for (int i = 0; i < 10; i++)
    {

          // if 'i' equals 5, exit the loop usin 'break'
          if (i == 5)
          {
            break; // terminates the loop
          }

          // if 'i' equals 2, skip the rest of the loop and continue with the next iteration
          if (i == 2)
          {
              continue; // Skips the current iteration
          }

    // Print the value of 'i' for each iteration that is not skipped 
    printf("i: %d\n", i);
    }
}