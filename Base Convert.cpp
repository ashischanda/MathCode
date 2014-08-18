#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


void  octaToDeci()
{
  int i,j,k,l;
  char longstr[90]="12";

  j=0;
  l= strlen(longstr);
  l--;

  for(i=0;i< strlen( longstr) ; i++){
      k=longstr[i]-'0';
      j+= k*pow(8, l);
      l--;
  }
  printf(" %d\n", j);
}

void deciToOcta()
{
    int i,j,k,l , num;
    char longstr[90]="10";

    num=0;
    for(i=0;i< strlen( longstr) ; i++){
          j= longstr[i]-'0';
		  num= num*10 + j;
    }
    printf(" %d num\n", num);
    /// now we get num in Decimal  format
    char ans[200];
    i=0;
    while(num>0){
        ans[i]= (num% 8) + '0';
        num = num/ 8;
        i++;
    }
    ans[i]='\0';
    for(i= strlen(ans); i>=0 ;i--)
        printf("%c", ans[i]);

printf("\n");
}
int main()
{
	int i=0,j=0,k=0;
    octaToDeci();
    deciToOcta();

 return 0;
}
