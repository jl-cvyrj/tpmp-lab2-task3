/* Аўтар: Караліна Паўлоўская */

/*
 * Серверны модуль STUDENT.
 * Рэалізуе функцыі працы з масівам студэнтаў:
 * увод даных, разлік сярэдняга бала, сартаванне,
 * вывад студэнтаў з адзнакамі 4 і 5 і выдаленне
 * студэнта з мінімальным сярэднім балам.
 */

#include <stdio.h>
#include "../../include/student.h"

/* Прыватныя функцыі */
static int      has_only_good_marks     (struct STUDENT *student);

/*
 * Функцыя: create_students
 *
 * Апісанне:
 *      Стварае масіў студэнтаў і запаўняе яго
 *      дадзенымі з клавіятуры.
 */
void
create_students(struct STUDENT students[], int count)
{
        int     i;
        int     j;

        for (i = 0; i < count; i++)
        {
                printf("\nСтудэнт %d\n", i + 1);

                printf("Прозвішча і ініцыялы: ");
                scanf("%s", students[i].name);

                printf("Нумар групы: ");
                scanf("%d", &students[i].group);

                printf("Увядзіце %d адзнакі:\n", MARK_COUNT);

                for (j = 0; j < MARK_COUNT; j++)
                {
                        scanf("%d", &students[i].marks[j]);
                }
        }
}

/*
 * Функцыя: calculate_averages
 *
 * Апісанне:
 *      Вылічвае сярэдні бал кожнага студэнта.
 */
void
calculate_averages(struct STUDENT students[], int count)
{
        int     i;
        int     j;
        int     sum;

        for (i = 0; i < count; i++)
        {
                sum = 0;

                for (j = 0; j < MARK_COUNT; j++)
                {
                        sum += students[i].marks[j];
                }

                students[i].average = (double)sum / MARK_COUNT;
        }
}

/*
 * Функцыя: sort_by_average
 *
 * Апісанне:
 *      Сартуе масіў студэнтаў па змяншэнні
 *      сярэдняга бала.
 */
void
sort_by_average(struct STUDENT students[], int count)
{
        int             i;
        int             j;
        struct STUDENT  temp;

        for (i = 0; i < count - 1; i++)
        {
                for (j = 0; j < count - i - 1; j++)
                {
                        if (students[j].average < students[j + 1].average)
                        {
                                temp = students[j];
                                students[j] = students[j + 1];
                                students[j + 1] = temp;
                        }
                }
        }
}

/*
 * Функцыя: has_only_good_marks
 *
 * Апісанне:
 *      Правярае, ці мае студэнт толькі
 *      адзнакі 4 і 5.
 */
static int
has_only_good_marks(struct STUDENT *student)
{
        int     i;

        for (i = 0; i < MARK_COUNT; i++)
        {
                if (student->marks[i] < 4)
                {
                        return 0;
                }
        }

        return 1;
}
