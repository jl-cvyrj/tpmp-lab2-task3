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
