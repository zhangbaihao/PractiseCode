// 普及组.cpp: 定义控制台应用程序的入口点。
//C语言中int的取值范围为：-2147483648 ~ 2147483647
//int 4B char 1B double 8B float 4B long 4B long long 8B
/*-------------------------------------------------------重要常用---------------------------------------------------------------------*/
//qsort(int *a,int len,sizeof(int),cmp)函数 头文件为stdlib.h。
//#include"stdlib.h"
//int cmp1(const void*a, const void*b)
//{
//	return *(int *)a - *(int*)b;//升序排序
//}
//int cmp2(const void*a, const void*b)
//{
//	return *(int*)b - *(int*)a;//降序排序
//}
//快速排序优化
//void quicksort(int a[], int left, int right)
//{
//	int i, j, t, temp;
//	i = left;
//	j = right;
//	temp = a[(i + j) / 2];//基数取中
//	while (i <= j)
//	{
//		while (a[j] > temp)//找到比基数小时j停止
//			j--;
//		while (a[i] < temp)//找到比基数大时i停止
//			i++;
//		if (i <= j)//满足条件交换
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//			i++;
//			j--;
//		}
//	}
//	if (left<j)//j在left右边，需要处理基数左边的序列
//		quicksort(a, left, j);
//	if (i<right)//i在right左边，需要处理基数右边的序列
//		quicksort(a, i, right);
//}
//	//冒泡排序
//	
//			for (int i = 0; i<len-1; i++)
//			for (int j = 0; j <len-i-1; j++)
//			{
//				if (b[j]>b[j+1])
//				{
//					int tmp = b[j];
//					b[j] = b[j+1];
//					b[j] =tmp;
//				}	
//			}
//void sort(int arr[], int left, int right, int temp[])
//{
//	if (left<right)
//	{
//		int mid = (left + right) / 2;
//		sort(arr, left, mid, temp);//左边归并排序，使得左子序列有序
//		sort(arr, mid + 1, right, temp);//右边归并排序，使得右子序列有序
//		merge(arr, left, mid, right, temp);//将两个有序子数组合并操作
//	}
//}
//void merge(int arr[], int left, int mid, int right, int temp[])
//{
//	int i = left;//左序列指针
//	int j = mid + 1;//右序列指针
//	int t = 0;//临时数组指针
//	while (i <= mid && j <= right)
//	{
//		if (arr[i] <= arr[j])
//			temp[t++] = arr[i++];
//		else
//			temp[t++] = arr[j++];
//	}
//	while (i <= mid) {//将左边剩余元素填充进temp中
//		temp[t++] = arr[i++];
//	}
//	while (j <= right) {//将右序列剩余元素填充进temp中
//		temp[t++] = arr[j++];
//	}
//	t = 0;
//	//将temp中的元素全部拷贝到原数组中
//	while (left <= right)
//	{
//		arr[left++] = temp[t++];
//	}
//}
////去数组a中重复数字
//for (int i = 1; i <= n - 1; i++)
//{
//	if (a[i] == a[i + 1])
//	{
//		for (int j = i; j < n; j++)
//			a[j] = a[j + 1];
//		n--;
//		i--;
//	}
//}
//		for (int i = 0; i<len1; i++)//对str1字符串大小写转换 
//		if (str1[i] >= 'A' && str1[i] <= 'Z')
//			str1[i] += -'A' + 'a';
//	scanf("%[^\n]", str2);                 //str2字符中带空格输入方式     否则scanf遇到" "暂停
//	int *a = (int *)malloc(sizeof(int)*n); //malloc分配数组a 大小 
//#include"stdlib.h" //malloc函数使用
//	memset(f, 0, sizeof(f)); memset函数 将数组f 全部初始化为0 头文件string.h
//第一个是需要初始化的数组，第二个是初始化的值，第三个是初始化的数量*单位字节（例如 char是1，int是4，long long是8）
//   sn = sn + 1.0 / i;                    // 1.0/i 才能得出小数 1/i不行
/*---------------------------------------------------------重要常用------------------------------------------------------------------*/
#include"stdafx.h"
#include "stdlib.h"
//P1003 铺地毯
//#include"stdio.h"
//int main()
//{
//	int n,x,y,tag=-1;
//	int m[10001][4];
//	scanf("%d", &n);
//	for (int i = 1; i <=n; i++)
//		for (int j = 0; j < 4; j++)
//			scanf("%d", &m[i][j]);
//	scanf("%d %d", &x, &y);
//	for (int i = 1; i <=n; i++)
//	{
//		
//		if (x >= m[i][0] && x <= m[i][0] + m[i][2]&&y >= m[i][1] && y <= m[i][1]+m[i][3])
//			tag = i;
//	}
//	printf("%d", tag);
//	system("pause");
//    return 0;
//}
//P1067 多项式输出
	//#include"stdio.h"
	//int main()
	//{
	//	int n;
	//	int a[101];
	//	scanf("%d", &n);
	//	for (int i = 1; i <= n + 1; i++)
	//	scanf("%d", &a[i]);
	//	for (int i = 1; i <= n; i++)
	//	{
	//		if (i == 1)//An第一项
	//		{
	//			
	//			if (a[i] >1)
	//				printf("%dx^%d", a[i], n - i + 1);
	//			else if(a[i]<-1)
	//				printf("%dx^%d", a[i], n - i + 1);
	//			else if(a[i]==-1)
	//				printf("-x^%d", n - i + 1);
	//			else if (a[i] ==1)
	//				printf("x^%d", n - i + 1);
	//		}
	//		else
	//		{
	//			if (n - i + 1 != 1)
	//			{
	//				if (a[i] >1)
	//					printf("+%dx^%d", a[i], n - i + 1);
	//				else if (a[i]<-1)
	//					printf("%dx^%d", a[i], n - i + 1);
	//				else if (a[i] == -1)
	//					printf("-x^%d", n - i + 1);
	//				else if(a[i]==1)
	//					printf("+x^%d", n - i + 1);
	//			}
	//			else//x 一次幂
	//			{
	//				if (a[i] >1)
	//					printf("+%dx", a[i]);
	//				else if (a[i]<-1)
	//					printf("%dx", a[i]);
	//				else if (a[i] == -1)
	//					printf("-x");
	//				else if (a[i] == 1)
	//					printf("+x");
	//			}
	//		}
	//	}
	//	if (a[n + 1] > 0)// 处理常数项
	//	printf("+%d", a[n + 1]);
	//	else
	//	{
	//		if(a[n + 1] != 0)
	//		printf("%d", a[n + 1]);
	//	}
	//	
	//	system("pause");
	//	return 0;
	//}
