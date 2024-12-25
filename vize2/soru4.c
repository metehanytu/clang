#include<stdio.h>
int F(int x) {
  int a=0,b=1,c,i;
  
  if(x<2) return x;
  
  for(i=2;i<=x;i++) {
    c=a+b;
    a=b;
    b=c;
    printf("%d %d %d %d\n",i,a,b,c);
  }
  return c;
}


int main() {
  printf("%d",F(7));
  return 0;
}
