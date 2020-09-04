#include <stdio.h>
#include <string.h>

int main(){
    char flag[10] = {'0','1','1','1','1','1','1','0'};
    char string[20];
    char string2[20];
    int i,j = 0,count,length;

    printf("Enter the string: ");
    scanf("%s",string);

    length = strlen(string);
    count = 0;

    
    for(i = 0;i < length;i++){
        if(string[i] == '1'){
            count++;
        }
        
        else{
            count = 0;
        }
        string2[j] = string[i];
        j++;

        if(count == 5 && string[i+1] == '1'){
            string2[j] = '0';
            j++;
            count = 0;

        }
    }

    

    string2[j] = '\0';
    printf("%s %s %s",flag,string2,flag);
    return 0;

}