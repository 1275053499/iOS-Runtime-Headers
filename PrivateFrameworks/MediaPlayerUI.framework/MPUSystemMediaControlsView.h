/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUSystemMediaControlsView : UIView <SKUIItemOfferButtonDelegate> {
    MPUItemOfferButton *_buyAlbumButton;
    MPUSystemBuyButtonConfiguration *_buyAlbumConfiguration;
    MPUItemOfferButton *_buyTrackButton;
    MPUSystemBuyButtonConfiguration *_buyTrackConfiguration;
    <MPUSystemMediaControlsViewDelegate> *_delegate;
    int _prefsChangedNotifyToken;
    MPUSkipLimitView *_skipLimitView;
    int _style;
    MPUChronologicalProgressView *_timeInformationView;
    MPUMediaControlsTitlesView *_trackInformationView;
    MPUTransportControlsView *_transportControlsView;
    MPUMediaControlsVolumeView *_volumeView;
}

@property (nonatomic, readonly) MPUSystemBuyButtonConfiguration *buyAlbumConfiguration;
@property (nonatomic, readonly) MPUSystemBuyButtonConfiguration *buyTrackConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUSystemMediaControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MPUSkipLimitView *skipLimitView;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPUChronologicalProgressView *timeInformationView;
@property (nonatomic, readonly) MPUMediaControlsTitlesView *trackInformationView;
@property (nonatomic, readonly) MPUTransportControlsView *transportControlsView;
@property (nonatomic, readonly) MPUMediaControlsVolumeView *volumeView;

- (void).cxx_destruct;
- (void)_buyButtonCancelConfirmationAction:(id)arg1;
- (id)_buyButtonForConfiguration:(id)arg1;
- (void)_buyButtonPurchaseAction:(id)arg1;
- (void)_buyButtonShowConfirmationAction:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_controlsInsets;
- (id)_createBuyButtonConfiguration;
- (id)_createBuyButtonWithTitle:(id)arg1 style:(int)arg2;
- (void)_layoutBuyButtons;
- (void)_layoutBuyButtonsControlCenteriPad;
- (void)_layoutSubviewsControlCenteriPad;
- (void)_setBuyButtonVisibility:(BOOL)arg1 forButton:(id)arg2;
- (void)_setConfirmationState:(BOOL)arg1 forBuyButton:(id)arg2;
- (void)_setDownloadProgress:(float)arg1 forBuyButton:(id)arg2;
- (void)_setProgressType:(unsigned int)arg1 forBuyButton:(id)arg2;
- (BOOL)_systemwideBuyButtonsEnabled;
- (void)_updateBuyButton:(id)arg1 withOffer:(id)arg2;
- (id)buyAlbumConfiguration;
- (id)buyTrackConfiguration;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (id)skipLimitView;
- (int)style;
- (id)timeInformationView;
- (id)trackInformationView;
- (id)transportControlsView;
- (void)updatePlaybackState:(BOOL)arg1;
- (id)volumeView;

@end