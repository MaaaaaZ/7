#include<stdio.h>
void main()
{
    float r,s;
    printf("请输入半径的数值:\t");
    scanf("%f",&r);
    s=3.1415926535932254626*r*r;
    printf("半径为%f的圆的半径为：%f\n\n",r,s);
    system("Pause");
	return 0;
}