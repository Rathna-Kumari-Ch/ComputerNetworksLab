//Distance vector Routing

#include<stdio.h>
int max();
int distance[20];
int n;


main()
{
 int adj[20][20],adj1[20][20],flag[30];
 int i,j,root,x;
 int source,count=1,y=0;
 printf("enter no of nodes : ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
    {
     scanf("%d",&adj[i][j]);
     }
    }

  printf("enter the source for broadcasting: ");
  scanf("%d",&source);
  
  for(i=0;i<n;i++)
   {
    flag[i]=0;
    }
  
for(root=0;root<n;root++)
   {
    for(i=0;i<n;i++)
     {
      distance[i]=adj[root][i];
      }
      x=min();
     
 for(i=0;i<n;i++)
       {
	
     if(distance[i]==x)
	 {
	  adj1[root][i]=x;
	  adj1[i][root]=x;
	  }
	else
	 {
	  adj1[root][i]=0;
	  }
	}
    }

    for(i=0;i<n;i++)
      {
       for(j=0;j<n;j++)
       {
	if(adj1[i][j]!=0)
	{
	 adj1[j][i]=adj[i][j];
	 }
       }
      }

     printf("given adjacency matrix is: ");
     printf("\n");
    
 for(i=0;i<n;i++)
      {
       for(j=0;j<n;j++)
	{
	 printf("%d ",adj[i][j]);
	 }
	 printf("\n");
       }
     printf("minimal spanning tree: ");

 for(i=0;i<n;i++)
      {
     for(j=0;j<n;j++)
       {
	printf("%d ",adj1[i][j]);
	}
	printf("\n");
      }
      root=source;
      flag[root]=1;
     while(count!=y)
   {
	for(i=0;i<n;i++)
	 {
	  if(adj1[root][i]!=0 && flag[root]==1 && flag[i]!=1)
	   {
	    printf("%d sends message to %d \n",root,i);
	    flag[i]=1;
	    }
	  }
	 if(root<n-1)
	  {
	   root++;
	   }
	   else
	    {
	     root=0;
	     }
	  for(i=0;i<n;i++)
	   {
	    if(flag[i]==0)
	     {
	      break;
	      }
     }
	 
 if(i==n)
	   {
	    count=y;
	    }
       }
   }

int min()
  {
       int i,j=0;
       int mini;
       int distance1[10];
       for(i=0;i<n;i++)
       {
	 if(distance[i]!=0)
	  {
	   distance1[j]=distance[i];
	   j++;
	   }         }
       mini=distance1[0];
      
      for(i=1;i<j;i++)
	{
	   if(distance1[i]<mini)
	    {
	     mini=distance1[i];
	     }
	 }	   return(mini);     
}
