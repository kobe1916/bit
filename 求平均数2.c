double aver(double* a, double* b)
{
	return *a + (*b - *a) / 2;
}
int main()
{
	double a = 0;
	double b = 0;
	scanf("%lf%lf", &a, &b);
	double ret = aver(&a, &b);
	printf("%lf ", ret);
	system("pause");
	return 0;
}