//P1540 机器翻译
//#include"string.h"
//#include"stdio.h"
//int main()
//{
//	bool ok = false;
//	int M, N, sum = 0;
//	int a[101] , b[1001];
//	memset(a, -1, 101 * 4);//初始化数组（全部为-1）
//	scanf("%d %d", &M, &N);
//	if (N != 0&&M!=0) 
//	{
//		for (int i = 1; i <= N; i++)
//			scanf("%d", &b[i]);
//		for (int i = 1; i <= N; i++)
//		{
//			ok = false;
//			for (int j = 1; j <= M; j++)
//			{
//				if (a[j] == b[i])
//					ok = true;
//			}
//			if (ok == false)
//			{
//				if (sum >= M)//需要置换出内存中的数据
//				{
//					for (int k = 1; k < M; k++)
//					a[k] = a[k + 1];
//					a[M] = b[i];
//				}
//				else
//				{
//					a[sum+1] = b[i];
//				}
//				sum++;
//			}
//		}
//	}
//	if (M == 0)
//	printf("%d", N);
//	else
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//P1023 税收与补贴问题
//#include"stdio.h"
//#include"stdlib.h"
//int cmp1(const void*a, const void*b)
//{
//	return *(int *)a - *(int*)b;//升序排序
//}
//int cmp2(const void*a, const void*b)
//{
//	return *(int*)b - *(int*)a;//降序排序
//}
//int x, x1, a[10001], b[10001], change, t = 1, i, j, s, flag1, flag2, n1, n2, flag;
//int main()
//{
//	scanf("%d%d%d", &x, &a[0], &b[0]);//输入预期价，以及成本、成本销量
//	while (a[t - 1] != -1)//输入
//	{
//		scanf("%d%d", &a[t], &b[t]);
//		t++;
//	}
//	t--;
//	qsort(a, t, sizeof(int), cmp1);
//	qsort(b, t, sizeof(int), cmp2);
//	scanf("%d", &change);//输入变化量
//	s = t;
//	for (i = 1; i<t; i++)
//		if (a[i] - a[i - 1]>1)
//			for (j = a[i - 1] + 1; j<a[i]; j++)//因为相邻价格之间销量呈线性增长，则用一个循环把在输入范围内所有的价格销量的可能性都存储在数组里
//			{
//				a[s] = j;
//				b[s] = b[i - 1] - (b[i - 1] - b[i]) / (a[i] - a[i - 1])*(j - a[i - 1]);
//				s++;
//			}
//	qsort(a, s, sizeof(int), cmp1);
//	qsort(b, s, sizeof(int), cmp2);
//	for (i = 1; i<s; i++)//找到市场预期价
//		if (a[i] == x)
//		{
//			x1 = b[i];
//			flag = 1;
//		}
//	if (flag == 0)//如果没有找到，则市场预期价大于输入价格的最大值
//		x1 = b[s - 1] - (x - a[s - 1])*change;
//	for (i = 0;; i++)//精髓循环，i表示补贴或者收税
//	{
//		flag1 = 0;//标记
//		flag2 = 0;
//		n1 = (x - a[0] + i)*x1;
//		n2 = (x - a[0] - i)*x1;//记录对于补贴或者收税之后市场预期价带来的总利润
//		for (j = 1;; j++)
//		{
//			if (j >= s)//如果价格超过了原有的范围，则不断+change
//			{
//				b[j] = b[j - 1] - change;
//				a[j] = a[j - 1] + 1;
//			}
//			if (b[j] <= 0)break;//当销量低于等于0时，进入下一个i循环
//			if (n1<(a[j] - a[0] + i)*b[j])flag1 = 1;//如果利润低于收税或补贴后的利润，做标记
//			if (n2<(a[j] - a[0] - i)*b[j] || n2 <= 0)flag2 = 1;//如果收税之后利润小于零，抛弃    
//		}
//		if (flag1 == 0 && flag2 == 1)break;
//		else if (flag1 == 1 && flag2 == 0)break;
//		else if (flag1 == 0 && flag2 == 0)break;    //这些情况说明找到了你需要的i
//		else if (i == b[0] * 10) { flag1 = -2; break; }//我也不知道范围是多少，反正成本i=销量*10够大了，洛谷数据能过
//	}
//	if (flag1 == 1 && flag2 == 0)printf("-%d", i);
//	else if (flag1 == 0 && flag2 == 1)printf("%d", i);
//	else if (flag1 == 0 && flag2 == 0)printf("%d", i);
//	else if (flag1 == -2)printf("NO SOLUTION");//输出(o゜▽゜)o☆[BINGO!]
//	return 0;
//}
//P1031 均分纸牌
//#include"stdio.h"
//#include"string.h"
//int i,j,n,m,sum=0,hand=0;
//int N[101],flag[101];
//int main()
//{
//	memset(flag,0,4);
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &N[i]);
//		sum = N[i] + sum;
//	}
//	m = sum / n;//每堆纸牌最终数目
//	for (i = 0; i < n; i++)
//	{
//		if (N[i] > m)
//			flag[i] = 1;
//		else if (N[i] < m)
//			flag[i] = -1;
//		else if (N[i] == m)
//			flag[i] = 0;
//	}
//	j = n - 1;
//	for (i = 0; i < n; i++)
//	{
//		if (i == n - 1 && flag[i] == 0)
//			break;
//		if (flag[i] == 1)//牌多了
//		{
//			N[i+1]= N[i + 1] + (N[i] - m);//右移动
//			N[i] = m;
//			flag[i] = 0;
//			if (N[i + 1] > m)
//				flag[i + 1] = 1;
//			else if (N[i + 1] < m)
//				flag[i + 1] = -1;
//			else if (N[i+1] == m)
//				flag[i+1] = 0;
//			hand++;
//		}
//		else if (flag[i] == -1)//牌少了
//		{
//			N[i+1] = N[i+1] -(m-N[i]);//需要左移动
//			N[i] = m;
//			flag[i] = 0;
//			if (N[i + 1] > m)
//				flag[i + 1] = 1;
//			else if(N[i + 1] < m)
//				flag[i + 1] = -1;
//			else if (N[i+1] == m)
//				flag[i+1] = 0;
//			hand++;
//		}
//	
//	}
//	printf("%d", hand);
//	system("pause");
//	return 0;
//}
 //P1177 【模板】快速排序
