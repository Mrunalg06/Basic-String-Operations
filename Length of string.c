/******************************************************************************

TO FIND THE LENGTH OF THE STRING

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int len=0, high=0;
    
    printf("Enter String : ");
    scanf("%s", str);
    
    for (int i=0; str[i]!='\0';i++){
        len++;
    }
    
    printf("Length of the string is : %d", len);
    

    return 0;
}
