#include<iostream>
#include<cstdlib>

typedef double REAL;

int main(int argc, char **argv){
  int n = std::atoi(argv[1]);
  REAL u=1, o=1;
  int i=1;
  for(i;i<=n;i=i+1){
    u=u/2;
    o=o*2;
    std::cout<<i<<" "<<u<<" "<<o<<std::endl;
  }
}