//#include"stdio.h"
////快速排序优化
//void quicksort(int a[], int left, int right)
//{
//	int i, j, t, temp;
//	i = left;
//	j = right;
//	temp = a[(i+j)/2];//基数取中
//	while (i <= j)
//	{
//		while (a[j] > temp )//找到比基数小时j停止
//			j--;
//		while (a[i] < temp)//找到比基数大时i停止
//			i++;
//		if (i<=j)//满足条件交换
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//			i++; 
//			j--;
//		}
//	}
//	if(left<j)//j在left右边，需要处理基数左边的序列
//	quicksort(a,left, j);
//	if(i<right)//i在right左边，需要处理基数右边的序列
//	quicksort(a,i, right);
//}
//int main()
//{
//	int a[100000];
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i<=n; i++)
//	scanf("%d", &a[i]);
//	quicksort(a, 1, n);
//	for (int i = 1; i<=n; i++)
//	printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}
//P1059 明明的随机数      
//#include"stdio.h"
//int a[101];
//void quicksort(int left, int right)
//{
//	int temp, t, i, j;
//	i = left;
//	j = right;
//	temp = a[(i + j) / 2];
//	while (i <= j)
//	{
//		while (a[j] > temp)j--;
//		while (a[i] < temp)i++;
//		if (i <= j)
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//			i++;
//			j--;
//		}
//	}
//	if (left < j)quicksort(left, j);
//	if (i < right)quicksort(i, right);
//
//}
//int main()
//{
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	quicksort(1, n);
//	for (int i = 1; i <= n-1; i++)
//	{
//		if (a[i] == a[i + 1])
//		{
//			for (int j = i; j < n; j++)
//				a[j] = a[j + 1];
//			n--;
//			i--;
//		}
//	}
//	printf("%d\n", n);
//	for (int i = 1; i <= n; i++)
//		printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}
//P1068 分数线划定
//#include"stdio.h"
//int i, j, n,m, temp, t,k;
//int sum = 0;
//int a[5001], b[5001];
//void quicksort1(int left, int right)
//{
//	i = left;
//	j = right;
//	temp = b[(i + j) / 2];
//	while (i <= j)
//	{
//		while (b[j] < temp)j--;
//		while (b[i] > temp)i++;
//		if (i <= j)
//		{
//			t = b[i];
//			b[i] = b[j];
//			b[j] = t;
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//			i++;
//			j--;
//		}
//	}
//	if (j > left)quicksort1(left, j);
//	if (i < right)quicksort1(i, right);
//}
//int main()
//{
//	scanf("%d %d", &n, &m);
//	for (i = 1; i <= n; i++)
//	scanf("%d %d", &a[i], &b[i]);
//	quicksort1(1, n);
//	k = m * 1.5;//原定录取人数
//	for (int i = 1; i <= n; i++)//实际录取人数
//	{
//		if (b[i] >= b[k])
//			sum++;
//	}
//	//printf("k=%d sum=%d\n", k, sum);
//	for(i=1;i<=n-1;i++)//将分数相同的按序号从小到大
//	for (j = i + 1; j <= n; j++)
//	{
//		if (b[i] == b[j] && a[i] > a[j])
//		{
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//		}
//	}
//	printf("%d %d\n", b[k],sum );
//	for (int i = 1; i <= n; i++)
//	{	
//		if (b[i] >= b[k])
//		printf("%d %d\n", a[i], b[i]);
//	}
//	system("pause");
//	return 0;
//}
//P1781 宇宙总统
//#include"stdio.h"
//#include"string.h"
//int main()
//{
//	int n,number=1;
//	int max = 0;
//	scanf("%d", &n);
//	char a[101];
//	char b[101];
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%s", &a);
//		int len = strlen(a);
//		if (len > max)
//		{
//			number = i;
//			max = len;
//			sprintf(b, "%s", a);
//			continue;
//		}
//		else if(len == max)
//		{
//			for (int j = 0; j < len; j++)
//			{
//				if (a[j] > b[j])
//				{
//					number = i;
//					max = len;
//					sprintf(b, "%s", a);
//					break;
//				}
//				else if (a[j] < b[j])
//				break;
//			}
//		}
//	}
//	printf("%d\n",number);
//	printf("%s\n",b);
//	system("pause");
//	return 0;
//}
// P1583 魔法照片
//#include"stdio.h"
//#include"stdlib.h"
//int n, k;
//int E[11];
//struct person {
//	int w;
//	int id;
//}p[20001];
//int cmp(const void *c, const void *d) {
//	struct person *a = (struct person*)c;
//	struct person *b = (struct person*)d;
//	if (a->w != b->w)return b->w>a->w;//从大到小排序 
//	return a->id>b->id;//序号小优先 
//}//结构体排序 
//int main()
//{
//	scanf("%d %d", &n, &k);
//	for (int i = 1; i <= 10; i++)//对应1-10类不同附加权值
//		scanf("%d", &E[i]);
//	for (int i = 0; i <n; i++)
//	{
//		scanf("%d", &p[i].w);
//		p[i].id = i + 1;
//	}
//	qsort(p, n, sizeof(p[0]), cmp);//第一次排序将p类人按权值大到小排序
//	for (int i = 0; i <n; i++)
//	{
//		p[i].w = p[i].w + E[i % 10 + 1];//附加权值
//	}
//	qsort(p, n, sizeof(p[0]), cmp);//第二次排序
//	for (int i = 0; i <k; i++)
//		printf("%d ", p[i].id);
//	system("pause");
//	return 0;
//}
//P1051 谁拿了最多奖学金
//#include"stdio.h"
//#include"stdlib.h"
//#include"stdbool.h"
//struct student {
//	char name[21];
//	int id;
//	int f1;
//	int f2;
//	char gb;
//	char xb;
//	int lw;
//	int bonuses[5];
//	int bonuses_sum;
//}p[101];
//int cmp(const void *a, const void *b)
//{
//	struct student *c = (struct student*)a;
//	struct student *d = (struct student*)b;
//	if (c->bonuses_sum != d->bonuses_sum)
//	return d->bonuses_sum - c->bonuses_sum;
//	else
//	return c->id - d->id;
//}
//int main()
//{
//	int n,sum=0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %c %c %d", &p[i].name, &p[i].f1, &p[i].f2, &p[i].gb, &p[i].xb, &p[i].lw);
//		p[i].id = i + 1;
//	}
//	
//	//for (int i = 0; i < n; i++)
//	//printf("%s %d %d %c %c %d\n", p[i].name, p[i].f1, p[i].f2, p[i].gb, p[i].xb, p[i].lw);
//	for (int i = 0; i < n; i++)
//	{
//		p[i].bonuses_sum = 0;
//		if (p[i].f1 > 80 && p[i].lw >= 1)
//		{
//			p[i].bonuses[0] = 8000;
//		}
//		if (p[i].f1 > 85 && p[i].f2>80)
//		{
//			p[i].bonuses[1] = 4000;
//		}
//		if (p[i].f1 > 90)
//		{
//			p[i].bonuses[2] = 2000;
//		}
//		if (p[i].f1 > 85&&p[i].xb=='Y')
//		{
//			p[i].bonuses[3] = 1000;
//		}
//		if (p[i].f2 > 80 && p[i].gb == 'Y')
//		{
//			p[i].bonuses[4] = 850;
//		}
//		for (int j = 0; j < 5; j++)
//		p[i].bonuses_sum+=p[i].bonuses[j];
//		sum += p[i].bonuses_sum;
//	}
//	qsort(p, n, sizeof(p[0]), cmp);
//	//for (int i = 0; i < n; i++)
//	//printf("%s %d %d %c %c %d sum1=%d\n", p[i].name, p[i].f1, p[i].f2, p[i].gb, p[i].xb, p[i].lw,p[i].bonuses_sum,sum);
//	printf("%s\n%d\n%d\n", p[0].name,p[0].bonuses_sum,sum);
//	system("pause");
//	return 0;
//}
//P1093 奖学金
//#include"stdio.h"
//#include"stdlib.h"
//struct student {
//	int Chinese;
//	int Math;
//	int English;
//	int id;
//	int sum;
//}p[301];
//int cmp(const void *c, const void *d)
//{
//	struct student *a = (struct student*)c;
//	struct student *b = (struct student*)d;
//	if (a->sum != b->sum)
//		return b->sum - a->sum;
//	if (a->Chinese != b->Chinese)
//		return b->Chinese - a->Chinese;
//	return a->id - b->id;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &p[i].Chinese, &p[i].Math, &p[i].English);
//		p[i].id = i + 1;
//		p[i].sum = p[i].Chinese + p[i].Math + p[i].English;
//	}
//	//printf("sizeof(p[0])=%d\n", sizeof(p[0]));
//	qsort(p, n, sizeof(p[0]), cmp);
//	for (int i = 0; i < 5; i++)
//		printf("%d %d\n", p[i].id, p[i].sum);
//	//system("pause");
//	return 0;
//}
//P1309 瑞士轮 //80 
//#include"stdio.h"
//#include"stdlib.h"
//struct person {
//	int id;
//	int score;
//	int w;
//}p[200001],h[200001];
//int cmp(const void *c, const void *d)
//{
//	struct person *a = (struct person*)c;
//	struct person *b = (struct person*)d;
//	if(a->score!=b->score)
//	return b->score - a->score;
//	else
//	return a->id - b->id;
//}
//
//void merge(struct person arr[], int left, int mid, int right, struct person temp[])
//{
//		int i = left;//左序列指针
//		int j = mid + 1;//右序列指针
//		int t = 0;//临时数组指针
//		while (i <= mid && j <= right) 
//		{
//			if (arr[i].score >arr[j].score)
//			temp[t++] = arr[i++];
//			else if(arr[i].score ==arr[j].score&&arr[i].id < arr[j].id)
//			temp[t++] = arr[i++];
//			else 
//			temp[t++] = arr[j++];
//		}
//		while (i <= mid) {//将左边剩余元素填充进temp中
//			temp[t++] = arr[i++];
//		}
//		while (j <= right) {//将右序列剩余元素填充进temp中
//			temp[t++] = arr[j++];
//		}
//		t = 0;
//		//将temp中的元素全部拷贝到原数组中
//		while(left <= right)
//		{
//			arr[left++] = temp[t++];
//		}
//}
//void sort(struct person arr[], int left, int right, struct person temp[])
//{
//	if (left<right)
//	{
//		int mid = (left + right) / 2;
//		sort(arr, left, mid, temp);//左边归并排序，使得左子序列有序
//		sort(arr, mid + 1, right, temp);//右边归并排序，使得右子序列有序
//		merge(arr, left, mid, right, temp);//将两个有序子数组合并操作
//	}
//}
//int main()
//{
//	int n, r, q;
//	scanf("%d %d %d", &n, &r, &q);
//	for (int i = 0; i < 2 * n; i++)
//	{
//		scanf("%d", &p[i].score);
//		p[i].id = i + 1;
//	}
//	for (int i = 0; i < 2 * n; i++)
//	scanf("%d", &p[i].w);
//	qsort(p, 2 * n, sizeof(p[0]), cmp);
//	//printf("id%d=%d id%d=%d id%d=%d id%d=%d\n", p[0].id, p[0].score, p[1].id, p[1].score, p[2].id, p[2].score, p[3].id, p[3].score);
//	for (int i = 0; i < r; i++)
//	{	
//		for (int j = 0; j < n*2-1; j=j+2) 
//		{
//			if (p[j].w > p[j + 1].w)
//			p[j].score++;
//			else
//			p[j + 1].score++;
//			
//			//qsort(p, 2 * n, sizeof(p[0]), cmp);//超时
//		}
//		//printf("比赛后 id%d=%d id%d=%d id%d=%d id%d=%d\n", p[0].id,p[0].score, p[1].id, p[1].score, p[2].id, p[2].score, p[3].id, p[3].score);
//		sort(p, 0, 2 * n - 1, h);
//		//printf("排序后 id%d=%d id%d=%d id%d=%d id%d=%d\n", p[0].id, p[0].score, p[1].id, p[1].score, p[2].id, p[2].score, p[3].id, p[3].score);
//	}
//	//qsort(p, 2 * n, sizeof(p[0]), cmp);
//	//printf("最后 id%d=%d id%d=%d id%d=%d id%d=%d\n", p[0].id, p[0].score, p[1].id, p[1].score, p[2].id, p[2].score, p[3].id, p[3].score);
//	printf("%d\n", p[q-1].id);
//	system("pause");
//	return 0;
//}

