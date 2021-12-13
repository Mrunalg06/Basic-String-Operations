/******************************************************************************

TO FIND THE REPEATED CHARACTER IN STRING

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int count=0, high=0;
    
    printf("Enter String : ");
    scanf("%s", str);
    
    for (int i=0; str[i]!='\0';i++){
        for (int j=0; str[j]!='\0';j++){
            if (str[i] == str[j]){
                count++;
            }
        }
        if (count > high){
            high=count;
            ch=str[i];
        }
        count = 0;
    }
    if (high != 1){
        printf("%c is repeated %d times in given string\n", ch, high);
    }
    else{
        printf("All the elements in string are unique\n");
    }

    return 0;
}
