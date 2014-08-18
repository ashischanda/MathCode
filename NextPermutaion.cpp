#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>

using namespace std;
int main()
{
	int i,k;
	char str[78];

	scanf("%s",str);

	k= strlen( str);
	sort( str, str+k);

	do{
		for( i=0; str[i]!= NULL ;i++)
			printf("%c",str[i]);
		printf("\n");

	}while( next_permutation( str, str+ k) );

	return 0;
}