//P1090 合并果子
//#include"stdio.h"
//#include"stdlib.h"
//int cmp(const void *a, const void *b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int n,temp;
//	long long k=0,sum=0;
//	int a[20001];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	scanf("%d", &a[i]);
//	qsort(a, n, sizeof(int), cmp);
//	for (int i = 0; i < n-1; i++)
//	{
//		temp = a[i]+a[i+1];
//		a[i] = 0;
//		a[i + 1] = 0;
//		sum = temp+sum;
//		int find = 0;
//		for (int j = i; j < n; j++)//插入temp到对应的位置 j前的都左移动一位
//		{
//			if (temp <= a[j])
//			{
//				for (int k = i+1; k<=j; k++)
//				a[k-1] = a[k];
//				a[j-1] = temp;
//				find = 1;
//				break;
//			}
//		}
//		if (find == 0)//没找到说明temp为最大的一项 全部左移动一位
//		{
//			for (int k = i + 1; k <= n-1; k++)
//			a[k - 1] = a[k];
//			a[n - 1] = temp;
//		}
//	}
//	printf("%lld", sum);
//	system("pause");
//	return 0;
//}
//P1181 数列分段Section I
//#include"stdio.h"
//#include"stdlib.h"
//int main()
//{
//	int a[100001];
//	int n, m, sum = 0,k = 1;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i <n; i++)
//		scanf("%d", &a[i]);
//	for (int i = 0; i <n; i++)
//	{
//		if (sum + a[i] <= m)
//		{
//			sum = sum + a[i];
//			//printf("i=%d sum=%d\n", i, sum);
//		}
//		else
//		{
//			k++;
//			sum = a[i];
//		}
//	}
//	printf("%d", k);
//	system("pause");
//	return 0;
//}
//P1208 [USACO1.3]混合牛奶 Mixing Milk
//#include"stdio.h"
//#include"stdlib.h"
//struct Marry {
//	int cost;
//	int number;
//}p[5001];
//int cmp(const void *c, const void *d)
//{
//	struct Marry *a = (struct Marry*)c;
//	struct Marry *b = (struct Marry*)d;
//	return a->cost - b->cost;
//}
//int main()
//{
//	int n, m;
//	int sum_number = 0, sum_cost = 0;
//	scanf("%d %d", &n, &m);
//	for (int i = 0;i < m; i++)
//	scanf("%d %d", &p[i].cost, &p[i].number);
//
//	qsort(p, m, sizeof(p[0]), cmp);
//	int cha = 0;
//	for (int i = 0; sum_number<n; i++)
//	{
//		if (p[i].number + sum_number <=n)
//		{
//			sum_cost +=p[i].number*p[i].cost;
//			sum_number+= p[i].number;
//		}
//		else
//		{
//			cha = n - sum_number;
//			sum_cost = sum_cost + cha * p[i].cost;
//			break;
//		}
//	}
//	printf("%d", sum_cost);
//	system("pause");
//	return 0;
//}
//P1219 八皇后
//#include"stdio.h"
//int vis[3][26],a[14],tot;
////vis[0][i]记录i列是否有棋子  v[1][cur - i + n]记录主对角线 v[1][cur + i]记录副对角线
//int n;
//void search(int cur)
//{
//	int i, j;
//	if (cur == n)//每一行都有棋子
//	{
//		tot++;
//		if (tot <=3)//输出前三种可能
//		{
//			for (i = 0; i < n; i++)
//			printf("%d ", a[i]);
//			printf("\n");
//		}
//	}
//	else
//	{
//		for (i = 0; i<n; i++)//搜索每列可以放的位置
//		{
//			if (!vis[0][i] && !vis[1][cur - i + n] && !vis[2][cur + i])//确保行列 主副对角线没棋子
//			{
//				vis[0][i] = 1;
//				vis[1][cur - i + n] = 1;
//				vis[2][cur + i] = 1;
//				a[cur] = i+1;//记录该第cur行 第i+1列放了棋子
//				search(cur + 1);//搜索下一行
//				//改回辅助的全局变量 没找到符合的 把上一个棋子拔了
//				vis[0][i] = 0;
//				vis[1][cur - i + n] = 0;
//				vis[2][cur + i] = 0;
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d", &n);
//	search(0);
//	printf("%d\n", tot);
//	system("pause");
//	return 0;
//}
// P1019 单词接龙
//#include"stdio.h"
//#include"string.h"
//#include"stdbool.h"
//int n;
//char first[1];//存储字符串开头
//int max = 0;
//struct Word {
//	char word[20];
//	int flag;
//}f[21];
//bool check(char a[], char b[], int k)//比较a b 两个单词能不能进行K位拼接
//{
//
//	int lens = strlen(a);
//	//if (k == lens &&lens!=1)
//	//	return false;
//	for (int i = 0; i < k; i++)
//	{
//		if (a[lens - k + i] != b[i])
//			return false;
//	}
//	return true;
//}
//char *add(char a[], char b[], int k)//拼接操作，把a接到b上
//{
//	char c[1000] = { 0 };
//	int lena = strlen(a);
//	int lenb = strlen(b);
//	for (int i = 0; i < lena; i++)
//		c[i] = a[i];
//	for (int i = 0; i < lenb; i++)
//		c[lena - k + i] = b[i];
//	return c;
//}
//void search(char *now)
//{
//	int x = strlen(now);
//	if (max < x)
//		max = x;
//	for (int i = 0; i < n; i++)
//	{
//		if (f[i].flag >= 2)
//			continue;
//		int max_len = strlen(f[i].word);
//		for (int j = 1; j <= max_len; j++)
//		{
//			if (check(now, f[i].word, j))
//			{
//				char temp[1000] = { 0 };
//				sprintf(temp, "%s", add(now, f[i].word, j));
//				if (temp == now)
//					continue;
//				f[i].flag++;
//				//printf("temp=%s\n", temp);
//				search(temp);
//				f[i].flag--;
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%s", f[i].word);
//	scanf("%s", first);
//	search(first);
//	printf("%d\n", max);
//		system("pause");
//	return 0;
//}
//P1605 迷宫
//#include"stdio.h"
//#include"string.h"
//int n, m, t, sum = 0;
//int sx, sy, fx, fy;
//int map_flag[6][6];
//int xt, yt;
//void find(int x, int y)
//{
//	if (x < 1 || x >n || y <1 || y>m || map_flag[x][y] == 1) return;
//	if (x == fx && y == fy)
//	{
//		sum++;
//		return;
//	}
//	else
//	{
//		map_flag[x][y] = 1;
//		find(x + 1, y);
//		find(x - 1, y);
//		find(x, y + 1);
//		find(x, y - 1);
//		map_flag[x][y] = 0;
//	}
//
//}
//int main()
//{
//	scanf("%d %d %d", &n, &m, &t);
//	scanf("%d %d %d %d", &sx, &sy, &fx, &fy);
//	for (int i = 1; i <= t; i++)
//	{
//		scanf("%d %d", &xt, &yt);
//		map_flag[xt][yt] = 1;
//	}
//	find(sx, sy);
//	printf("%d\n", sum);
//	//system("pause");
//	return 0;
//}
// P1088 火星人
//#include"stdio.h"
//int n,m;
//int main()
//{
//	scanf("%d", &n);
//	scanf("%d",&m);
//
//	return 0;
//}


