/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_free_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin < mehaydin@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:40:07 by mehaydin          #+#    #+#             */
/*   Updated: 2024/01/15 02:52:28 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"
#include "../../utilities/utilities.h"

void	init_map(t_cub3d *cub3d)
{
	cub3d->config->map = malloc(sizeof(t_map));
	if (cub3d->config->map == NULL)
		print_error(cub3d, "map malloc error.");
	cub3d->config->map->text = NULL;
	cub3d->config->map->starting_line = 0;
	cub3d->config->map->row_count = 0;
	cub3d->config->map->col_count = 0;
	cub3d->config->map->player_count = 0;
	cub3d->config->map->player_row = 0;
	cub3d->config->map->player_col = 0;
}

void	free_map(t_cub3d *cub3d)
{
	if (cub3d->config->map == NULL)
		return ;
	free_double_pointer(cub3d->config->map->text);
	free(cub3d->config->map);
}
