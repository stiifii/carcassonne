#ifndef GRIDMANAGER_H
#define GRIDMANAGER_H
#define GRIDSIZE 30
extern int grid[GRIDSIZE][GRIDSIZE];
extern int gids; 

int checkisempty(int x, int y);
void placetile(int id, int x, int y);
void showgrid(int grid[30][30]);
void showtilesongrid();
#endif
