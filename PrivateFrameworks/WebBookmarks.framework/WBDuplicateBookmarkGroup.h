/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WBDuplicateBookmarkGroup : NSObject {
    NSMutableArray * _dupicateBookmarks;
    BOOL  _foundDuplicates;
    WebBookmark * _originalBookmark;
}

@property (nonatomic, readonly) NSArray *duplicates;
@property (nonatomic, readonly) BOOL foundDuplicates;
@property (nonatomic, readonly) WebBookmark *originalBookmark;

- (void).cxx_destruct;
- (void)addDuplicateBookmark:(id)arg1 replaceOriginal:(BOOL)arg2;
- (id)duplicates;
- (BOOL)foundDuplicates;
- (id)initWithOriginalBookmark:(id)arg1;
- (id)originalBookmark;
- (void)removeAllDuplicates;

@end
