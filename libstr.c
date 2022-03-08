#include <stdio.h>
#include<string.h>

int main()
{
   char st[20]={'H','e','l','l','o',' ','w','o','r','l','d','\0'};
   char st1[20];
   char st2[20]={'H','e','l','l','o','\0'};
   char st3[20]={'C','\0'};
   strcat(st2,st3);
   
   
   printf("The length of string is: %d \n",strlen(st));
   strcpy(st1,st);
   printf("The original string is: %s\n",st);
   printf("The copied sting is: %s\n",st1);
   printf("%s\n",st2);
   
   
   

    return 0;
}
