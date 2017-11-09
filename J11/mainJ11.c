/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainJ11.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 10:54:37 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/26 10:29:36 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ex/ft_list.h"

t_list  *ft_create_elem(void *data);
void    ft_list_push_back(t_list **begin_list, void *data);
void    ft_list_push_front(t_list **begin_list, void *data);
int     ft_list_size(t_list *begin_list);
t_list  *ft_list_last(t_list *begin_list);
t_list  *ft_list_push_params(int ac, char **av);
void    ft_list_clear(t_list **begin_list);
t_list  *ft_list_at(t_list *begin_list, unsigned int nbr);
void    ft_list_reverse(t_list **begin_list);
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
/*void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void    ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void    ft_list_sort(t_list **begin_list, int (*cmp)());
void    ft_list_reverse_fun(t_list *begin_list);
void    ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
void    ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)());
*/
void    ft_print_list(t_list *list)
{
	int i;

	i = 0;
	printf("list:\n");
	while (list)
	{
		printf("%p : %s : next=%p\n", list, (char *)list->data, list->next);
		list = list->next;
	}
}

void    ft_replace_str(void *data)
{
	char    *ptr;

	if (data)
	{
		ptr = (char *)data;
		ptr[0] = 'O';
		ptr[1] = 'K';
		ptr[2] = '\0';
	}
}

