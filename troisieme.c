/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troisieme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 01:50:26 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/19 04:26:41 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

**  Troisieme cour refrait 
**  Variable en C
**  Variables de type int (integer)

*/

#include <stdio.h>
#include <stdlib.h>

int 
    main(int argc, char *argv[])
{
    int toto;
    toto = 12;
    printf ("Qutient    : %d\n", toto / 5);
    printf ("Rest       : %d", toto % 5);
    return EXIT_SUCCESS;
}