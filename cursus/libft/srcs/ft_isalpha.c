
int	ft_isalpha(int c)
{
	if ((unsigned char)c >= '0' && (unsigned char)c <= '9')
		return (1);
	return (0);
}
