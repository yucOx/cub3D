/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_same_row_len.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin < mehaydin@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:39:45 by mehaydin          #+#    #+#             */
/*   Updated: 2024/01/15 02:52:28 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"
#include "../../utilities/utilities.h"

char	**create_map_same_row_len(t_cub3d *cub3d)
{
	t_config	*config;
	char		**map;
	int			i;

	config = cub3d->config;
	map = malloc(sizeof(char *) * (config->map->row_count + 1));
	if (map == NULL)
		print_error(cub3d, "create_map_same_row_len malloc error.");
	i = 0;
	while (config->map->text[i] != NULL)
	{
		map[i] = malloc(config->map->col_count + 1);
		if (map[i] == NULL)
		{
			free_double_pointer(map);
			print_error(cub3d, "create_map_same_row_len[i] malloc error.");
		}
		ft_strncpy(map[i], config->map->text[i], config->map->col_count);
		i++;
	}
	map[i] = NULL;
	return (map);
}
