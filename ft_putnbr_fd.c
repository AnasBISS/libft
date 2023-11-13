/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbouaba <anbouaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:03:39 by anbouaba          #+#    #+#             */
/*   Updated: 2023/11/12 23:33:39 by anbouaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-', fd);
        ft_putchar_fd(2, fd);
        ft_putnbr_fd(147483648, fd);
    }
    else
        {
            if (n  < 0)
            {
                ft_putchar_fd('-', fd);
                n = - n;
            }
            if ( n > 9)
            {
                ft_putnbr_fd(n / 10, fd);
                ft_putchar_fd(n % 10, fd);
            }
            else
                ft_putchar_fd(n + 48, fd);
        }
}
// int main() {
//     int fd = 1; // 1 represents the standard output, you can use other file descriptors as needed

//     // Test with various numbers
//     ft_putnbr_fd(123, fd);
//     write(fd, "\n", 1); // newline for clarity

//     ft_putnbr_fd(-456, fd);
//     write(fd, "\n", 1);

//     ft_putnbr_fd(0, fd);
//     write(fd, "\n", 1);

//     ft_putnbr_fd(2147483647, fd); // maximum positive integer
//     write(fd, "\n", 1);

//     ft_putnbr_fd(-2147483648, fd); // minimum integer value
//     write(fd, "\n", 1);

//     return 0;
// }