//Program 4 : CRC

#include <stdio.h>
#include <string.h>


int main()
{
    char Data[100],key[50],key1[50],temp[100],rem[50],quo[100];
    printf("Enter Data: ");
    scanf("%s",Data);
    printf("Enter Divisor: ");
    scanf("%s",key);
    
    int key_len,data_len,i,j;
    data_len = strlen(Data);
    key_len = strlen(key);
    
    strcpy(key1,key);
    
    for(i = 0;i < key_len-1;i++){
        Data[data_len+i] = '0';
    }
    
    for(i = 0;i < key_len;i++){
        temp[i] = Data[i];
    }
    
    for(i = 0;i < data_len;i++){
        quo[i] = temp[0];
        
        if(quo[i] == '0'){
            for(j = 0;j < key_len;j++)
                key[j] = '0';
        }
        else{
            for(j = 0;j < key_len;j++)
                key[j] = key1[j];
        }
        
        for(j = key_len-1;j > 0;j--){
            if(temp[j] == key[j]){
                rem[j-1] = '0';
            }
            else{
                rem[j-1] = '1';
            }
        }
        rem[key_len-1] = Data[key_len+i];
        strcpy(temp,rem);
        
    }
     
     strcpy(rem,temp);
     
     printf("\n");
     printf("Quotient is : ");
     for(i = 0;i < data_len;i++){
         printf("%c",quo[i]);
     }
     
     printf("\n");
     printf("Remainder is : ");
     for(i = 0;i < key_len-1;i++){
         printf("%c",rem[i]);
     }
     printf("\n");
     printf("Final Data is : ");
     for(i = 0;i < data_len;i++){
         printf("%c",Data[i]);
         
     }
     
     for(i = 0;i < key_len-1;i++){
         printf("%c",rem[i]);
     }

    return 0;
}
