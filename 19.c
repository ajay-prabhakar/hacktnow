/*
 * 19.c
 * 
 * Copyright 2019 Kaushik <Kaushik@LAPTOP-J37DQHK4>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
int fib(int);

int main(int argc, char **argv)
{
	int n,f;
	scanf ("%d",&m);
	f=fib(m);
	printf("%d",f);
}
int fib(int m){
	if(m==0){
return m=0;
}
else{
	return fib(m-1)+fib(m-2);
}
}

