/* Аўтар: Караліна Паўлоўская */

#ifndef STUDENT_H
#define STUDENT_H

/*
 * Інтэрфейс модуля STUDENT.
 * Апісвае структуру STUDENT і функцыі для працы
 * з масівам студэнтаў.
 */

#include <stdio.h>

#define STUDENT_COUNT   6
#define MARK_COUNT      4

struct STUDENT
{
        char            name[100];             /* прозвішча і ініцыялы */
        int             group;                 /* нумар групы */
        int             marks[MARK_COUNT];     /* адзнакі */
        double          average;               /* сярэдні бал */
};

void    create_students          (struct STUDENT students[],
                                  int count);

void    calculate_averages       (struct STUDENT students[],
                                  int count);

void    sort_by_average          (struct STUDENT students[],
                                  int count);

void    print_excellent_students (struct STUDENT students[],
                                  int count);

void    remove_min_average       (struct STUDENT students[],
                                  int *count);

void    print_students           (struct STUDENT students[],
                                  int count);

#endif
