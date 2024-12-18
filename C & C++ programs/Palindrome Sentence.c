#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 char* make_pal(char word[])
{
	int len,i,x;
	char temp[1000];
	len=strlen(word);
	strcpy(temp,word);
	
	x=len-1;
	while(1)
	{
		if(word[x]==word[x-1])
		{
			x=x-1;
		}
		else
		{
			break;
		}
	}
	word[x]='\0';
	
	strrev(temp);
	return(strcat(word,temp));
}
 int inp_chk(char inp[])
{
	int len,chk=1,i,c;
	len=strlen(inp);
	
	if((inp[len-1]!='.')&&(inp[len-1]!='?')&&(inp[len-1]!='!'))
	{
		chk=0;
	}
	
	c=0;
	for(i=0;i<len;i++)
	{
		if(inp[i]==' ')
		{
			c++;
		}
		else
		{
			c--;
		}
		if(c<0)
		{
			c=0;
		}
		if(c>1)
		{
			chk=0;
		}
	}
	
	for(i=0;i<len;i++)
	{
		if(isalpha(inp[i])==2)
		{
			chk=0;
		}
	}
	
	return chk;
}
 int chk_pal(char word[])
{
	char temp[1000];
	strcpy(temp,word);
	strrev(temp);
 	return(strcmp(word,temp)==0);
}
 int main()
{
	int i,t,len,f=1;
	char inp[1000],out[1000],temp[1000],*token;
	gets(inp);
	if(inp_chk(inp)==0)
	{
		printf("Invalid Input");
		exit(0);
	}
//	else
//	{
//		printf("ok");
//	}
	len=strlen(inp);
	inp[len-1]='\0';
//	printf("\n%s\n",inp);
	
	token=strtok(inp," ");
	while(token!=NULL)
	{
		strcpy(temp,token);
		if(!chk_pal(temp))
		{
			strcpy(temp,make_pal(temp));
			if(f==1)
			{
				strcpy(out,temp);
				strcat(out," ");
				f=0;
			}
			else
			{
				strcat(out,temp);
				strcat(out," ");
			}
		}
		else
		{
			if(f==1)
			{
				strcpy(out,temp);
				strcat(out," ");
				f=0;
			}
			else
			{
				strcat(out,temp);
				strcat(out," ");
			}
		}
		token=strtok(NULL," ");
	}
	
	printf("%s",out);
	return 0;	
} 
