#include<stdio.h>
struct teams
{ int teamid;
  char team_name[20];
  int games_played;
  int games_won;
  int games_drawn;
  int games_lost;
  int points;
    
}t[20];
struct games
{int team1_id;
 int team2_id;
 int won;
    
}g[20];

int main()
{   int N;
    
    printf("Enter the number of teams: \n");
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {   
        printf("Enter the team id: \n");
        scanf("%d",&t[i].teamid);
        printf("Enter the team name: \n");
        scanf("%s",t[i].team_name);
    }
    
    int M;
    printf("Enter the number of games: \n");
    scanf("%d",&M);
    for(int j=0;j<M;j++)
    {
        printf("Enter the details of game: \n");
        printf("Enter the team1 id: \n");
        scanf("%d",&g[j].team1_id);
        printf("Enter the team2 id: \n");
        scanf("%d",&g[j].team2_id);
        printf("Enter the id of team won(Enter -1 if game is drawn): \n");
        scanf("%d",&g[j].won);
    }
    
    for(int k=0;k<M;k++)
    {
         if(g[k].won==-1)
         {
             for(int l=0;l<N;l++)
             {
                 if(t[l].teamid==g[k].team1_id || t[l].teamid==g[k].team2_id)
                 {
                     t[l].games_played=t[l].games_played+1;
                     t[l].games_drawn=t[l].games_drawn+1;
                     t[l].points=t[l].points+1;
                 }
             }
         }
         
         else
         {
             int team1 = g[k].team1_id;
             int team2 = g[k].team2_id;
             int temp1,temp2;
             
                if(g[k].won==team1)
                {
                    temp1=team1;
                    temp2=team2;
                }
                else
                {
                    temp1=team2;
                    temp2=team1;
                }
                
             
             
             for(int h=0;h<N;h++)
             {
                if(t[h].teamid==temp1)
                {
                    t[h].games_played=t[h].games_played+1;
                     t[h].games_won=t[h].games_won+1;
                     t[h].points=t[h].points+2;
                }
                else if(t[h].teamid==temp2)
                {
                    t[h].games_played=t[h].games_played+1;
                     t[h].games_lost=t[h].games_lost+1;
                }
             }
         }
    }
    
    
    for(int p=0;p<N;p++)
    {
        printf("Team name: %s\n",t[p].team_name);
        printf("Team id: %d \n",t[p].teamid);
        printf("Number of games games played: %d\n",t[p].games_played);
        printf("Number of games won: %d \n",t[p].games_won);
        printf("Number of games drawn: %d \n",t[p].games_drawn);
        printf("Number of games lost: %d \n",t[p].games_lost);
        printf("Number of points: %d\n",t[p].points);
    }
    
    
    
    
    return 0;
}
