#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
   int a,b,c;
   printf("��������Ҫ�Ƚϵ�����ֵ����ʽ��a�ո�b���س���\n");
   scanf("%d %d",&a,&b);
   c=a>b?a:b;
   printf("�������������ֵ�У��ϴ���Ϊ��%d\n",c);
   system("pause");
}