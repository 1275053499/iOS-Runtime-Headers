/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {
    NSMutableDictionary * _childMap;
    NSMutableDictionary * _properties;
}

@property (nonatomic, retain) NSMutableDictionary *childMap;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) BOOL isPaired;
@property (nonatomic, readonly) NSUUID *pairingID;
@property (nonatomic, retain) NSMutableDictionary *properties;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)diffsToActivate:(BOOL)arg1 withDate:(id)arg2;
+ (id)diffsToClearStatusCodeAndCompatibilityState;
+ (id)diffsToPair:(BOOL)arg1 withDate:(id)arg2;
+ (id)diffsToSetStatusCode:(unsigned int)arg1 andCompatibilityState:(unsigned short)arg2;
+ (id)enclosedClassTypes;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allPropertyNames;
- (id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (id)childMap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaired;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pairingID;
- (id)properties;
- (id)propertyForName:(id)arg1;
- (void)removePropertyForName:(id)arg1;
- (void)setChildMap:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (BOOL)supportsCapability:(id)arg1;

@end
