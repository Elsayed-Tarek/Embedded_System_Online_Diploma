/*
 * Ex.c
 *
 *  Created on: Aug 21, 2023
 *      Author: Elsayed Tarek
 */
#include<stdio.h>
#include<string.h>
struct Sdistance{
	float feet ;
	float inch ;
};
struct Sdistance read(char name []){
	struct Sdistance s;
	printf("\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.feet);
	printf("\nEnter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.inch);
	return s;
};
struct Sdistance add(struct Sdistance s,struct Sdistance y){
	struct Sdistance result;
	result.feet = s.feet +y.feet;
	result.inch =s.inch+y.inch;
	return result;
};
int main(void){
	struct Sdistance s,y,z;
	int i =0;
	printf("\nEnter information for 1st distance");
	s= read("s");
	printf("\nEnter information for 2nd distance");
	y=read("y");
	z =add(s,y);
	if (z.inch >=12){

		i=z.inch/12;
		z.feet += i;
		z.inch = z.inch - 12;
	}
	printf("\nSum of distances = %.0f'-%.2f\"" ,z.feet ,z.inch );

}
