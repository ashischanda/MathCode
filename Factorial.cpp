// Uva 623
#include<stdio.h>
#include<string.h>

char f[10000];
char fact[1010][10000];	    /* gloval. We push some value in this string and then only show the row of desired num */

void multiply(int k){
	int cin,sum,i;
	int len = strlen(f);
	cin=0;
	i=0;
	while(i<len){
		sum=cin+(f[i] - '0') * k;			// This is the main part of Algorithm
		f[i] = (sum % 10) + '0';
		i++;
		cin = sum/10;
	}

	while(cin>0){
		f[i++] = (cin%10) + '0';
		cin/=10;
	}
	f[i]='\0';

	for(int j=0;j<i;j++)
		fact[k][j]=f[j];

	fact[k][i]='\0';
}


void fac(){
	int k;
	strcpy(f,"1");
	for(k=2;k<=1000;k++)
		multiply(k);		// calling main algorithm part
}

void print(int n){
	int i;
	int len = strlen(fact[n]);
	printf("%d!\n",n);
	for(i=len-1;i>=0;i--){
		printf("%c",fact[n][i]);
	}
	printf("\n");
}

// start of main

int main(){
	int n;
	fact[0][0]='1';
	fact[1][0]='1';
	fac();					// Creating A datafile; This is the main working part

	while(scanf("%d",&n)==1){
		print(n);				// only calling the print fun & find the answer
	}

	
	return 0;
}
