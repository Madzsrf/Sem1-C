#include<stdio.h>

void main(){

    int l1,l2,l3,b1,b2,b3,p1,p2,p3;

    printf("Enter Length of rectangle 1: ");
    scanf("%d",&l1);
    printf("Enter Breath of rectangle 1: ");
    scanf("%d",&b1);

    printf("Enter Length of rectangle 2: ");
    scanf("%d",&l2);
    printf("Enter Breath of rectangle 2: ");
    scanf("%d",&b2);

    printf("Enter Length of rectangle 3: ");
    scanf("%d",&l3);
    printf("Enter Breath of rectangle 3: ");
    scanf("%d",&b3);
    
    p1=2*(l2+b1);
    p2=2*(l2+b2);
    p3=2*(l3+b3);

    if (p1>p2&&p1>p3){
        printf("Rectangle 1 has the highest perimeter of %d",p1);
    } else if(p2>p1&&p2>p3){
        printf("Rectangle 2 has the highest perimeter of %d",p2);
    } else if(p3>p1&&p3>p2){
        printf("Rectangle 3 has the highest perimeter of %d",p3);
    } else if(p1>p2&&p3>p2){
        printf("Rectangles 1 and 3 have the highest perimeter of %d",p1);
    } else if(p2>p3&&p1>p3){
        printf("Rectangles 1 and 2 have the highest perimeter of %d",p1);
    } else if(p3>p1&&p2>p1){
        printf("Rectangles 2 and 3 have the highest perimeter of %d",p2);
    } else{
        printf("All rectangles have equal perimeter.");
    }
}

