#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
    int sequence[5], guess[5];
    int i, correct=1;

    srand(time(0));

    printf("Welcome to the memory game!");
    printf("\nMemorize this sequence of number:\n");

    for(i = 0; i < 5; i++)
    {
        sequence[i]=rand() % 10;
        printf("%d ",sequence[i]);
    }

    printf("\nNow enter the numbers in the same order:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&guess[i]);

        if(guess[i] != sequence[i])
        {
            correct=0;
        }
    }

    if(correct)
    {
         printf("\nCongratulations! You remembered the sequence correctly.");
    }

    else
    {
        printf("\nSorry, that's incorrect. Better luck next time!");
    }
    getch();
}