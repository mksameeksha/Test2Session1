#include<stdio.h>
#include<math.h>
void input_line(float *x1, float *y1,float *x2, float *y2,float *x3, float *y3)
{
  printf("Enter the numbers");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3,int *istriangle)
{
  *istriangle=1/2(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle!=0)
  {
    printf("The three lines form a triangle");
  }
  else
  {
    printf("The three lines do not form triangle");
  }
}
int main()
{
  float x1,y1,x2,y2,x3,y3,istriangle;
  input(&x1,&y1,&x2,&y2,&x3,&y3);
  is_triangle(x1,y1,x2,y2,x3,y3,&istriangle);
  output(x1,y1,x2,y2,x3,y3,istriangle);
  return 0;
}