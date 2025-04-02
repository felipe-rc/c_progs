/*
Author: Felipe Cardoso
Title: Catch Up
Objective: Remember the basic/semi-advanced concepts I once had
Date: 18/03/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DAY_SIZE 3

enum week
{
  Mon,
  Tue,
  Wed,
  Thur,
  Fri,
  Sat,
  Sun
};

union union_example
{
  int number;
  float floating;
  char str[MAX_DAY_SIZE];
};

void inline_test_function();

int main(void)
{
  union union_example ue;
  char *week_day = (char *)malloc(MAX_DAY_SIZE * sizeof(char));
  inline_test_function();
  enum week day;
  scanf("%s", week_day);
  printf("week_day = %s\n", week_day);
  // day = *week_day;
  // printf("%d\n", day);
  ue.number = 10;
  printf("{\n\tnumber: %d\n\tfloating: %.2f\n\tstr: %s\n}\n", ue.number, ue.floating, ue.str);
  printf("%d\n", ue.number);
  ue.floating = 5.5;
  printf("{\n\tnumber: %d\n\tfloating: %.2f\n\tstr: %s\n}\n", ue.number, ue.floating, ue.str);
  printf("%.2f\n", ue.floating);
  strcpy(ue.str, "LOL");
  printf("{\n\tnumber: %d\n\tfloating: %.2f\n\tstr: %s\n}\n", ue.number, ue.floating, ue.str);
  printf("%s\n", ue.str);
  return 0;
}

inline void inline_test_function()
{
  printf("This is an inline function!\n");
}
