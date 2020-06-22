/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cinqieme.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 01:50:26 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/22 20:53:23 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

**  les caratctere partie 2.

*/

#include <stdio.h>
#include <stdlib.h>

int 
    main(int argc, char *argv[])
{
    unsigned char toto;
    
    toto = 0;
    while (toto < 255)
    {
        printf ("%c ", toto);
        toto = toto + 1;   
    }
    
    return EXIT_SUCCESS;
}