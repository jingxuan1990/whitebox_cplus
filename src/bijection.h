//
//  bijection.h
//  whiteboxAes
//
//  Created by bryce on 15/5/25.
//  Copyright (c) 2015年 qiqingguo. All rights reserved.
//

#ifndef __whiteboxAes__bijection__
#define __whiteboxAes__bijection__

#include <stdio.h>
#include <time.h>
#include <iostream>
#include <NTL/mat_GF2.h>

NTL::mat_GF2& randomMixingBijection(NTL::mat_GF2 &x, int rank);

#endif /* defined(__whiteboxAes__bijection__) */
