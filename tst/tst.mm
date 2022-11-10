
#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
    srand((unsigned)time(NULL));
    const int n = 7;
    int arr[n];
    
    int res = sumElementOfArray(arr, n,0,0);
    
    XCTAssertNotEqual(res, 1);
    
    
}

@end
