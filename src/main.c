/* Аўтар: Караліна Паўлоўская */

/*
 * Кліенцкі модуль.
 * Дэманструе працу функцый модуля STUDENT:
 * стварэнне масіва студэнтаў, вылічэнне сярэдняга бала,
 * сартаванне, вывад студэнтаў з адзнакамі 4 і 5
 * і выдаленне студэнтаў з мінімальным сярэднім балам.
 */

#include <stdio.h>
#include "../include/student.h"

/*
 * Функцыя: main
 *
 * Апісанне:
 *      Пункт ўваходу ў праграму.
 *      Выклікае функцыі модуля STUDENT
 *      для працы з масівам студэнтаў.
 */
int
main(void)
{
        struct STUDENT  students[STUDENT_COUNT];      /* масіў студэнтаў */
        int             count;                        /* колькасць студэнтаў */

        count = STUDENT_COUNT;

        printf("Увод даных пра студэнтаў\n");
        create_students(students, count);

        calculate_averages(students, count);

        printf("\nСтудэнты пасля разліку сярэдняга бала:\n");
        print_students(students, count);

        sort_by_average(students, count);

        printf("\nСтудэнты пасля сартавання па сярэднім бале:\n");
        print_students(students, count);

        print_excellent_students(students, count);

        remove_min_average(students, &count);

        printf("\nСпіс пасля выдалення студэнтаў з мінімальным сярэднім балам:\n");
        print_students(students, count);

        return 0;
}
