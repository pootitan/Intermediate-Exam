/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_looping.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 23:16:03 by juochen           #+#    #+#             */
/*   Updated: 2019/06/17 23:42:10 by juochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node {
	int value;
	struct s_node *next;
};

int	is_looping(struct s_node *node)
{
	struct s_node *slow;
	struct s_node *fast;

	if (node == 0)
		return (0);
	slow = node;
	fast = node;
	while (fast != 0)
	{
		slow = slow->next;
		if (fast->next->next == 0)
			return (0);
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
