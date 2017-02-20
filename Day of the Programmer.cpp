#include <cstdio>

using namespace std;

int main(){
int a;
scanf("%d",&a);
(a%400==0||(a%4==0&&a%100!=0))?printf("12.09.%d\n",a):printf("13.09.%d\n",a);
return 0;
}