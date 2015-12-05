//
//  main.c
//  TrashSorter
//
//  Created by NEIL ROSEMAN on 12/5/15.
//  Copyright (c) 2015 NEIL ROSEMAN. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    time_t t;
    srand((unsigned)time(&t));
    
    int stopped = 0;
    
    int currentTrash = 4;
    int selection = 4;
    const int NumberOfTrash = 3;
    int numCorrect = 0;
    int totalAnswered = 0;
    char *trash[3] = {"Garbage", "Food", "Glass"};
    int TrashType[NumberOfTrash] = {3, 2, 1};
    
   // here's the action!
    while (!stopped){
    currentTrash = rand() % NumberOfTrash;
        printf("Total: %d\tCorrect: %d\n", totalAnswered, numCorrect);
    printf("Hello, %s! \n", trash[currentTrash]);
    printf("Select 1-Recycle 2-Compost 3-Garbage or 4 to Stop\n");
    scanf("%d", &selection);
    
        if (selection == 4) {
        stopped = 1;
            continue;
        }
        
        if (selection == TrashType[currentTrash]){
            printf("Correct!\n");
            ++numCorrect;
                      }
    else
        printf("wrong!\n");
    
        ++totalAnswered;
        
    }
return 0;
}
 