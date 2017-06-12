#ifndef kolejka_h
#define kolejka_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
  int x;
  int y;
}point_t;

typedef struct{

  point_t* tab;
  int index;
  int howMuch;
  int size;
}queue_t;


bool queue_create(queue_t *q, int size);
void queue_push(queue_t * q, int x, int y);
point_t* queue_pop(queue_t * q);
bool queue_empty(const queue_t * q);
int queue_size(const queue_t * q);
void queue_print(const queue_t * q);
void queue_push_front(queue_t * q, int x, int y);
point_t* queue_pop_back(queue_t * q);
bool element_exist(queue_t* q, int x, int y);

#endif
