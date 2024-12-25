#include<stdio.h>
int main() {
  char str[]="Yildiz Technical University";
  int letter[26]={0},k,i=0;
  
  while(str[i]!='\0') {
    if(str[i]>='a' && str[i]<='z') letter[str[i]-97]++;
    i++;
  }
  
  for(k=0;k<26;k++)
    if(letter[k]>0) printf("%c %d\n",k+97,letter[k]);
  return 0;
}
