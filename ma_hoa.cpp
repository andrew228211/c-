#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	fflush(stdin);
	while(t--)
	{
		char s[101];
		scanf("%s",&s);
		int n=strlen(s);
		int h=0;
		int dem['Z'+1]={1};
		for(int i=1;i<n;i++)
		{
			if(s[i]==s[i-1])
			{
				dem[s[i]]++;
				for(int k=i;k<n;k++)
				{
					s[k]=s[k+1];
				}
				n--;
				i--;
			}
		}	
		for(int i=0;i<n;i++)
		{
			printf("%c%d",s[i],dem[s[i]]+1);
		}
		printf("\n");
	}
		
}

