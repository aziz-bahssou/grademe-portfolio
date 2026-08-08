// Writes the quotient of a by b through q and the remainder through r,
// picking the pair where the remainder never goes negative.

void	div_mod_floor(int a, int b, int *q, int *r)
{
	*q = a / b;
	*r = a % b;


		if (*r < 0)
	{
		if (b > 0)
		{
			(*q)--;
			*r += b;
		}
		else
		{
			(*q)++;
			*r -= b;
		}
	}

}
