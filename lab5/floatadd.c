#define N	(10)

int	n = N;

float	a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
float	b[] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
float	c[N];

int main(void)
{
	int	i;
	int	j;

	for (i = 0; i < 2; ++i)
		for (j = 0; j < n; ++j)
			c[j] += a[j] + b[j];
}
