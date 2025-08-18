
int	ft_isdigit(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z')\
		|| ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (1);
	return (0);
}
