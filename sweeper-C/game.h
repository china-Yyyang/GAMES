#ifndef game_h
#define game_h

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 
#define ROW 11
#define COL 11
#define numofmine 10
 
void init_board(char mine[ROW][COL], char show[ROW][COL]);//初始化
void display_board(char show[ROW][COL]);//展示棋盘
void set_mine(char mine[ROW][COL]);//放雷
void show_board(char mine[ROW][COL]);//展示棋盘
void my_step(char mine[ROW][COL], char show[ROW][COL]);//玩家行动
int get_mine(char mine[ROW][COL] ,int i,int j);//探知雷数
void open_board(char mine[ROW][COL],char show[ROW][COL],int i,int j);//展开
void safe_board(char mine[ROW][COL],int i,int j);//第一步安全检查
void menu_board(void);//第二个菜单
int check(char mine[ROW][COL],char show[ROW][COL]);

#endif /* game_h */
