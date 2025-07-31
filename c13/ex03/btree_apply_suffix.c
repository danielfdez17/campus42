/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:28:56 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/23 12:32:55 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	postorder(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	postorder(root->left, applyf);
	postorder(root->right, applyf);
}

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	
}