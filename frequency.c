#include<stdio.h>
#include<stdlib.h>
int main(){
  int c=0;
  int arr[100];
  int k=8;
  for(int i=0;i<100;i++){
    arr[i]=rand()%10;
    if(arr[i]==k)
      c++;
  }
  printf("%d",c);
}
