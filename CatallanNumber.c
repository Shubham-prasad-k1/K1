#include <stdio.h>

int catallan (int a) ;

int main ()
{
  int n, t_n ;

  printf ("Enter which term you want - ") ;
  scanf ("%d", &n) ;

  t_n = catallan (n) ;

  printf ("nth Catallan number is %d", t_n) ;

  return 0 ;
}

int catallan (int a)
{
  int i, c_n = 0 ;
  
  if (a==1||a==0)
  {
    c_n = 1 ;
  }

  else 
  {
    for (i = 0; i<a ; i++)
    {
       c_n = c_n + catallan(i)*catallan(a-i-1) ;
    }
  }

  return c_n ;
}