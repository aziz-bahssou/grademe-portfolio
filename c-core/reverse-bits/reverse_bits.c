unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = 8;
	while (i--)
	{
		result <<= 1;
		result |= (octet & 1);
		octet >>= 1;
	}
	return (result);
}