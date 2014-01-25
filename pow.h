double pow(double a, unsigned int n)
{
	double result = 1;
	for (unsigned int i = 0; i < n; ++i) {
		result *= a;
	}
	return result;
}