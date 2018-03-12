//
//  main.c
//  BaseAlgorithm
//
//  Created by lining on 2018/3/12.
//  Copyright © 2018年 lining. All rights reserved.
//

#include <stdio.h>
#include "BaseAlgorithm.h"

int main(int argc, const char * argv[]) {
    
    int a[] = {1,2,3,5,6};
    int length = sizeof(a)/sizeof(a[0]);
    printf("leght: %d \n",length);
    
    for (int i = 0; i < length; i++) {
        printf("%d\n",a[i]);
    }
    
    int idx = binarySearch(a,2,length);
    printf("idx: %d \n",idx);
    return 0;
}


