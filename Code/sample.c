#include<stdio.h>

typedef struct {
  int x;
  int y;
} Point;

void modifyPoint(Point *p) {
  p->x = 10;
  p->y = 20;
}

int main() {
  Point p = {1, 2};
  modifyPoint(&p);
  printf("(%d, %d)\n", p.x, p.y);
  return 0;
}