/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCloudPhotoWelcomeView : UIView {
    UILabel * _bodyLabel;
    BOOL  _buttonsEnabled;
    <PUCloudPhotoWelcomeViewDelegate> * _delegate;
    struct { 
        BOOL goButtonTapped; 
        BOOL learnMoreTapped; 
        BOOL notNowTapped; 
    }  _delegateRespondsTo;
    UILabel * _finePrintLabel;
    UIButton * _goButton;
    NSLayoutConstraint * _goButtonWidthConstraint;
    UIImageView * _graphicImageView;
    UIButton * _learnMoreButton;
    UIButton * _notNowButton;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *bodyLabel;
@property (getter=areButtonsEnabled, nonatomic) BOOL buttonsEnabled;
@property (nonatomic) <PUCloudPhotoWelcomeViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *finePrintLabel;
@property (nonatomic, readonly) UIButton *goButton;
@property (nonatomic, readonly) UIImageView *graphicImageView;
@property (nonatomic, readonly) UIButton *learnMoreButton;
@property (nonatomic, readonly) UIButton *notNowButton;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_goButtonBackgroundImageWithColor:(id)arg1;
- (void)_goButtonTapped:(id)arg1;
- (void)_handleNotNowTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupSubviews;
- (BOOL)areButtonsEnabled;
- (id)bodyLabel;
- (id)delegate;
- (id)finePrintLabel;
- (id)goButton;
- (id)graphicImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)learnMoreButton;
- (id)notNowButton;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;

@end
