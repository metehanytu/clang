void printPerfect(int low,int high)
{
  int i;
  for(i=low;i<=high;i++)
   if(perfect(i)==1) printf("%4d",i);
  return;
}
