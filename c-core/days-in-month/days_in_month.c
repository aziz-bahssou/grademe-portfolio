// month runs from 1 for January to 12 for December, and only February
// looks at year. A number outside that range has no length to report.
int	days_in_month(int year, int month)
{
	if(month < 1 || month > 12)
		return(-1);
	
	if (month == 4 || month == 6
		|| month == 9 || month == 11)
			return (30);
	else if(month == 2)
	{
		if ((year % 400 == 0)
			|| (year % 4 == 0 && year % 100 != 0))
				return (29);
		return (28);
	}
	
	return (31);
}
