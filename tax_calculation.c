#include <stdio.h>
int main ()
{
int a,b;
  printf ("enter yours annual CTC in lakhs: ");
  scanf ("%d", &a);
  if (a<=4)
    printf ("no tax");
  else if (a>4.0 && a<=8.0)
  {
    b =0.05*a*100000;
    printf ("you are in 5 percent tax slab therefore your tax is %d", b);
  } 
  else if (a>8 && a<=12)
  {
    b =0.1*a*100000;
    printf ("you are in 10 percent tax slab therefore your tax is %d", b);
  }
  else if (a>12 && a<=16)
  {  b =0.15*a*100000;
    printf ("you are in 15 percent tax slab therefore your tax is %d", b);
  }
  else if (a>16 && a<=20)
  {  b =0.2*a*100000;
    printf ("you are in 20 percent tax slab therefore your tax is %d", b);
  } 
  else if (a>20 && a<=24)
  {
    b =0.25*a*100000;
    printf ("you are in 25 percent tax slab therefore your tax is %d", b);
  }  
  else 
  {
    b =0.3*a*100000;
    printf ("you are in 30 percent tax slab therefore your tax is %d", b);
  }  
  return 0;
} 
