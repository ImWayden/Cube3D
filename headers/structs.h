/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wayden <wayden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 22:16:01 by wayden            #+#    #+#             */
/*   Updated: 2024/04/10 16:33:14 by wayden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H


// union u_color
// {
// 	struct s_color
// 	{
// 		int	r;
// 		int	g;
// 		int	b;	
// 	};
	
// }


typedef union s_color {
	unsigned int hex;
	struct
	{
		char	b;
		char	g;
		char	r;
		char	a;
	};
}	t_color;

typedef struct s_mapdata
{
	int		**map;
	int		size;
	int		length;
	char	*path_no;
	char	*path_so;
	char	*path_we;
	char	*path_ea;
	char	*name_file;
	t_color	color_floor;
	t_color	color_ceiling;
}	t_mapdata;

typedef struct s_cubvar
{
	int no;
	int so;
	int we;
	int ea;
} t_cubvar;


typedef struct s_vec2
{
	double x;
	double y;	
} t_vec2;



typedef struct s_player
{
	t_vec2 pos;
	t_vec2 direction;
	t_vec2 Camera;
	double speed; 
} t_player;

typedef struct s_mlx
{
    void *mlx_ptr;
    void *win_ptr;

}   t_mlx;

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct s_keybinds{
	
	int walk_up;
	int walk_left;
	int walk_right;
	int walk_down;
	
	double fov;
} t_keybinds;

typedef struct s_raydata{
	
	double *deltadist;
	double *sidedist;
	double *raydir;
	int *step;
	
} t_raydata;

typedef struct s_rayutils{
	double camera_x; 
	int map_x; //coordonée de la case sur laquelle se trouve le joueur 
	int map_y; // changera au fur et a mesure que le rayon sera trqace
	t_vec2 ray_dir; //player dir
	t_vec2 side_dist; // contient a la fois la taille du rayon vers le rpochainn x et le provhain y
	t_vec2 delta_dist;
	double perp_wall_dist;
	int step_x;
	int step_y;
	int hit;
	int side;
} t_rayutils;

#endif