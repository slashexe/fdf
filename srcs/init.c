t_env	*init_env(void)
{
	t_env	*e;

	e = (t_env*)malloc(sizeof(t_env));
	e->mlx = mlx_int();
	e->width = 1000;
	e->heigth = 1000;
	e->win = mlx_new_window(e.mlx, e->heigth, e->heigth, "fdf");
	e->space = 20;
	e->max_x = 0;
	e->max_y = 0;
	return (e);
}