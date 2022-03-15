

#include <stdio.h>
struct player
{   int player_id;
    int age;
    char name[20];
    char address[100];
    int active;
    int married;
    char wife_name[25];
    int children;

    
}p[30];


int main()
{  int N;
   printf("Enter the number of players: \n");
   scanf("%d",&N);
   
   for(int i=0;i<N;i++)
   {
       printf("Enter the player id, age , name , address , activity status(0/1), maratial status(0/1)\n");
       scanf("%d %d %s %s %d %d",&p[i].player_id,&p[i].age,p[i].name,p[i].address,&p[i].active,&p[i].married);
       if(p[i].married==1)
       {
           printf("Enter wife's name: \n");
           scanf("%s",p[i].wife_name);
           printf("Enter the number of children: \n");
           scanf("%d",&p[i].children);
       }
   }
    
   for(int i=0;i<N;i++)
   {
       if(p[i].active==1 && p[i].married==1)
       {
           printf("The name of the player is: %s \n",p[i].name);
           printf("The name of wife is: %s \n",p[i].wife_name);
           printf("Number of children are: %d \n",p[i].children);
           printf("\n");
       }
   }
    
    return 0;
}


