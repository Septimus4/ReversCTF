//
// Created by septimus on 18/09/2020.
//

/* Copyright (C) 1991-2019 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_putstr(char *str)
{
	int carac;

	carac = 0;
	while (str[carac] != '\0')
	{
		my_putchar(str[carac]);
		carac = carac + 1;
	}
}

int strncmp( const char * s1, const char * s2, int n )
{
	my_putstr(s1);
	my_putchar('\n');
	my_putstr(s2);
	while ( n && *s1 && ( *s1 == *s2 ) )
	{
		++s1;
		++s2;
		--n;
	}
	if ( n == 0 )
	{
		return 0;
	}
	else
	{
		return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
	}
}