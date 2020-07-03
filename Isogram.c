#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[50];
    int repeat = 0;
    printf("Enter word/phrase\n");
    scanf("%s",&str1);

    for (int i = 0; i < strlen(str1); i++) 
    {
        for (int j = i + 1; j < strlen(str1); j++) 
        {
            if (str1[i] == str1[j]) 
            {
                repeat = 1;
                break;
            }
            if (repeat == 1)
                break;
        }
    }

    if (repeat == 1) 
        printf("The word/phrase is not an isogram\n");
    else 
        printf("The word/phrase is an isogram\n");
}
