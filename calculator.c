#include <stdio.h>
#include <string.h>
int main()
{
void add(){
    int a;
    printf("first:");
    scanf("%d",&a);
    int b;
    printf("\nsecond:");
    scanf("%d",&b);
    int c = a+b;
    printf("%d\n",c);
    return;
    }
void hit(){
    int a;
    printf("first:");
    scanf("%d",&a);
    int b;
    printf("\nsecond:");
    scanf("%d",&b);
    int c = a*b;
    printf("%d\n",c);
    return;
    }




void dec(){
    int a;
    printf("first:");
    scanf("%d",&a);
    int b;
    printf("\nsecond:");
    scanf("%d",&b);
    int c = a-b;
    printf("%d\n",c);
    return;
    }
void dis(){
    int a;
    printf("first:");
    scanf("%d",&a);
    int b;
    printf("\nsecond:");
    scanf("%d",&b);
    int c = a/b;
    printf("%d\n",c);
    return;
    }
while(1){
int i;
printf("1-add\n2-hit\n3-disturbtion\n4-decrease\n:");
scanf("%d",&i);
if (i == 1){
add();

}
else if (i == 2){
hit();

}
else if(i == 3){
dis();
}
else if (i == 4){
dec();
}
}
}
