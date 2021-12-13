/******************************************************************************

TO REVERSE THE STRING 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],revstr[100];
    int len=0, i=0;
    
    printf("Enter String : ");
    scanf("%s", str);
    
    for (int i=0; str[i]!='\0';i++){
        len++;
    }
    
    for (int j=len-1; str[i] != '\0';i++, j--){
        revstr[i]=str[j];
    }
    
    printf("Reversed string is : %s", revstr);
    

    return 0;
}
