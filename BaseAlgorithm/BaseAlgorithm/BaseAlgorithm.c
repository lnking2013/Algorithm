//
//  BaseAlgorithm.c
//  BaseAlgorithm
//
//  Created by lining on 2018/3/12.
//  Copyright © 2018年 lining. All rights reserved.
//

#include "BaseAlgorithm.h"
int binarySearch(int array[],int x, int lenght)
{
    int low = 0;
    int hight = lenght - 1;
    int mid;
    while (low <= hight)
    {
        mid = low + (hight - low)/2;//防止越界
        printf("%d",array[mid]);
        if (array[mid] == x) {
            return mid;
        }
        if (array[mid] > x)
        {
            hight = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        
    }
    return -1;
}
