/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quatrieme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 01:50:26 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/26 01:13:54 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

**  Source : https://www.youtube.com/watch?v=Mryrz4aB0LI&list=PLHuw27vJ1fCfza1_m_bFYScefHCBRxs4T&index=4
**  Execution : gcc quatrieme.c && ./a.out
**
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