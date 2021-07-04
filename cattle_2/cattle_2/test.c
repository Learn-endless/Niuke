#define _CRT_SECURE_NO_WARNINGS 1
//求像素点
//#include<stdio.h>
//int main()
//{
//	int m, n, i, j;
//	int arr[100][100];
//	int sum = 0;
//	scanf("%d %d", &m, &n);  //输入行和列
//	for (i = 0; i<m * 2; i++)
//	{
//		for (j = 0; j < n; j++)
//			scanf("%d", &arr[i][j]);   //输入具体的像素矩阵
//	}
//	for (i = 0; i<m; i++)
//	{
//		for (j = 0; j<n; j++)
//		{
//			if (arr[i][j] == arr[i + m][j])   //循环遍历像素矩阵
//				sum++;
//		}
//	}
//	printf("%.2f\n", (float)sum / ((float)m*(float)n)*100.0);  //打印精度
//	return 0;
//}



//用筛选法求质数，并打印数组中的0的个数
//#include<stdio.h>
//int main()
//{
//	int num, i, j, sum = 0;
//	int arr[100];
//	while (~scanf("%d", &num))      //输入所求质数的范围
//	{
//		for (i = 2; i <= num; i++)  //填充一维数组内容
//			arr[i - 2] = i;
//
//		for (i = 0; i<num - 1; i++)  //筛选法遍历
//		{
//			if (arr[i] == 0)         //在数组中碰到0，直接continue，跳过本次循环
//				continue;
//			for (j = i + 1; j < num - 1; j++)
//			{
//				if (arr[j] == 0)     //同上，碰到0，continue.
//					continue;
//				if (arr[j] % arr[i] == 0)
//					arr[j] = 0;
//			}
//		}
//		for (i = 0; i < num - 1; i++)
//		{
//			if (arr[i] != 0)
//				printf("%d ", arr[i]); //打印质数
//			else
//				sum++;               //计算数组中的0的个数。
//		}
//		printf("\n%d\n", sum);
//	}
//	return 0;
//}



//输入一个升序数组，再输入一个需要插入的数，输出将元素插入的数组
//#include<stdio.h>
//int main()
//{
//	int arr[50];
//	int i, num, ret;
//	scanf("%d", &num);           //输入升序数组的个数
//	for (i = 0; i<num; i++)
//		scanf("%d", &arr[i]);    //输入升序数组
//	scanf("%d", &ret);           //输入需要插入的元素
//	for (i = num-1; i>=0; i--)   //从后往前遍历数组，并与所插元素进行比较
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
//	for (i = 0; i<num + 1; i++)  //打印出入后的数组
//		printf("%d ", arr[i]);
//	return 0;
//}



//输入七个整数，去掉最高分和最低分后求平均分，输出小数点保留两位
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	int arr[7];
//	int temp;
//	float sum = 0;
//	for (i = 0; i<7; i++)          //输入7个整形放到arr数组中
//		scanf("%d", &arr[i]);
//	for (i = 0; i<6; i++)          //冒泡排序，排成升序
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
//	for (i = 1; i<6; i++)          //跳过第一个元素和最后一个元素，其余累加
//	{
//		sum += arr[i];
//	}
//	printf("%.2f\n", sum / 5);     //累加后求平均
//	return 0;
//}




//打印正方形
//#include<stdio.h>
//int main()
//{
//	int num, i, j;
//	while (~scanf("%d", &num))       //多组输入
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




//打印K型
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




//打印菱形
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




//打印直角三角形
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
//	while (scanf("%d%d", &a, &b)!=EOF) //等价于~scanf("%d%d",&a,&b)
//	{                                  //EOF:-1
//		if (a>b)                       //scanf中输入ctrl+z时，return -1.
//			printf("%d>%d\n", a, b);   //-1按位取反为0.
//		else if (a<b)                  // -1     1000 0000 0000 0000 0000 0000 0000 0001 (补码)
//			printf("%d<%d\n", a, b);   //        1000 0000 0000 0000 0000 0000 0000 0000 (反码)
//		else                           //        1111 1111 1111 1111 1111 1111 1111 1111 (原码)
//			printf("%d=%d\n", a, b);   // ~(-1)  0000 0000 0000 0000 0000 0000 0000 0000 (按位取反)
//	}
//	return 0;
//}