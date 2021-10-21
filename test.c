/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tigerber <tigerber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:55:09 by tigerber          #+#    #+#             */
/*   Updated: 2021/10/21 12:12:29 by tigerber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include <libc.h>


void    ft_test(struct tm *time)
{
    printf("tm test = %d\n", time->tm_sec);
}

int main()
{
    int one = 0;
    int two = 0;
    time_t t;
    
    time(&t);
    int i = 100;
    struct tm *mytime = localtime(&t);
    
    printf("time = %s\n", ctime(&t));

    printf("tm 1 = %d\n", mytime->tm_sec);
    // one = mytime->tm_sec;
    // while (mytime->tm_sec)
    // {
    //     printf("one = %d\n", one);
    //     printf("mytime = %d\n", mytime->tm_sec);
    //     printf("mytime = %d\n", mytime->tm_sec);
    //     if ( one == mytime->tm_sec + 5)
    //         break;
    // }
    printf("clock = %d\n", (int)clock());
    printf("tm 2 = %d\n", mytime->tm_sec);
    // sleep(4);
    struct tm *mytime2 = localtime(&t);
    printf("tm 3 = %d\n", mytime2->tm_sec);
    ft_test(mytime2);
    printf("time = %s\n", ctime(&t));
    printf("clock = %ld\n", clock());
    return (0);
}