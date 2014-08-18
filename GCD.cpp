#include<stdio.h>
int GCD( int x, int y)
{
	int gcd=0;
	while(y!=0)
		{
			gcd=x%y;
			x=y;
			y=gcd;
		}
return x;
}

int main()
{
	int N,i,j,G=0;
	while(scanf("%d%d",&N, &i)!=EOF){
		if(N==0)
			break;
        G=GCD(N,i);
		/*Here GCD() is a function that finds the greatest
		 common divisor of the two input numbers*/

		printf("%d\n",G);
	}
return 0;
}