//P1147 连续自然数和
//#include"stdio.h"
//int m,k,n;
//int sum=0;
//void find()
//{
//	for (int i = 1; i < m;i++)
//	{
//		k = i;
//		while (sum < m)
//		{
//			//printf("sum=%d k=%d\n", sum, k);
//			sum = sum + k;
//			if (sum == m)
//			printf("%d %d\n", i, k);
//			k++;
//		}
//		sum = 0;
//	}
//
//
//}
//int main()
//{
//	scanf("%d", &m);
//	find();
//	system("pause");
//	return 0;
//}


//P1029 最大公约数和最小公倍数问题
//#include"stdio.h"
//int x0, y0,p,q,sum=0;
//int max_gy = 0;
//void find(int x, int y)//找x y 的最大公约数
//{
//	int m, n;
//	if (x < y)
//	{
//		m = x;
//		n = y;
//	}
//	else 
//	{
//		m = y;
//		n = x;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		if (m%i == 0 && n%i == 0)
//			max_gy = i;
//	}
//}
//void dfs()
//{
//		for (int i = 1; i <= y0; i++)
//		{
//			if(i%x0==0)
//			for (int j = 1; j <= y0; j++)
//			{
//				if (j%x0== 0)
//				{
//					int k = i * j / x0;//最小公倍数求法
//					find(i, j);
//					if (k==y0&&max_gy==x0)
//					{
//						//printf("k=%d P=%d Q=%d\n",k, i, j);
//						sum++;
//					}
//				
//				}
//			}
//		}
//
//}
//int main()
//{
//	scanf("%d %d", &x0, &y0);
//	dfs();
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//P1192 台阶问题
//#include"stdio.h"
//#include"string.h"
//int n, k, f[100001] = { 1 };//第一个为1 后面都为0
//void dfs()
//{
//	for (int i = 1; i <= n; i++)//计算n阶楼梯
//	{
//		for (int j = 1; j <= k && (i - j) >= 0; j++)//计算前f[i]=f[i-1]+f[i-2]+f[i-3]+...f[i-k]
//		{
//		f[i] = f[i] + f[i - j];
//		}
//		f[i] = f[i] % 100003;
//	}
//}
//int main()
//{
//	
//	scanf("%d %d", &n, &k);
//	dfs();
//	printf("%d", f[n]);
//	system("pause");
//	return 0;
//}
//P1057 传球游戏
//#include"stdio.h"
//#include"string.h"
//int n, m, sum;
//int f[31][31];
//int main()
//{
//	memset(f, 0, sizeof(f));
//	scanf("%d %d", &n, &m);
//	f[1][0] = 1;//在自己手上 传0次 也是一种
//	for (int i = 1; i <= m; i++)//传m次
//	{
//		f[1][i] = f[n][i - 1] + f[2][i - 1];//第一位单独处理 分别是n号 和 2 号可以传
//		for (int k = 2; k <= n-1 ; k++)//从第2位到n-1位编号
//			f[k][i] = f[k - 1][i - 1] + f[k + 1][i - 1];
//		f[n][i] = f[n - 1][i - 1] + f[1][i-1];//因为n下一个是1单独处理
//	}
//	printf("%d", f[1][m]);
//	system("pause");
//	return 0;
//}
//#include"stdio.h"
//int n, k, sum;
//void dfs(int x, int s, int t)//x代表上一个出现过的数 s代表还需分多少次 t代表到此次还剩多大的数可以分
//{
//	if (s == 1)//只剩下一份 不用分了
//	{
//		sum++;
//		return;
//	}
//	for (int i = x; i <= t / s; i++)//t/s的意思是 一个大小为t的数字 划分 s 分，每份最大值x=t/s
//		dfs(i, s - 1, t - i);//
//}
//int main()
//{
//	scanf("%d %d", &n, &k);
//	dfs(1, k, n);// 需要分k次 可以的数大小为n
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//#include"stdio.h"
//#include"stdlib.h"
//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> &numbers) {
//		
//		int lenght = numbers.size();
//		if (lenght == 1)
//			return 1;
//		int value = lenght / 2;
//		sort(numbers.begin(), numbers.end(), less<int>());
//		int sum = 1;
//		for (int i = 0; i < lenght; i++)
//		{
//			if (numbers[i] == numbers[i])
//			{
//				sum++;
//				if (sum > value)
//				{
//					return numbers[i];
//				}
//			}
//			else
//			{
//				sum = 1;
//			}
//		}
//		return 0;
//	}
//};
//int main()
//{
//	vector<int> ab = { 1,2,3,2,4,2,5,2,3 };
//	for (int i = 0; i < 5; i++)
//		printf("%d ", ab[i]);
//	printf("\n");
//	Solution T1;
//	int value1 = T1.MoreThanHalfNum_Solution(ab);
//	for (int i = 0; i < 5; i++)
//		printf("%d ", ab[i]);
//	printf("\n");
//	printf("%d\n", value1);
//	
//	system("pause");
//	return 0;
//}
//计算第N个丑数 
#include"stdio.h"
#include"stdlib.h"
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
//class Solution {
//public:
//	int Min(int a, int b, int c) 
//	{
//		int min = a;
//		if (min > b)
//			min = b;
//		if (min > c)
//			min = c;
//		return min;
//	}
//	int GetUglyNumber_Solution(int index) {
//		if (index <= 0)
//			return 0;
//		int uglyNumbers[100000];
//		uglyNumbers[0] = 1;
//		int nextUglyIndex = 1;
//
//		int multiply2 = 0;
//		int multiply3 = 0;
//		int multiply5 = 0;
//		int min = 0;
//		while (nextUglyIndex < index)
//		{
//			min = Min(uglyNumbers[multiply2] * 2, uglyNumbers[multiply3] * 3, uglyNumbers[multiply5] * 5);
//			uglyNumbers[nextUglyIndex] = min;
//			while (uglyNumbers[multiply2] * 2 <= uglyNumbers[nextUglyIndex])
//				multiply2++;
//			while (uglyNumbers[multiply3] * 3 <= uglyNumbers[nextUglyIndex])
//				multiply3++;
//			while (uglyNumbers[multiply5] * 5 <= uglyNumbers[nextUglyIndex])
//				multiply5++;
//
//			nextUglyIndex++;
//		}
//		int result = uglyNumbers[index - 1];
//		return result;
//	}
//};
//第一个只出现一次的字符
/*在一个字符串(0 <= 字符串长度 <= 10000，全部由字母组成)中找到第一个只出现一次的字符, 
并返回它的位置, 如果没有则返回 - 1（需要区分大小写）*/

