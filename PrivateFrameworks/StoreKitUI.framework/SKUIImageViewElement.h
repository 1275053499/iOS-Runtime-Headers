/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageViewElement : SKUIViewElement {
    NSString *_alt;
    BOOL _enabled;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) id resourceCacheKey;
@property (nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;
@property (nonatomic, readonly) id transientResourceCacheKey;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (int)pageComponentType;
- (BOOL)rendersWithPerspective;
- (id)resourceCacheKey;
- (id)resourceName;
- (struct CGSize { float x1; float x2; })size;
- (id)transientResourceCacheKey;

@end