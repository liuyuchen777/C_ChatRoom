/*
 * @Author: Liu Yuchen
 * @Date: 2021-04-02 19:46:26
 * @LastEditors: Liu Yuchen
 * @LastEditTime: 2021-04-02 07:59:06
 * @Description: 
 * @FilePath: /Local_Lab/C_ChatRoom/utils.c
 * @GitHub: https://github.com/liuyuchen777
 */
#include "utils.h"

#include <string.h>

void trim_newline(char *text)
{
  int len = strlen(text) - 1;
  if (text[len] == '\n')
{
      text[len] = '\0';
  }
}

void clear_stdin_buffer()
{
  int c;
  while((c = getchar()) != '\n' && c != EOF)
    /* discard content*/ ;
}
