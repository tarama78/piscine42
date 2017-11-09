if (a[2] == 0)
	ft_putchar('/');
else if (a[2] == (a[0] - 1))
	ft_putchar('\\');
else if (floor == size - 1)
	if (floor >= 4 && a[1] == (size + 2) / 2 + 1
			&& a[2] == a[0] / 2 + size / 2 - floor % 2 - 1)
	ft_putchar('$');
else if (floor % 2 == 0 && a[1] >= 2)
	if (a[2] >= a[0] / 2 - size / 2
			&& a[2] <= a[0] / 2 + size / 2)
	ft_putchar('|');
	else
	ft_putchar('*');
else if (floor % 2 == 1 && a[1] >= 3)
	if (a[2] >= a[0] / 2 - size / 2 + 1
			&& a[2] <= a[0] / 2 + size / 2 - 1)
	ft_putchar('|');
	else
	ft_putchar('*');
	else
	ft_putchar('*');
	else
	ft_putchar('*');
