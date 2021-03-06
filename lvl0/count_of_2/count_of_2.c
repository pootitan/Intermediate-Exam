/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:14:42 by exam              #+#    #+#             */
/*   Updated: 2019/06/08 20:56:20 by juochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    count_of_2(int n)
{
	int i;
	int two = 0;
	int tmp;

	if (n <= 1)
		return (0);
	// iterate all numbers under n
	i = 2;
	while (i <= n)
	{
		tmp = i;
		while(tmp != 0)
		{
			if(tmp % 10 == 2)
				two++;
			tmp /= 10;
		}
		i++;
	}
	return (two);
}
