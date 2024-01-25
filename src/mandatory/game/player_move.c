/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin < mehaydin@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:44:40 by mehaydin          #+#    #+#             */
/*   Updated: 2024/01/15 02:52:28 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	player_move_up(t_map *map, t_player *player)
{
	t_vector_double	new_position;

	new_position.y = player->position.y + player->direction.y * MOVE_SPEED;
	new_position.x = player->position.x + player->direction.x * MOVE_SPEED;
	if (map->text[(int)new_position.y] == NULL)
		return ;
	if (map->text[(int)new_position.y][(int)new_position.x] == '1')
		return ;
	player->position.x += player->direction.x * MOVE_SPEED;
	player->position.y += player->direction.y * MOVE_SPEED;
}

void	player_move_down(t_map *map, t_player *player)
{
	t_vector_double	new_position;

	new_position.y = player->position.y - player->direction.y * MOVE_SPEED;
	new_position.x = player->position.x - player->direction.x * MOVE_SPEED;
	if (map->text[(int)new_position.y] == NULL)
		return ;
	if (map->text[(int)new_position.y][(int)new_position.x] == '1')
		return ;
	player->position.x -= player->direction.x * MOVE_SPEED;
	player->position.y -= player->direction.y * MOVE_SPEED;
}

void	player_move_left(t_map *map, t_player *player)
{
	t_vector_double	new_position;

	new_position.y = player->position.y - player->camera_plane.y * MOVE_SPEED;
	new_position.x = player->position.x - player->camera_plane.x * MOVE_SPEED;
	if (map->text[(int)new_position.y] == NULL)
		return ;
	if (map->text[(int)new_position.y][(int)new_position.x] == '1')
		return ;
	player->position.x -= player->camera_plane.x * MOVE_SPEED;
	player->position.y -= player->camera_plane.y * MOVE_SPEED;
}

void	player_move_right(t_map *map, t_player *player)
{
	t_vector_double	new_position;

	new_position.y = player->position.y + player->camera_plane.y * MOVE_SPEED;
	new_position.x = player->position.x + player->camera_plane.x * MOVE_SPEED;
	if (map->text[(int)new_position.y] == NULL)
		return ;
	if (map->text[(int)new_position.y][(int)new_position.x] == '1')
		return ;
	player->position.x += player->camera_plane.x * MOVE_SPEED;
	player->position.y += player->camera_plane.y * MOVE_SPEED;
}
