/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand  {
}

@property int reason;
@property(copy) NSString * reasonDescription;

+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechFailure;

- (void)setReasonDescription:(id)arg1;
- (id)reasonDescription;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (int)reason;
- (void)setReason:(int)arg1;
- (id)groupIdentifier;

@end