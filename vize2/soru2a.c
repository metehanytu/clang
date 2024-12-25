int perfect(int number) {
  int sum=0,i;
  
  for(i=1;i<=number/2;i++)
   if(number%i==0) sum+=i;
  
  if(number==sum) return 1;
  
  return 0;
}
