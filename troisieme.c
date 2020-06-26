/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troisieme.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 01:50:26 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/26 01:12:46 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

**  Source : https://www.youtube.com/watch?v=Mryrz4aB0LI&list=PLHuw27vJ1fCfza1_m_bFYScefHCBRxs4T&index=3
**  Execution : gcc troisieme.c && ./a.out
**
**
**  Troisieme cour refrait 
**  Variable en C
**  Variables de type int (integer)
**  chaine de charactere qu prondre le char 5 + caractere special
**  ms bas no , tout a fait dans le memoire il s'agit une pointure
**  et le type char il prent deux octets alors , on a 4 octects + 1 char + 
**  special charactere OU 8 octest + 1 char + special charactere.

*/

#include <stdio.h>
#include <stdlib.h>

int 
    main(int argc, char *argv[])
{
    int toto;
    char* titi;
    titi = "5";
    toto = 5;
    printf ("L'entier           : %d\n", toto);
    printf ("Chaine de char     : %s", titi);
    return EXIT_SUCCESS;
}