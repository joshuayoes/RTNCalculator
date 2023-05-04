
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRTNCalculatorSpec.h"

@interface RTNCalculator : NSObject <NativeRTNCalculatorSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RTNCalculator : NSObject <RCTBridgeModule>
#endif

@end
