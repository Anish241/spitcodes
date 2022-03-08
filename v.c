#include<stdio.h>
int main()
{ char st[100];

  fgets(st,100,stdin);
  
  int length=0;
  int i=0;
  while(st[i]!='\0')
  {
      length++;
      i++;
  }
  
 int vowels=0;
  i=0;
  while(st[i]!='\0')
  {
      if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o'|| st[i]=='u')
      {
          vowels++;
      }
      i++;
      
  }
  i=0;
  int consonants=0;
   while(st[i]!='\0')
  {
      if(st[i]!='a' && st[i]!='e' && st[i]!='i' && st[i]!='o'&& st[i]!='u' && st[i]==' ')
      {
          consonants++;
      }
      i++;
      
      
  }
  
  i=0;
  
  int characters=0;
  
  while(st[i]!='\0')
  {
      if(st[i]!=' ')
      {
          characters++;
      }
      i++;
  }
  
  i=0;
  
  int words=1;
  while(st[i]!='\0')
  {   if(st[i]==' ')
     { words=words+1;}
     i++;
  }
  
  printf("The number of vowels is: %d\n",vowels);
  printf("The number of consonants is: %d\n",consonants);
  printf("The number of characters in the string is: %d\n",characters);
  printf("The number of words in the string is: %d\n",words);
  
  
  
    
    return 0;
}
