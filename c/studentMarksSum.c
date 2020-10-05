// Problem link : https://www.hackerrank.com/challenges/students-marks-sum/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int i,s=0 ;
    if(gender=='b')
    {
        for(i=0;i<number_of_students;i++)
        {
            if(i%2==0)
            s=s+*(marks+i);
            
        }
    }
    else

    {
        for(i=0;i<number_of_students;i++)
        {
            if(i%2!=0)
            s=s+*(marks+i);
            
        }
    }
    return (s);
    
  
}
