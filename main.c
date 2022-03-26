#include <stdio.h>

int btod(int);

int main()

{
  int binary,decimal;
  //Accept input in binary formate 
printf("Enter binary input");
  scanf("%d",&binary);
  //invoke btod() to convert binary to decimal 
decimal=btod(binary);

  //print the decimal equilant of binary 
printf("Decimal equivalent =%d\n",decimal);
  return 0;
  }
//Function difination of btod()function
int btod(int bin)
{
  if(bin==0)
  {
return 0;
  }
  else
  {
    return(bin%10+btod(bin/10)*2);
  }
  }