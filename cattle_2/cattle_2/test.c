#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;  //    -1          -1
	while (scanf("%d%d", &a, &b)!=EOF) //等价于~scanf("%d%d",&a,&b)
	{                                  //EOF:-1
		if (a>b)                       //scanf中输入ctrl+z时，return -1.
			printf("%d>%d\n", a, b);   //-1按位取反为0.
		else if (a<b)                  // -1     1000 0000 0000 0000 0000 0000 0000 0001 (补码)
			printf("%d<%d\n", a, b);   //        1000 0000 0000 0000 0000 0000 0000 0000 (反码)
		else                           //        1111 1111 1111 1111 1111 1111 1111 1111 (原码)
			printf("%d=%d\n", a, b);   // ~(-1)  0000 0000 0000 0000 0000 0000 0000 0000 (按位取反)
	}
	return 0;
}