int     main(int ac, char **av)
{
	if (ac && av) {}
	char    foo_str[] = "foo";
	char    bar_str[] = "bar";
	void    *foo_data = (void *)foo_str;
	void    *bar_data = (void *)bar_str;


	printf("= ex00 =\n");
	t_list *elem = ft_create_elem(bar_data);
	ft_print_list(elem);
	if (elem->data == bar_data && elem->next == NULL)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex01 =\n");
	ft_print_list(elem);
	ft_list_push_back(&elem, foo_data);
	ft_list_push_back(&elem, "elem3");
	ft_print_list(elem);
	if (elem->next->data == foo_data && elem->next->next == NULL)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex02 =\n");
	ft_print_list(elem);
	ft_list_push_front(&elem, "le second");
	ft_list_push_front(&elem, "le premier");
	ft_print_list(elem);
	if (elem->data == bar_data && elem->next->data == foo_data)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex03 =\n");
	ft_print_list(ft_list_push_params(ac - 1, av + 1));
	int size = ft_list_size(ft_list_push_params(ac - 1, av + 1));
	printf("size : %i\n", size);
	if (size == ac - 1)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex04 =\n");
	ft_print_list(elem);
	t_list *last = ft_list_last(elem);
	printf("last : %p\n", last);
	if (last == elem->next->next)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex05 =\n");
	t_list  *params_list = ft_list_push_params(ac, av);
	ft_print_list(params_list);
	if (ac == 1)
		printf("\nMettez des arguments pour tester le programme\n");
	else if (params_list->data != NULL)
		printf("\nVerifiez si le contenu de list est OK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex06 =\n");
	ft_print_list(params_list);
	ft_list_clear(&params_list);
	printf("after clean beginning is : %p\n", params_list);
	if (params_list == NULL)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex07 =\n");
	ft_print_list(elem);
	t_list *elem_at_1 = ft_list_at(elem, 1);
	t_list *elem_at_0 = ft_list_at(elem, 0);
	t_list *elem_at_5 = ft_list_at(elem, 5);
	printf("elem 0 is : %p : %s\n", elem_at_0, elem_at_0->data);
	printf("elem 1 is : %p : %s\n", elem_at_1, elem_at_1->data);
	printf("elem 5 is : %p\n", elem_at_5);
	if (elem_at_0 == elem && elem_at_1 == elem->next && elem_at_5 == NULL)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex08 =\n");
	t_list *test1 = NULL;
	printf("test 1 (empty):\n");
	ft_print_list(test1);
	ft_list_reverse(&test1);
	ft_print_list(test1);

	t_list *test2 = ft_create_elem(foo_data);
	printf("test 2 (one elem):\n");
	ft_print_list(test2);
	ft_list_reverse(&test2);
	ft_print_list(test2);

	t_list *test3 = ft_create_elem(foo_data);
	test3->next = ft_create_elem(bar_data);
	printf("test 3 (two elems):\n");
	ft_print_list(test3);
	ft_list_reverse(&test3);
	ft_print_list(test3);

	t_list *test4 = ft_create_elem("numero 0");
	test4->next = ft_create_elem("numero 1");
	test4->next->next = ft_create_elem("numero 2");
	test4->next->next->next = ft_create_elem("numero 3");
	printf("test 4 (tree elems):\n");
	ft_print_list(test4);
	ft_list_reverse(&test4);
	ft_print_list(test4);

	if (test1 == NULL && test2->data == foo_data && test2->next == NULL
			&& test3->data == bar_data && test3->next->data == foo_data
			&& test3->next->next == NULL)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex09 =\n");
	test1 = NULL;
	printf("test 1 (empty):\n");
	ft_print_list(test1);
	ft_list_foreach(test1, &ft_replace_str);
	ft_print_list(test1);

	char    test2_str[] = "foo";
	void    *test2_data = (void *)test2_str;
	test2 = ft_create_elem(test2_data);
	printf("test 2 (one elem):\n");
	ft_print_list(test2);
	ft_list_foreach(test2, &ft_replace_str);
	ft_print_list(test2);

	char    test3_foo_str[] = "foo";
	char    test3_bar_str[] = "bar";
	void    *test3_foo_data = (void *)test3_foo_str;
	void    *test3_bar_data = (void *)test3_bar_str;
	test3 = ft_create_elem(test3_foo_data);
	test3->next = ft_create_elem(test3_bar_data);
	printf("test 3 (two elems):\n");
	ft_print_list(test3);
	ft_list_foreach(test3, &ft_replace_str);
	ft_print_list(test3);

	if (test1 == NULL && ((char *)test2->data)[0] == 'O'
			&& ((char *)test3->data)[0] == 'O' && ((char *)test3->next->data)[0] == 'O')
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex10 =\n");
	test1 = NULL;
	printf("test 1 (empty):\n");
	ft_print_list(test1);
	ft_list_foreach_if(test1, &ft_replace_str, "bar", &strcmp);
	ft_print_list(test1);

	char    test10_str[] = "foo";
	void    *test10_data = (void *)test10_str;
	test2 = ft_create_elem(test10_data);
	printf("test 2 (one elem):\n");
	ft_print_list(test2);
	ft_list_foreach_if(test2, &ft_replace_str, "foo", &strcmp);
	ft_print_list(test2);

	char    test10_3_foo_str[] = "foo";
	char    test10_3_bar_str[] = "bar";
	void    *test10_3_foo_data = (void *)test10_3_foo_str;
	void    *test10_3_bar_data = (void *)test10_3_bar_str;
	test3 = ft_create_elem(test10_3_foo_data);
	test3->next = ft_create_elem(test10_3_bar_data);
	printf("test 3 (two elems):\n");
	ft_print_list(test3);
	ft_list_foreach_if(test3, &ft_replace_str, "foo", &strcmp);
	ft_print_list(test3);

	if (test1 == NULL && ((char *)test2->data)[0] == 'O'
			&& ((char *)test3->data)[0] == 'O' && ((char *)test3->next->data)[0] == 'b')
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex11 =\n");
	test1 = NULL;
	printf("test 1 (empty):\n");
	ft_print_list(test1);
	t_list *found = ft_list_find(test1, "bar", &strcmp);
	printf("found %p\n", found);

	char    test11_str[] = "foo";
	void    *test11_data = (void *)test11_str;
	test2 = ft_create_elem(test11_data);
	printf("test 2 (one elem):\n");
	ft_print_list(test2);
	t_list *found2_1 = ft_list_find(test2, "foo", &strcmp);
	t_list *found2_2 = ft_list_find(test2, "bar", &strcmp);
	printf("foo : %p\n", found2_1);
	printf("bar : %p\n", found2_2);

	char    test11_3_foo_str[] = "foo";
	char    test11_3_bar_str[] = "bar";
	void    *test11_3_foo_data = (void *)test11_3_foo_str;
	void    *test11_3_bar_data = (void *)test11_3_bar_str;
	test3 = ft_create_elem(test11_3_foo_data);
	test3->next = ft_create_elem(test11_3_bar_data);
	printf("test 3 (two elems):\n");
	ft_print_list(test3);
	t_list *found3_1 = ft_list_find(test3, "foo", &strcmp);
	t_list *found3_2 = ft_list_find(test3, "bar", &strcmp);
	printf("foo : %p\n", found3_1);
	printf("bar : %p\n", found3_2);

	if (found == NULL && found2_1 == test2
			&& found2_2 == NULL && found3_1 == test3
			&& found3_2 ==  test3->next)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


/*	printf("\n= ex12 =\n");
	test1 = NULL;
	printf("test 1 (empty):\n");
	ft_print_list(test1);
	ft_list_remove_if(NULL, "bar", &strcmp);
	ft_print_list(test1);

	char    test12_str[] = "foo";
	void    *test12_data = (void *)test12_str;
	test2 = ft_create_elem(test12_data);
	printf("test 2 (one elem):\n");
	ft_print_list(test2);
	ft_list_remove_if(&test2, "foo", &strcmp);
	ft_print_list(test2);

	char    test12_3_foo_str[] = "foo";
	char    test12_3_bar_str[] = "bar";
	void    *test12_3_foo_data = (void *)test12_3_foo_str;
	void    *test12_3_bar_data = (void *)test12_3_bar_str;
	test3 = ft_create_elem(test12_3_foo_data);
	test3->next = ft_create_elem(test12_3_bar_data);
	printf("test 3 (two elems):\n");
	ft_print_list(test3);
	ft_list_remove_if(&test3, "foo", &strcmp);
	ft_print_list(test3);

	if (test1 == NULL && test2 == NULL && test3->data == test12_3_bar_str
			&& test3->next == NULL)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex13 =\n");
	ft_list_merge(NULL, test3);
	ft_list_merge(&test3, NULL);
	printf("list1:\n");
	ft_print_list(test3);
	printf("list2:\n");
	ft_print_list(elem);
	printf("result:\n");
	ft_list_merge(&test3, elem);
	ft_print_list(test3);

	if (test3->next == elem)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex14 =\n");
	test3->data = "bac";
	test3->next->data = "abc";
	test3->next->next->data = "cde";
	ft_print_list(test3);
	ft_list_sort(&test3, &strcmp);
	ft_print_list(test3);

	if (strcmp(test3->data, "abc") == 0
			&& strcmp(test3->next->data, "bac") == 0
			&& strcmp(test3->next->next->data, "cde") == 0
			&& strcmp(test3->next->next->next->data, "foo") == 0)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex15 =\n");
	ft_print_list(test3);
	ft_list_reverse_fun(test3);
	ft_print_list(test3);

	if (strcmp(test3->data, "foo") == 0
			&& strcmp(test3->next->data, "cde") == 0
			&& strcmp(test3->next->next->data, "bac") == 0
			&& strcmp(test3->next->next->next->data, "abc") == 0)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex16 =\n");
	ft_print_list(test3);
	ft_sorted_list_insert(&test3, "bbb", &strcmp);
	ft_print_list(test3);

	if (strcmp(test3->data, "abc") == 0
			&& strcmp(test3->next->data, "bac") == 0
			&& strcmp(test3->next->next->data, "bbb") == 0
			&& strcmp(test3->next->next->next->data, "cde") == 0
			&& strcmp(test3->next->next->next->next->data, "foo") == 0)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");


	printf("\n= ex17 =\n");
	ft_print_list(test3);
	t_list *new_list = ft_create_elem("aaa");
	new_list->next = ft_create_elem("ddd");
	new_list->next->next = ft_create_elem("foa");
	ft_sorted_list_merge(&test3, new_list, &strcmp);
	ft_print_list(test3);

	if (strcmp(test3->data, "aaa") == 0
			&& strcmp(test3->next->data, "abc") == 0
			&& strcmp(test3->next->next->data, "bac") == 0
			&& strcmp(test3->next->next->next->data, "bbb") == 0
			&& strcmp(test3->next->next->next->next->data, "cde") == 0)
		printf("\nOK\n");
	else
		printf("\nError!!!!!!!\n");
*/
	return(0);
}
