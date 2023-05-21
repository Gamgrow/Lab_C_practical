// (a) To check that an input alphabet is vowel or consonant
// (b) To check whether a number is positive , negative or zero

#include <stdio.h>

int main()
{

    // char ch;
    // printf("Enter a alphabet : ");
    // scanf("%c", &ch);

    // // (a) To check that an input alphabet is vowel or consonant
    // switch(ch)
    // {
    //     case 'a':
    //         printf("Vowel");
    //         break;
    //     case 'e':
    //         printf("Vowel");
    //         break;
    //     case 'i':
    //         printf("Vowel");
    //         break;
    //     case 'o':
    //         printf("Vowel");
    //         break;
    //     case 'u':
    //         printf("Vowel");
    //         break;
    //     case 'A':
    //         printf("Vowel");
    //         break;
    //     case 'E':
    //         printf("Vowel");
    //         break;
    //     case 'I':
    //         printf("Vowel");
    //         break;
    //     case 'O':
    //         printf("Vowel");
    //         break;
    //     case 'U':
    //         printf("Vowel");
    //         break;
    //     default:
    //         printf("Consonant");
    // }

    // (b) To check whether a number is positive , negative or zero
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // int s;
    switch (n > 0)
    {
    case 1:
        printf("Positive");
        break;

    case 0:
        switch (n < 0)
        {
        case 1:
            printf("Negative");
            break;

        case 0:
            printf("Zero");
        }
        break;
    }

    return 0;
}