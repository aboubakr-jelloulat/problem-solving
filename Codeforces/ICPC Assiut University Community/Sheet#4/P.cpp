/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   P.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelloul <ajelloul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:53:53 by ajelloul          #+#    #+#             */
/*   Updated: 2025/03/02 16:53:54 by ajelloul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
using namespace std;

int count_word(string s)
{
	int i = 0,  counter = 0,  len = s.length();
	while (i < len)
	{
		while (i < len && (ispunct(s[i]) || s[i] == ' '))
			i++;
		if (i < len && (!ispunct(s[i]) && s[i] != ' '))
			counter ++; // 1  2 
		while (i < len && !ispunct(s[i]) && s[i] != ' ')
			i++;
	}
	return counter;
}

int main(void)
{
	string s;  getline(cin, s);

	cout << count_word(s) << endl;

	return 0;
}