//class Solution {
//	struct ZM{
//		char zm;
//		int numbers;
//		int first_index;
//	};
//public:
//	int FirstNotRepeatingChar(string str) {
//		struct ZM s[58];
//		for (int i = 0; i < 58; i++)
//		{
//			s[i].zm = 65 + i;
//			s[i].numbers = 0;
//			s[i].first_index = -1;
//		}
//		for (int i = 0; i < str.length(); i++)
//		{
//			int index = str[i] - 65;
//			s[index].numbers++;//出现次数+1
//			if (s[index].first_index = -1)//如果第一次出现 记录下标
//				s[index].first_index = i;
//
//		}
//		int flag = -1;
//		int minindex = 10000000;
//		for (int i = 0; i < 58; i++)
//		{
//			if (s[i].numbers == 1)
//			{
//				flag = 0;
//				if (s[i].first_index <= minindex)
//					minindex = s[i].first_index;
//			}
//		}
//
//		if (flag == -1)
//			return -1;
//		else
//			return minindex;
//	}
//};

////
//class Solution {
//private:
//	int count = 0;
//public:
//	int InversePairs(vector<int> &data) {
//		if (data.size() == 0)
//			return -1;
//		mergeSort(data, 0, data.size() - 1);
//		if (count >= 1000000007)
//		{
//			count = count % 1000000007;
//		}
//		return count;
//	}
//	void mergeSort(vector<int> &a, int left, int right) {
//		if (left < right) {
//			int mid = (left + right) / 2;
//			mergeSort(a, left, mid);
//			mergeSort(a, mid + 1, right);
//			merge(a, left, mid, right);
//		}
//	}
//	void merge(vector<int> &a,int left,int mid,int right) {
//		int l = mid;
//		int r = right;
//		int t = right - left;
//		vector<int> b(right-left+1);
//		while (l >= left && r >= mid+1) 
//		{
//			if (a[l] > a[r]) 
//			{
//				count = (count + r - mid);
//				b[t--]= a[l--];
//			}
//			else {
//				b[t--] = a[r--];
//			}
//
//		}
//		while (l >= left) {
//			b[t--]=a[l--];
//		}
//		while (r >= mid + 1) {
//			b[t--] = a[r--];
//		}
//		for (int i = 0; i < b.size(); i++)
//		{
//			a[left + i] = b[i];
//		}
//	}
//
//};
//
//int main()
//{
//	Solution test;
//	vector<int> ilist = {7,5,6,7,1};
//	int numbers = test.InversePairs(ilist);
//	for (int i = 0; i < ilist.size(); i++)
//		cout << ilist[i];
//	cout  << endl;
//	cout << numbers << endl;
//	system("pause");
//	return 0;
//}

