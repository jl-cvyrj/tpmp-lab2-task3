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
