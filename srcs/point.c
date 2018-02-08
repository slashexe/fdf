void	new_point(int x, int y, int z, t_env e)
{
	t_mat	*mat;
	t_mat	*next;

	mat = new_mat(x, y, z, 0);
	next = e->matrice;
	if (next == NULL)
	{
		e->mat = mat;
		return ;
	}
	while (next->next != NULL)
		next = next->next;
	next->next = mat;
}

t_mat	*new_mat(int x, int y, int z, char end)
{
	t_mat	*mat;

	mat = (t_mat*)malloc(sizeof(t_mat));
	mat->x = x;
	mat->y = y;
	mat->z = z;
	mat->end = end;
	mat->next = NULL;
	return (mat)
}