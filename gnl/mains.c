/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmera <emmera@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:43:56 by emmera            #+#    #+#             */
/*   Updated: 2024/05/10 12:43:57 by emmera           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* matriz dinamica
*1 -> 1 2 3
*4 -> 4 5 6
*7 -> 7 8 9
 */


/* int	main(void)
{
	int	archivo;

	archivo = 1;
	archivo = open("poppop.txt", O_RDWR);

	printf("Hola archivo\n");
	write(archivo, "Hola Emily", 11);
	char in[10];
	//0 para que entre por terminal
	read(0, in, 5);
	printf("%s", in);
	return (0);
} */

/* int	main(void)
{
	int	fd;
	char buf[10];
	ssize_t nr_bytes;

	fd = open("pop.txt", O_RDONLY);

	if(fd == -1)
		printf("Error al abrir el archivo\n");
	else
	{
		nr_bytes = read(fd, buf, 5);
		
		close(fd);
		if(nr_bytes == 0)
			printf("archivo vacio \n");

		else
			printf("El numero de caracteres es %d, contenido: %s\n", (int)nr_bytes, buf);
	}
	return(0);
} */

/* int	main()
{
	int	fd;

	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (0);
	else 
		ft_putchar_fd('h', fd);
	close(fd);
	system("cat test.txt");
	return (0);
}*/