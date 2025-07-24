#include<stdio.h>
#include<string.h>

void parser(char *string)
{
    int in=0, index =0;
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='<')
        {
            in=1;
            continue;
        }
        else if(string[i]=='>')
        {  
            in =0;
            continue;
        }
        if(in==0)
        {
            string[index]=string[i];
            index++;
            continue;
        }
    }
    string[index]='\0';
    //removing trailing spaces from the beginning

    while(string[0]==' ')
    {
        for(int i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];

        }
    }
    //removing trailing spaces from the end

    while(string[strlen(string)-1]==' ') 
    {
        string[strlen(string)-1] = '\0';
    }
}
int main()
{
   char str[]= "<hi>     HI MY name is TANISHQ      <hi>";
   parser(str);
   printf("Parsed string ~~ %s ~~",str);
   return 0;
}
