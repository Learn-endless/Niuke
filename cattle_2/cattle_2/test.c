#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;  //    -1          -1
	while (scanf("%d%d", &a, &b)!=EOF) //�ȼ���~scanf("%d%d",&a,&b)
	{                                  //EOF:-1
		if (a>b)                       //scanf������ctrl+zʱ��return -1.
			printf("%d>%d\n", a, b);   //-1��λȡ��Ϊ0.
		else if (a<b)                  // -1     1000 0000 0000 0000 0000 0000 0000 0001 (����)
			printf("%d<%d\n", a, b);   //        1000 0000 0000 0000 0000 0000 0000 0000 (����)
		else                           //        1111 1111 1111 1111 1111 1111 1111 1111 (ԭ��)
			printf("%d=%d\n", a, b);   // ~(-1)  0000 0000 0000 0000 0000 0000 0000 0000 (��λȡ��)
	}
	return 0;
}