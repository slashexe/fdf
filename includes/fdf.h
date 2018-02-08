#ifndef FDF_H
# define FDF_H
# include "fdf.h"
# include "libft.h"

typedef struct		s_env
{
	void			*mlx;
	void			*win;

	int				max_x;
	int				max_y;

	int				width;
	int				heigth;
	int				space;

	struct s_mat	*matrice;

}					t_env;

typedef struct		s_mat
{
	double			x;
	double			y;
	double			z;
	struct s_mat	*next;
	char			end;

}					t_mat;

t_env				*init_env(void);

#endif