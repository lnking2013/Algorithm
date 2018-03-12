//
//  BaseAlgorithm.h
//  BaseAlgorithm
//
//  Created by lining on 2018/3/12.
//  Copyright © 2018年 lining. All rights reserved.
//

#ifndef BaseAlgorithm_h
#define BaseAlgorithm_h



#include <stdio.h>
/**
 二分查找算法 
 1.先决条件：有序的一串数字
 2.时间复杂度：O(log2n)
 
 @param array 要找的有序数组
 @param x  要查找的值
 @param lenght 长度否则数组传参时会发生降级
 @return 返回x对应array数组的下标，未找到返回-1
 */
int binarySearch(int array[],int x, int lenght);
#endif /* BaseAlgorithm_h */
