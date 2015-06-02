/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationControllerAssistant : NSObject {
    UIView *_childPaletteView;
    SKUIClientContext *_clientContext;
    UINavigationController *_navigationController;
    _UINavigationControllerPalette *_paletteBackgroundView;
    SKUIPreviewDocumentController *_previewDocumentController;
    SKUIPreviewOverlayViewController *_previewOverlayViewController;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic) BOOL hidesShadow;
@property (nonatomic, readonly) UINavigationController *navigationController;

+ (id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2;
+ (id)existingAssistantForNavigationController:(id)arg1;

- (void).cxx_destruct;
- (void)_hideChildPaletteView:(id)arg1 animated:(BOOL)arg2;
- (void)_hideOverlayView:(id)arg1 animated:(BOOL)arg2;
- (id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2;
- (void)_previewDocumentChangeNotification:(id)arg1;
- (void)_setPreviewDocumentController:(id)arg1 animated:(BOOL)arg2;
- (void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(BOOL)arg3;
- (void)_transitionToPaletteView:(id)arg1 animated:(BOOL)arg2 operation:(int)arg3;
- (id)clientContext;
- (void)dealloc;
- (BOOL)hidesShadow;
- (id)navigationController;
- (void)setHidesShadow:(BOOL)arg1;
- (void)setPalettePinningBarHidden:(BOOL)arg1;
- (void)setPaletteView:(id)arg1 animated:(BOOL)arg2;
- (void)setPreviewDocumentController:(id)arg1;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end