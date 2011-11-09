/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKRemindersWithSearchTermPredicate : EKRemindersPredicate  {
    NSString *_searchTerm;
}

@property(readonly) NSString * searchTerm;

+ (id)predicateWithSearchTerm:(id)arg1;

- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)initWithSearchTerm:(id)arg1;
- (id)querySearchTerm;
- (BOOL)queryLimitToCompletedOrIncomplete;
- (id)searchTerm;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end