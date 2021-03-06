/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem> {
    UIColor * _color;
    int  _colorAttributeTag;
    AKColorPaletteView * _colorPalette;
    AKController * _controller;
    int  _tag;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) int colorAttributeTag;
@property (nonatomic, retain) AKColorPaletteView *colorPalette;
@property (nonatomic) AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) int tag;

- (void).cxx_destruct;
- (id)color;
- (int)colorAttributeTag;
- (id)colorPalette;
- (id)controller;
- (id)convertTextAttributes:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColorAttributeTag:(int)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setController:(id)arg1;
- (void)setTag:(int)arg1;
- (void)syncTextAttributesToUI:(id)arg1;
- (int)tag;
- (void)valueChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
