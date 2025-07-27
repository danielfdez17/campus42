

#include "ft_header.h"

/**
 * Given a string and a starting index, this function will return
 * a block of 3 characters from the string, starting from the given index.
 * The block will be padded with zeros if the index is out of bounds.
 */
void fill_block(char *src, int i, char *out)
{
	int j = 2;
	out[3] = '\0';
	while (j >= 0)
	{
		if (i >= 0)
			out[j--] = src[i--];
		else
			out[j--] = '0';
	}
}

/**
 * Process the hundreds digit of a block. If the digit is not zero, read the
 * file corresponding to the digit and append it to the part string. Then
 * append the string "100" to the part string followed by a space.
 */
char *process_cents(char *block, char *part)
{
	char h[2];
	
	h[0] = block[0];
	h[1] = '\0';
	part = ft_strcat(part, read_file(h));
	part = ft_strcat(part, " ");
	part = ft_strcat(part, read_file("100"));
	part = ft_strcat(part, " ");
	return (part);
}

/**
 * Process the tens and units digits of a block. Read the file corresponding
 * to the 2-digit number and append it to the part string.
 */
char	*process_teens(char *block, char *part)
{
	char teens[3];

	teens[0] = block[1];
	teens[1] = block[2];
	teens[2] = '\0';
	return (ft_strcat(part, read_file(teens)));
}

/**
 * Process the tens and units digits of a block. If the tens digit is not zero,
 * read the file corresponding to the 2-digit number and append it to the part
 * string. If the units digit is not zero, read the file corresponding to the
 * single digit and append it to the part string.
 */
char	*process_units(char *block, char *part)
{
	char tens[3];
	char units[2];

	if (block[1] != '0')
	{
		tens[0] = block[1];
		tens[1] = '0';
		tens[2] = '\0';
		part = ft_strcat(part, read_file(tens));
		if (block[2] != '0')
			part = ft_strcat(part, " ");
	}
	if (block[2] != '0')
	{
		units[0] = block[2];
		units[1] = '\0';
		part = ft_strcat(part, read_file(units));
	}
	return (part);
}

char	*get_block_index(int index)
{
	if (index == 0)
		return ("");
	if (index == 1)
		return (THOUSAND);
	if (index == 2)
		return (MILLION);
	if (index == 3)
		return (BILLION);
	if (index == 4)
		return (TRILLION);
	if (index == 5)
		return (QUADRILLION);
	if (index == 6)
		return (QUINTILLION);
	if (index == 7)
		return (SEXTILLION);
	if (index == 8)
		return (SEPTILLION);
	if (index == 9)
		return (OCTILLION);
	if (index == 10)
		return (NONILLION);
	if (index == 11)
		return (DECILLION);
	return (UNDECILLION);
}