#include<stdio.h>
#include<math.h>

int IS_Prime (int x){
int a=2;
while(a<=x&&x%a!=0){
    a++;
}
if (x==a){
    return 1;
}
else{ return 0;}
}
int main(){
int arr[5];
int b;
for(int i=0;i<10;++i){
     printf("Enter your number: ");
     scanf("%d",&arr[i]);
    if(IS_Prime(arr[i])==1){
    printf("Prime number\n");
    break;
}
else{
    printf("Not Prime number\n");
}

}
    
    





    return 0;
}