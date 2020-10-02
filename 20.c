/*
 * 20.c
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

int main(int argc, char **argv)
{
	int x,j,n,f=0;
	scanf("%d",&n);
	int b[n];
	for (x=0;x<n;x++){
		scanf(" %d",&b[x]);
	}
	for (x=0;x<n-1;x++){
		
		
		for(j=x+1;j<n;j
		    
			
			if (b[x]>b[j] && x<j){
				f=f+1;
			}
		}
	}
	printf(" %d ",f);
	return 0;
}

