#include<stdio.h>
void swap(int *a,int *b);
int main()
{
int a,b;
printf("aの値を入力してください\n");
scanf("%d",&a);
printf("bの値を入力してください\n");
scanf("%d",&b);
swap(&a,&b);
}
void swap(int *a,int *b)
{
int c;
c = *a;
*a = *b;
*b =c;
printf("ポインタaが指してる場所%d\n",a);
printf("ポインタbが指してる場所%d\n",b);
printf("cの値%d\n",c);
printf("swap後のaの値%d\n",*a);
printf("swap後のbの値%d\n",*b);
} 

