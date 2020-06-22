/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quatrieme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 01:50:26 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/22 09:41:21 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

**  Type de variables , type char

*/

#include <stdio.h>
#include <stdlib.h>

int 
    main(int argc, char *argv[])
{
    char toto;
    
    toto = 'A';
    printf ("%c\n", toto);
    toto = toto + 1;
    printf ("%c\n", toto);
    toto = toto + 1;
    printf ("%c", toto);
    
    return EXIT_SUCCESS;
}