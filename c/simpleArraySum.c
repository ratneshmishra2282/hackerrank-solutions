#include<stdio.h>

int sumofarray(int a[],int n){
  int i,sum=0;
  for(i=0;i<n;i++){
      sum=sum+a[i];
  }
  return sum;

}
int main(){
  int s,a[1000],n,i=0;
  char temp;
  scanf("%d",&n);
  do {
      scanf("%d%c", &a[i], &temp);
      i++;
  } while(temp != '\n' && i!=n);
  s=sumofarray(a,i);
  printf("%d",s);
  return 0;
}
