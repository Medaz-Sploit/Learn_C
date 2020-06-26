/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deuxieme.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazoukni <mazoukni@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 01:50:26 by mazoukni          #+#    #+#             */
/*   Updated: 2020/06/26 01:11:38 by mazoukni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

**  Source : https://www.youtube.com/watch?v=5TFNRK9RCPA&list=PLHuw27vJ1fCfza1_m_bFYScefHCBRxs4T&index=2
**  Execution : gcc deuxieme.c && ./a.out

*/

#include <stdio.h>
#include <stdlib.h>

int 
    main(int argc, char *argv[])
{
    char* a;
    a = "C'est mon deuxieme program en C.\n";
    a = "Le Soleil et Brille!\n";
    printf (a);
    return EXIT_SUCCESS;
}