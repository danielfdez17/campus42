/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danfern3 <danfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:21:54 by danfern3          #+#    #+#             */
/*   Updated: 2025/07/23 12:27:05 by danfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

// 1º left child node
// 2º__root node
// 3º right child node
void	inorder(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	inorder(root->left, applyf);
	applyf(root->item);
	inorder(root->left, applyf);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	inorder(root, applyf);
}
