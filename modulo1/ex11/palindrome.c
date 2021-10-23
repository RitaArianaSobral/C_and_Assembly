#include <stdio.h>
int palindrome(char *str){
    int lenght=0;
    
    for(int i=0;*(str+i) != '\0';i++){
        lenght++;
    }
    char aux [lenght];
    for(int i=0;i<=lenght;i++){
        *(aux+i)='\0';
    }

    int j=0;
    for(int i=0;i<=lenght;i++){
        if ((*(str+i) >= 'A' && *(str+i) <= 'Z') || (*(str+i) >= 'a' && *(str+i) <= 'z') || (*(str+i) >= '1' && *(str+i) <= '9')){
            *(aux+j)=*(str+i);
            j++;
        }
    }

    printf("%s\n",aux);

    int temp=0;
    for(int l=0;*(aux+l) != '\0';l++){
        temp++;
    }
    
    int h=temp-1;
    for(int m=0;m<temp;m++){
        printf("%d ",*(aux+m));
        printf("%d\n",*(aux+temp));
        if(*(aux+m) == *(aux+temp)){
            printf("%d ",*(aux+m));
            printf("%d\n",*(aux+temp));
            h--;
        } else {
            return 0;
        }

    }

    return 1;
}