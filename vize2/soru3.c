int numberOfDigits(int a) {
  int nd=0;
  while(a>0) {
    nd++;
    a/=10;
  }
  return nd;
}
