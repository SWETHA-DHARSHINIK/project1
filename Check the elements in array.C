#include<stdio.h>
int main(){
int a[4]={1,5,6,7};
int b,c=0;
printf("%d",&b);
for(int i=0;i<5;i++){
if(b==a[i]){
c++;
}
if(c==1){
printf("%d",b);
}
else{
printf("no");
}}}
