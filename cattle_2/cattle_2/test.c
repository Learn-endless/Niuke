#define _CRT_SECURE_NO_WARNINGS 1
//�����ص�
//#include<stdio.h>
//int main()
//{
//	int m, n, i, j;
//	int arr[100][100];
//	int sum = 0;
//	scanf("%d %d", &m, &n);  //�����к���
//	for (i = 0; i<m * 2; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);   //�����������ؾ���
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (arr[i][j] == arr[i + m][j])   //ѭ���������ؾ���
//				sum++;
//		}
//	}
//	printf("%.2f\n", (float)sum / ((float)m*(float)n)*100.0);  //��ӡ����
//	return 0;
//}



//��ɸѡ��������������ӡ�����е�0�ĸ���
//#include<stdio.h>
//int main()
//{
//	int num, i, j, sum = 0;
//	int arr[100];
//	while (~scanf("%d", &num))      //�������������ķ�Χ
//	{
//		for (i = 2; i <= num; i++)  //���һά��������
//			arr[i - 2] = i;
//
//		for (i = 0; i<num - 1; i++)  //ɸѡ������
//		{
//			if (arr[i] == 0)         //������������0��ֱ��continue����������ѭ��
//				continue;
//			for (j = i + 1; j < num - 1; j++)
//			{
//				if (arr[j] == 0)     //ͬ�ϣ�����0��continue.
//					continue;
//				if (arr[j] % arr[i] == 0)
//					arr[j] = 0;
//			}
//		}
//		for (i = 0; i < num - 1; i++)
//		{
//			if (arr[i] != 0)
//				printf("%d ", arr[i]); //��ӡ����
//			else
//				sum++;               //���������е�0�ĸ�����
//		}
//		printf("\n%d\n", sum);
//	}
//	return 0;
//}



//����һ���������飬������һ����Ҫ��������������Ԫ�ز��������
//#include<stdio.h>
//int main()
//{
//	int arr[50];
//	int i, num, ret;
//	scanf("%d", &num);           //������������ĸ���
//	for (i = 0; i<num; i++)
//		scanf("%d", &arr[i]);    //������������
//	scanf("%d", &ret);           //������Ҫ�����Ԫ��
//	for (i = num-1; i>=0; i--)   //�Ӻ���ǰ�������飬��������Ԫ�ؽ��бȽ�
//	{
//		if (arr[i]>ret)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = ret;
//			break;
//		}
//		if (i == 0)
//		{
//			arr[i] = ret;
//			break;
//		}
//	}
//	for (i = 0; i<num + 1; i++)  //��ӡ����������
//		printf("%d ", arr[i]);
//	return 0;
//}



//�����߸�������ȥ����߷ֺ���ͷֺ���ƽ���֣����С���㱣����λ
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int arr[7];
//	int temp;
//	float sum = 0;
//	for (i = 0; i<7; i++)          //����7�����ηŵ�arr������
//		scanf("%d", &arr[i]);
//	for (i = 0; i<6; i++)          //ð�������ų�����
//	{
//		for (j = 0; j<6 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 1; i<6; i++)          //������һ��Ԫ�غ����һ��Ԫ�أ������ۼ�
//	{
//		sum += arr[i];
//	}
//	printf("%.2f\n", sum / 5);     //�ۼӺ���ƽ��
//	return 0;
//}




//��ӡ������
//#include<stdio.h>
//int main()
//{
//	int num, i, j;
//	while (~scanf("%d", &num))       //��������
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