//struct ListNode {
//	int val;
//	struct ListNode *next;
//	ListNode(int x) :
//			val(x), next(NULL) {
//	}
//};
//class Solution {
//public:
//	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
//		// 如果有一个链表为空，则返回结果为空
//		if (pHead1 == NULL || pHead2 == NULL) {
//			return NULL;
//		}
//		// 获得两个链表的长度
//		unsigned int len1 = GetListLength(pHead1);
//		unsigned int len2 = GetListLength(pHead2);
//		// 默认 pHead1 长， pHead2短，如果不是，再更改
//		ListNode* pHeadLong = pHead1;
//		ListNode* pHeadShort = pHead2;
//		int LengthDif = len1 - len2;
//		// 如果 pHead1 比 pHead2 小
//		if (len1 < len2) {
//			pHeadLong = pHead2;
//			pHeadShort = pHead1;
//			int LengthDif = len2 - len1;
//		}
//		// 将长链表的前面部分去掉，使两个链表等长
//		for (int i = 0; i < LengthDif; i++) {
//			pHeadLong = pHeadLong->next;
//		}
//
//		while (pHeadLong != NULL && pHeadShort != NULL && pHeadLong != pHeadShort) {
//			pHeadLong = pHeadLong->next;
//			pHeadShort = pHeadShort->next;
//		}
//		return pHeadLong;
//	}
//private:
//	// 获得链表长度
//	unsigned int GetListLength(ListNode* pHead) {
//		if (pHead == NULL) {
//			return 0;
//		}
//		unsigned int length = 1;
//		while (pHead->next != NULL) {
//			pHead = pHead->next;
//			length++;
//		}
//		return length;
//	}
//};
//int main()
//{
//	Solution test;
//	ListNode  p10(0), p11(2), p12(4), p13(5), p14(6), p15(7);
//	ListNode  p20(1), p21(3), p22(9), p23(5), p24(8), p25(9);
//	ListNode *P1=&p10;
//	p10.next = &p11;
//	p11.next = &p12;
//	p12.next = &p13;
//	p13.next = &p14;
//	p14.next = &p15;
//	p15.next = NULL;
//
//	ListNode* P2 = &p20;
//	p20.next = &p21;
//	p21.next = &p22;
//	p22.next = &p23;
//	p23.next = &p24;
//	p24.next = &p25;
//	p25.next = NULL;
//
//	ListNode *result= test.FindFirstCommonNode(P1,P2);
//	//cout << result->val << endl;
//	system("pause");
//	return 0;
//}
//测试小端模式 还是 大端模式
//#include <stdio.h>
//int main()
//{
//	int i = 0x12345678;
//	char* p = (char*)& i;
//	if (*p == 0x78)
//	{
//		printf("Litle endian\n");
//	}
//	printf("p=%x\n", p);//当前指针变量的值（指向的地址）
//
//	p++;//指针自增
//
//	printf("p++之后，p=%x\n", p);//验证指针自增以后的值（重新指向的地址）
//	if (*p == 0x56)
//		printf("Litle endian\n");
//	printf("sizeof(p)=%d \n", sizeof(p));
//	//测试指针变量所占的字节数，in fact，在win32平台上，任何类型的指针变量所占的字节数均为4.
//	p = NULL;
//	system("pause");
//	return 0;
//}
class ObjectA
{
public:
	explicit ObjectA(int a) : m_value(new int(a)) {
		cout << "ObjectA创建 "<<a << endl;
	}
	~ObjectA() { 
		cout << "~ObjectA" << endl;
		delete m_value; }

private:
	int* m_value;
};

class Evil
{
public:
	Evil() { throw 10; }
	~Evil() { }
};
class Normal:public ObjectA
{
public:
	explicit Normal(int a) : ObjectA(a),m_a(a+1),m_resource(new int(a+2)){
		cout << "Normal创建" << endl;
	}
	~Normal() { 
		cout << "~Normal" << endl;
		delete m_resource;}

private:
	ObjectA m_a;
	Evil m_evil;
	int* m_resource;
};
static void hasMemoryLeak() {
	try {
		Normal n(1);
	}
	catch (...) {
		cout << "1" << endl;
	}
}
void main() {
	//hasMemoryLeak();
	//Git测试
	int ok = 1;
	int buok = 2;
	system("pause");
}
