#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,n,l=0,max=0;
	scanf("%d",&n);
	char a[n][10];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		l=strlen(a[i]);
		if(l>max)
		{
			max=l;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	printf("%d\n",max);
	return 0;
}
