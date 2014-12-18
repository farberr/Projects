/***********************************************************
* Author:	Ryan Farber
* Date Created:	2/28/14
* Last Modification Date: 3/2/14
* Filename: GOL
************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#define ROWS 12
#define COLUMNS 50
#define gcolumn(c)  (c%COLUMNS)
#define grow(c)     (c/COLUMNS)
#define left(c)		((gcolumn(c) == 0) ? (COLUMNS-1) : -1)
#define right(c)	((gcolumn(c) == COLUMNS-1) ? (-COLUMNS+1) : 1)
#define up(c)		((grow(c) == 0) ? ((ROWS-1)*COLUMNS) : -COLUMNS)
#define down(c)		((grow(c) == ROWS-1) ? (-(ROWS-1) * COLUMNS) : COLUMNS)

/*
With this version of game of life, I've learned how to do preprocessing
The preprocessors are the directives, which give instruction to the compiler to
pre-process the information before actual compilation starts. It works a lot
like how #include does.

the ? and : is a C ternary operator (Objective - C is a superset of C)

it is semantically equivilant to

if (gcolumn==0) {
left(c) = COLUMNS -1;
}else{
left(c) = -1
}

defining everything beforehand helps to render the map for GoL. I did it both ways,
but it is definitely more useful for something that requires components than from the
procedural side that I'm use to. The other version of this could not compile correctly
so I this version.

*/


using namespace std;

typedef struct _cell {
struct _cell* nb[8];
char state;
char state1;
} cell;


typedef struct {
int rows;
int columns;
cell* cells;
} world;

/*
typedef is necessary for many template metaprogramming tasks -- whenever a class is treated as a
"compile-time type function", a typedef is used as a "compile-time type value" to obtain the resulting type.
E.g. consider a simple metafunction for converting a pointer type to its base type:

_cell is used to in relations to the transformation of the world
struct is used for the original world

*/

void evolution (cell* c){
 int count = 0, i;	// counts up the neighbors
 for (i=0; i<8; i++){
 if (c->nb[i] ->state) count++; // checks the neighbors,adds up count
 }
 if (count == 3 || (c->state && count == 2)) c->state1 = 1; // 2.) and 4.)
    else c->state1 = 0;  // 1.) and 3.) death of cell
}

/*

1.) Any live cell with fewer than two live neighbours dies, as if caused by under-population.
2.) Any live cell with two or three live neighbours lives on to the next generation.
3.) Any live cell with more than three live neighbours dies, as if by overcrowding.
4.) Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.

if we didn't count up, the whole map would be filled with stars

The arrow operator , -> , combines
the actions of a dereferencing operator, * , and a dot operator to specify a member of
a dynamic struct or class object that is pointed to by a given pointer

*/


void transformation (world* w){
 int tcells = w->rows * w->columns, i;

 for (i=0; i<tcells; i++){
 evolution(w->cells + i);
 }
 for (i=0; i <tcells; i++){
 w->cells[i].state = w->cells[i].state1;
 if (!(i%COLUMNS)) printf("\n");
        printf("%c",w->cells[i].state ? '*' : ' ');
    }
}

/*
The transformation is where we label everything on the map and work on the wrapping
of the individual cells when the left side and right side combine. This also includes
the top and bottom too.



*/


world* TheBeginning(){

world* life = (world*)malloc(sizeof(world));  // Allocate memory block
life ->rows = ROWS;
life ->columns = COLUMNS;
life ->cells = (cell*)malloc(sizeof(cell) * COLUMNS * ROWS);
int tcells = life->rows * life->columns, i;
for (i=0; i < tcells; i++)
{
cell* c = life ->cells + i;


c->nb[0] = c+left(i) + up(i);
c->nb[1] = c+up(i);
c->nb[2] = c+right(i) + up(i);
c->nb[3] = c+left(i);
c->nb[4] = c+right(i);
c->nb[5] = c+left(i) + down(i);
c->nb[6] = c+down(i);
c->nb[7] = c+right(i) + down(i);

c-> state= rand() % 2 ;  //
	}
	return life;
}

/*
TheBeginning sets up the stage with the predefined ROWS,COLUMNS, and cell configuration
through random generation.  Malloc allocated memory beforehand to create the field. C
is the life of a single cell. From there, it determines its neighbors and starts the random
configuration of the cells on the map.

012		This is the design of the neighbor cells
3C4		C is the direct center, and it fluctuated through evolution
567

c->state sets the original map up
*/


int main(){
char ans;
do{
	int num;
	int x;



	cout<< "Welcome to the game of life" <<endl;
	cout<< "Please enter a random number for your random pattern" <<endl;
    cin >> num;


	srand(num); // creates different patterns
    world* w = TheBeginning();

    while(1)
    {
		cout<< string(256, '\n'); //clears screen to see process
        cout<< "Enjoy!  Press/Hold enter to watch Life unfold, x + enter to exit" <<endl;
		transformation(w); // watch life happen before your eyes
        char chChar = getchar();
        if(chChar == 'x')
            break;
    }
    cout<< "Do you want to try a new pattern? (y/n)"<<endl;
    cin >>ans;
}while ('Y' == ans || 'y' == ans);


}
/*


Resources used:
http://stackoverflow.com/
http://www.tutorialspoint.com/cplusplus/
http://www.github.com/


*/


