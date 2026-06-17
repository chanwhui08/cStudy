#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void case_conversion(char *arr, int len);
int search_by_first_alphabet(char *arr, int len, char target);

int main(void)
{
    char books[50] = "Harry Potter";
    int len;
    int count;

    len = strlen(books);
    //printf("%d\n", len);
    case_conversion(books, len);
    printf("%s\n", books);
    if(strcmp(books, "HARRYPOTTER") == 0)
        printf("same\n");
    
    count = search_by_first_alphabet(books, len, 'H');
    printf("%c's count : %d\n", 'H', count);

    return 0;
}

void case_conversion(char *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] >= 97 && arr[i] <= 122)
        {
            arr[i] -= 32;
        }
        
        else if( arr[i] == ' ')
        {
            for(int j = i; j < len; j++)
            {
                arr[j] = arr[j + 1];
            }
            i--;
        }
    }   
}

int search_by_first_alphabet(char *arr, int len, char target)
{
    char save_char = arr[0];
    int count = 0;
    if(arr[0] >= 97 && arr[0] <= 122)
    {
        save_char = arr[0] - 32;
    }
    if(save_char == target)
    {
        count++;
    }
    return count;
}