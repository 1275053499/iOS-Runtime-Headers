/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying> {
    NSString * _dataPropertyName;
    SEL  _deprecatedResolveSelector;
    NSString * _facadePropertyName;
    BOOL  _isExtended;
    BOOL  _isPrivate;
    NSString * _name;
    SEL  _resolveSelector;
    unsigned int  _tag;
    int  _valueStyle;
    int  _valueType;
}

@property (nonatomic, readonly, copy) NSString *dataPropertyName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) SEL deprecatedResolveSelector;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *facadePropertyName;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isExtended;
@property (nonatomic, readonly) BOOL isPrivate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) SEL resolveSelector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int tag;
@property (nonatomic, readonly) int valueStyle;
@property (nonatomic, readonly) int valueType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPropertyName;
- (SEL)deprecatedResolveSelector;
- (id)facadePropertyName;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 tag:(unsigned int)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(int)arg5 valueStyle:(int)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelector:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned int)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(int)arg5 valueStyle:(int)arg6 isExtended:(BOOL)arg7 isPrivate:(BOOL)arg8 resolveSelector:(SEL)arg9 deprecatedResolveSelector:(SEL)arg10;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExtended;
- (BOOL)isPrivate;
- (id)name;
- (SEL)resolveSelector;
- (unsigned int)tag;
- (int)valueStyle;
- (int)valueType;

@end