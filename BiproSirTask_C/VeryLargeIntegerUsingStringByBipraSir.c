#include<stdio.h>
#include<string.h>
main()
{
	printf("\n enter two very lagre integer \n");
	char a[100],b[100];
	gets(a);
	gets(b);
	
	int la,lb,size_sum,size;
	la=strlen(a);
	lb=strlen(b);

	
	if(la>lb)
	size_sum=la;
	else
	size_sum=lb;
	int arr[size_sum],i,c=0;
	for(i=size_sum-1;i>=0;i--)
	{
	  int n=0,m=0,temp=0;
	  if((la-1)>=0)
	  {
	  	n=a[la-1]-'0';
	  }
	  else
	  {
	  	n=0;
	  }
	  if((lb-1)>=0)
	  {
	  	m=b[lb-1]-'0';
	  }
	  else
	  {
	  	m=0;
	  }
	  temp=n+m+c;
	
	  if(temp>=10)
	  {
	  	arr[i]=temp%10;
	  	
	  	c=temp/10;
	  
	  }
	  else
	  {
	  	arr[i]=temp;
	  
	  	c=0;

	  }
	 
	  la--;
	  lb--;
	  
	}
	printf("\n ..................................................\n");
	
	for(i=0;i<size_sum;i++)
	{
		printf("%d",arr[i]);
	}
}
