#define _CRT_SECURE_NO_WARNINGS 1
//�����߸�������ȥ����߷ֺ���ͷֺ���ƽ���֣����С���㱣����λ
#include<stdio.h>
int main()
{
	int i, j;
	int arr[7];
	int temp;
	float sum = 0;
	for (i = 0; i<7; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i<6; i++)
	{
		for (j = 0; j<6 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 1; i<6; i++)
	{
		sum += arr[i];
	}
	printf("%.2f\n", sum / 5);
	return 0;
}



//��ӡ������
//#include<stdio.h>
//int main()
//{
//	int num, i, j;
//	while (~scanf("%d", &num))
//	{
//		for (i = 0; i<num; i++)
//		{
//			for (j = 0; j<num; j++)
//			{
//				if (i == 0 || j == 0 || j == num - 1 || i == num - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//��ӡK��
//#include<stdio.h>
//int main()
//{
//	int num, i, j;
//	while (~scanf("%d", &num))
//	{
//		for (i = 0; i<num; i++)
//		{
//			for (j = 0; j<num + 1 - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i<num + 1; i++)
//		{
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			if (i<num)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int num, i, j;
//	while (~scanf("%d", &num))
//	{
//		for (i = 0; i<num; i++)
//		{
//			for (j = 0; j<num - i; j++)
//				printf(" ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i<num + 1; i++)
//		{
//			for (j = 0; j<i; j++)
//				printf(" ");
//			for (j = 0; j<num + 1 - i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}


//��ӡֱ��������
//#include<stdio.h>
//int main()
//{
//	int num, i, j;
//	while (~scanf("%d", &num))
//	{
//		for (i = 0; i<num; i++)
//		{
//			for (j = num - i - 1; j>0; j--)
//				printf("  ");
//			for (j = 0; j <= i; j++)
//				printf("* ");
//			printf("\n");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;  //    -1          -1
//	while (scanf("%d%d", &a, &b)!=EOF) //�ȼ���~scanf("%d%d",&a,&b)
//	{                                  //EOF:-1
//		if (a>b)                       //scanf������ctrl+zʱ��return -1.
//			printf("%d>%d\n", a, b);   //-1��λȡ��Ϊ0.
//		else if (a<b)                  // -1     1000 0000 0000 0000 0000 0000 0000 0001 (����)
//			printf("%d<%d\n", a, b);   //        1000 0000 0000 0000 0000 0000 0000 0000 (����)
//		else                           //        1111 1111 1111 1111 1111 1111 1111 1111 (ԭ��)
//			printf("%d=%d\n", a, b);   // ~(-1)  0000 0000 0000 0000 0000 0000 0000 0000 (��λȡ��)
//	}
//	return 0;
//}