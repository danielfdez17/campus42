
int	ft_atoi(const char *nptr)
{
	int	result;
	int	i;
	int	negative_counter;
	int	positive_counter;

	result = 0;
	i = 0;
	negative_counter = 0;
	positive_counter = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		++i;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '+')
			positive_counter++;
		else
			negative_counter++;
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (int)nptr[i];
		++i;
	}
	if (negative_counter > 1 || positive_counter > 1)
		return (0);
	return (result);
}
