#include "fdf.h"

int	deak_key(int key, void *data)
{
	ft_printf("%d", key);
	return (0);
}

int main(int argc, char **argv)
{
	fdf	*data;

	data = (fdf*)malloc(sizeof(fdf));
	read_file(data);
}