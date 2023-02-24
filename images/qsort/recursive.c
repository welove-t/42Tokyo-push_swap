int	func(int N)
{
	int	A;

	if (N == 1)
		return (1);
	A = func(N - 1) * N; // 再帰呼び出し
	printf("%d\n", N);
	return (A);
}
