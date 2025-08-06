/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:28:27 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/23 12:27:10 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

// 1º__root node
// 2º left child node
// 3º right child node
void	preorder(t_btree *root, void *applyf(void *))
{
	if (root == NULL)
		return ;
	applyf(root->item);
	preorder(root->left, applyf);
	preorder(root->right, applyf);
}

void	btree_apply_prefix(t_btree *root, void *applyf(void *))
{
	preorder(root, applyf);
}
