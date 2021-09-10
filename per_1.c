#include<stdio.h>
#include<math.h>

double bmi (int height, int weight){
    return weight/ pow(height/100.0,2);
}
void info(){
    int p[][5]={
        {162,170,180,165,166},
        {70,80,65,48,50},
        {'M','F','M','F','F'},

};
for(int i=0;i<5;++i){
    printf("p[0][%d] = %d, p[1][%d] = %d , bmi=%.2f\n",i,p[0][i],i,p[1][i],bmi(p[0][i],p[1][i]));
}
}

int main(){

info();
 return 0;
}