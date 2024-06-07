#include<stdio.h>
int main(){
int a,x,c=0;
scanf("%d",&a);
while(a!=0){
x=a%10;
c=c*10+x;
a=a/10;
}
printf("%d",c);
}
