/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPMovieInfoSection : SPSection <PRSMovieInfoSection, SearchUIMovieCardSection>

@property (nonatomic, readonly) <SearchUIActionButtonItem> *actionButton;
@property (nonatomic, retain) <PRSActionButton> *action_button;
@property (nonatomic, retain) NSURL *attribution_url;
@property (nonatomic, readonly, copy) NSArray *buyButtonSections;
@property (nonatomic, retain) NSArray *buy_button_sections;
@property (nonatomic) BOOL card_padding_bottom;
@property (nonatomic) BOOL card_padding_top;
@property (nonatomic, readonly) UIImage *coverImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *detailSections;
@property (nonatomic, readonly) BOOL hasBottomPadding;
@property (nonatomic, readonly) BOOL hasTopPadding;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL hideDivider;
@property (nonatomic) BOOL hide_divider;
@property (nonatomic, retain) PRSImage *image;
@property (nonatomic, readonly) NSArray *punchoutOptions;
@property (nonatomic, readonly) NSString *punchoutPickerDismissLabel;
@property (nonatomic, readonly) NSString *punchoutPickerLabel;
@property (nonatomic, readonly) UIImage *rottenTomatoesGlyph;
@property (nonatomic, readonly, copy) NSString *rottenTomatoesText;
@property (nonatomic, retain) PRSImage *rt_glyph;
@property (nonatomic, retain) NSString *rt_text;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, retain) NSURL *url;

// Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI

- (id)actionButton;
- (id)buyButtonSections;
- (id)coverImage;
- (id)detailSections;
- (id)rottenTomatoesGlyph;
- (id)rottenTomatoesText;

@end