char	*g_result;

int		length_if_valid(char *str)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 31 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}


char	*to_base(char *nbr, char *base_to, int n)
{
	char	*nbr_new;
	int		i;

	while ()
	to_base

}

void	ft_init_result(int nb, int len_base)
{
	int tmp;
	int i;

	i = 0;
	tmp = nb;
	while (tmp)
	{
		tmp = tmp / len_base;
		i++;
	}
	g_result = (char*)malloc(sizeof(g_result) * (i + 1));
}

int		ft_atoi_base(char *str, char *base, int len_base)
{
	int number;
	int j;

	j = 0;
	if (*str == '-' || *str == '+')
		str++;
	number = 0;
	while (*str != '\0')
	{
		number *= len_base;
		j = 0;
		while (*str != base[j])
			j++;
		number += j;
		str++;
	}
	ft_init_result(number, len_base);
	return (number);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		b_from;
	int		b_to;
	int		nbr_l;

	b_from = length_if_valid(base_from);
	b_to = length_if_valid(base_to);

	if (b_from != 0 && b_to != 0)
	{
		nbr_l = ft_atoi_base(nbr, base_from, len_base_from));
	}


}
