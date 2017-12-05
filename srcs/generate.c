#include "../includes/libft.h"
#include "../includes/fdf.h"

int	my_key_func(int keycode, void *mlx)
{
	static int	i;
	int			j;

	j = 200;
	i = 200;
	printf("key event %d\n", keycode);
	while (j < 300)
	{
		mlx_pixel_put(mlx, win, j, i, 0x00FF00FF);
	}
	i++;
	return (0);
}

void	draw(void *mlx, coid *win)
{
	int		x;
	int		y;

	y = 50;
	while (y < 150)
	{
		x = 50;
		while (x < 150)
		{
			mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
			x++;
		}
		y++;
	}
}

int		expose_hook(t_env *e)
{
	draw(e.mlx, e.win);
	return (0);
}

int	ft_generate(void)
{
	t_env	e;


	e.mlx = mlx_int();
	e.win = mlx_new_window(e.mlx, 500, 500, "fdf");
	mlx_expose_hook(e.win, expose_hook, &e;
	mlx_key_hook(e.win, my_key_func, e.mlx);
	mlx_loop(e.mlx);
	return (0);
}