/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSWeakCallback;



@interface NSConcretePointerFunctions : NSPointerFunctions 
{
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } slice;
}

+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)initializeSlice:(struct NSSlice { void **x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; id x11; int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); }*)arg1 withOptions:(NSUInteger)arg2;
     /* Encoded args for previous method: B16@0:4^{NSSlice=^^vccccccccc@^?^?^?^?^?^?^?^?^?^?^?}8I12 */

+ (void)initializeBackingStore:(struct NSSlice { void **x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; id x11; int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); }*)arg1 sentinel:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: v16@0:4^{NSSlice=^^vccccccccc@^?^?^?^?^?^?^?^?^?^?^?}8B12 */


- (id)initWithOptions:(NSUInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (int (*)())sizeFunction;
- (void)setSizeFunction:(int (*)())arg1;
- (void)setDescriptionFunction:(int (*)())arg1;
- (void)setAcquireFunction:(int (*)())arg1;
- (void)setRelinquishFunction:(int (*)())arg1;
- (void)setUsesStrongWriteBarrier:(BOOL)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1;
- (int (*)())hashFunction;
- (int (*)())isEqualFunction;
- (int (*)())descriptionFunction;
- (int (*)())acquireFunction;
- (int (*)())relinquishFunction;
- (BOOL)usesStrongWriteBarrier;
- (BOOL)usesWeakReadAndWriteBarriers;
- (void)setHashFunction:(int (*)())arg1;
- (void)setIsEqualFunction:(int (*)())arg1;

@end