/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sixeime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 21:04:11 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/26 01:14:38 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

**  Source : https://www.youtube.com/watch?v=Z1bI7Ra-llE&list=PLHuw27vJ1fCfza1_m_bFYScefHCBRxs4T&index=6
**  Execution : gcc sixieme.c && ./a.out
**
**
**  Sixième cours :
**  Un program qui calcule et aui affiche l'air d'un regtangle A sa connaissant 
**  longeur L et sa largeur  l
**  la formule c'est : A = L * l 

*/

#include <stdio.h>
#include <stdlib.h>

int 
    main(int argc, char *argv[])
{
    int L;
    int l;
    
    printf ("Entez la longue du rectangle : ");
    scanf ("%d", &L);
    if (L <= 0)
    {
        printf ("Anomalie : la longeur doit être strictement positive.\n");
        return EXIT_FAILURE;
    }
    printf ("Entez la largeur du rectangle : ");
    scanf ("%d", &l);
    if (l <= 0)
    {
        printf ("Anomalie : la largeur doit être strictement positive.\n");
        return EXIT_FAILURE;
    }
    if (l > L)
    {
        printf ("Anomalie : la largeur %d est strictement superieur à la longeur %d.\n", l , L);
    }
    printf ("L'air du rectangle est : %d", L * l);
    
    return EXIT_SUCCESS;
}