#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("请输入想要比较的两个值（格式：a空格b，回车）\n");
   scanf("%d %d",&a,&b);
   c=a>b?a:b;
   printf("您输入的两个数值中，较大者为：%d\n",c);
   system("pause");
}