#include <stdio.h>
#include<string.h>

int main(void)
int fact(int n-1)
{
    return (n<=1?1:n*(n-1));
}
int countrightside(char* n,low,high)
{
    int i,0;
    for(i=0;i<n-1,i++)

    {
        if(i<low)
        {
            countrightside++;
        } if(i>high)
        {
            break;
        }
    }
    return countrightside;
}

    {
	// your code goes here
	char* n;
	printf("enterthe character");
	scanf("%s",n);
	int sum;
	for(sum=0;sum<n-1;sum++)
	{
	    sum=+fact(n-1);
	}
	printf("rank of the given strind is %d",sum);
	
	
	return 0;
}

