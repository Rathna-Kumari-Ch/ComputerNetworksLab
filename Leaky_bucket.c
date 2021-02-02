
#include<stdio.h>
#include<stdlib.h>
#define bucketSize 512

void bucketInput(int a,int b) 
{
 if(a>bucketSize)
 printf("\n\t\tBucket overflow");
 else {

 while(a>b){
 a-=b;
 
 }
 if (a>0) printf("\n\t\tLast %d" ,a);
 printf("\tbytes sent\t");
 printf("\n\t\tBucket output successful");
 }
}
int main() {
 int op, pktSize;
 printf("Enter output rate : ");
 scanf("%d",&op);
 int i;
 for(i=1;i<=5;i++){
 pktSize = rand() % 600;
 
 printf("\nPacket no %d",i);
 printf("\tPacket size = %d",pktSize);
 bucketInput(pktSize,op);
 }
 printf("\n");
 return 0;
}
