#include "assert.h"

void main(){
  int N;
  assume(N > 0);
  int arr1[_];
  int arr2[_];
  int m = 0;

  for (int i = 0; i < N; ++i) {
    int t = arr1[i];             // (stmt1)
    int s = arr2[i];             // (stmt2)
    if (t > m)
      m = t;
  }
  int v = arr1[N-1]; // should not affect result
  assert(m >= v);
  assert(m >= \max(arr1, 0, N));   // (stmt3)
}
