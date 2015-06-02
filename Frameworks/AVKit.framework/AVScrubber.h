/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrubber : UISlider {
    float _beginTouchLocationInViewY;
    NSArray *_loadedTimeRanges;
    AVLoadedTimeRangesView *_loadedTimeRangesMaxTrackView;
    int _scrubbingSpeed;
    UIImageView *_thumbView;
    float _touchLocationOffsetFromThumbViewCenter;
}

@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) NSString *localizedScrubbingSpeedName;
@property (getter=isPreciseScrubbingFeasible, nonatomic, readonly) BOOL preciseScrubbingFeasible;
@property (nonatomic) int scrubbingSpeed;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
+ (id)keyPathsForValuesAffectingPreciseScrubbingFeasible;

- (void).cxx_destruct;
- (void)_initSubviews;
- (void)_layoutSubviewsForBoundsChange:(BOOL)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPreciseScrubbingFeasible;
- (void)layoutSubviews;
- (id)loadedTimeRanges;
- (id)localizedScrubbingSpeedName;
- (int)scrubbingSpeed;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setScrubbingSpeed:(int)arg1;

@end