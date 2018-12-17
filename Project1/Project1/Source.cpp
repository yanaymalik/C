//#include <stdio.h>
//
//#define N 4
//int func_A(int mat[][N], int n)
//{
//	int i;
//	int num;
//	if ((n < 0) || (n > N - 1))
//		return 0;
//	num = mat[n][n];
//	for (i = n + 1; i < N; i++)
//		num = (mat[n][i] >= mat[i][n]) ? num + mat[n][i] : num - mat[i][n];
//	return (num + func_A(mat, ++n));
//}
//int main()
//{
//	int mat[N][N] = { {2,3,4,5},
//	 {1,3,2,1},
//	 {2,4,4,5},
//	 {3,5,5,5} };
//	int res;
//	res = func_A(mat, 0);
//	printf("res = %d\n", res);
//	getchar();
//	return 0;
//}