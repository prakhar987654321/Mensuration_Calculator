#include<stdio.h>
#include<math.h>
float area_of_circle(float r);
float perimeter_of_circle(float r);
float area_of_rectangle(float l,float b);
float perimeter_of_rectangle(float l,float b);
float area_of_triangle(float a,float b,float c);
float perimeter_of_triangle(float a,float b,float c);

int main(){
  //choice 1 for circle
  //choice 2 for rectangle
  //choice 3 for triangle
  int choice;
  printf("Please enter choice");
  scanf("%d\n",&choice);
  if(choice==1){
    float r;
    printf("Enter radius");
    scanf("%f\n",&r);
    if(r>0){
      printf("The area of circle is %f\n",area_of_circle(r));
      printf("The perimeter of circle is %f\n",perimeter_of_circle(r));
    }
    else{
      printf("radius must be greater than 0 plaese enter avlid radius");
    }

  }
  else if(choice==2){
    float l;
    printf("Enter length of rectangle");
    scanf("%f\n",&l);
    float b;
    printf("Enter breadth of rectangle");
    scanf("%f\n",&b);
    if(l>0&&b>0){
      printf("the area of rectangle is %f\n",area_of_rectangle(l,b));
      printf("The perimeter of rectangle is %f\n",perimeter_of_rectangle(l,b));
    }
    else{
      printf("please enter valid length and breadth length and breadth must be greater than 0");
    }
  }
  else if(choice==3){
    float a;
    printf("Please enter a");
    scanf("%f\n",&a);
    float b;
    printf("Please enter b");
    scanf("%f\n",&b);
    float c;
    printf("please enter c");
    scanf("%f\n",&c);
    if(a>0&&b>0&&c>0){
      printf("The area of triangle is %f\n",area_of_triangle(a,b,c));
      printf("The perimeter of triangle is %f\n",perimeter_of_triangle( a,b,c));
    }
    else{
      printf("Please enter valid sides of triangle sides must be greater than 0");
    }
  }
  else{
    printf("No shape of area will be formed please enter valid choice");
  }



}
float area_of_circle(float r){
  return(3.14*r*r);
}
float perimeter_of_circle(float r){
  return(2*3.14*r);
}
float area_of_rectangle(float l,float b){
  return(l*b);
}
float perimeter_of_rectangle(float l,float b){
  return 2*(l+b);
}
float area_of_triangle(float a,float b,float c){
  float s=(a+b+c)/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}
float perimeter_of_triangle(float a,float b,float c){
  return (a+b+c);
}


