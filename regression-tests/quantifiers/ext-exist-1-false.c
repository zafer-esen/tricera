void main() {
  int n = _;
  assume(n > 0);
  int a[];
  int i = 0;
  for(; i < n; ++i) 
  {
    a[i] = i-1;
  }

  //@  assert \exists int j; (((0 <= j) && (j < n)) && (a[j] == 3));
}
