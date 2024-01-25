/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_turn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaydin < mehaydin@student.42kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:44:45 by mehaydin          #+#    #+#             */
/*   Updated: 2024/01/15 02:52:28 by mehaydin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"
#include "math.h"

void	player_turn_left(t_player *player)
{
	double	old_player_direction_x;
	double	old_camera_plane_x;

	old_player_direction_x = player->direction.x;
	old_camera_plane_x = player->camera_plane.x;
	player->direction.x = old_player_direction_x * cos(-TURN_SPEED)
		- player->direction.y * sin(-TURN_SPEED);
	player->direction.y = old_player_direction_x * sin(-TURN_SPEED)
		+ player->direction.y * cos(-TURN_SPEED);
	player->camera_plane.x = old_camera_plane_x * cos(-TURN_SPEED)
		- player->camera_plane.y * sin(-TURN_SPEED);
	player->camera_plane.y = old_camera_plane_x * sin(-TURN_SPEED)
		+ player->camera_plane.y * cos(-TURN_SPEED);
}

void	player_turn_right(t_player *player)
{
	double	old_player_direction_x;
	double	old_camera_plane_x;

	old_player_direction_x = player->direction.x;
	old_camera_plane_x = player->camera_plane.x;
	player->direction.x = old_player_direction_x * cos(TURN_SPEED)
		- player->direction.y * sin(TURN_SPEED);
	player->direction.y = old_player_direction_x * sin(TURN_SPEED)
		+ player->direction.y * cos(TURN_SPEED);
	player->camera_plane.x = old_camera_plane_x * cos(TURN_SPEED)
		- player->camera_plane.y * sin(TURN_SPEED);
	player->camera_plane.y = old_camera_plane_x * sin(TURN_SPEED)
		+ player->camera_plane.y * cos(TURN_SPEED);
}
