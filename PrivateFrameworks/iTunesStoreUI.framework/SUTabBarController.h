/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSection, NSString, NSArray, UIViewController, NSMutableArray;



@interface SUTabBarController : UITabBarController 
{
    NSArray *_cachedControllers;
    SUSection *_cachedControllersSection;
    NSString *_moreListTitle;
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    NSInteger _reloadingUnderneathTransientControllerCount;
    NSArray *_sections;
    BOOL _trackingNetworkType;
}

@property(retain) NSString *selectedIdentifier;
@property(retain) NSArray *sections;
@property(retain) NSString *moreListTitle;
@property <SUTabBarControllerDelegate> *delegate;


- (void)setSections:(id)arg1;
- (void)setMoreListTitle:(id)arg1;
- (void)cancelTransientViewController:(id)arg1;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (id)viewControllerForSectionIdentifier:(id)arg1;
- (void)rootTransientViewController:(id)arg1 inSectionWithIdentifier:(id)arg2;
- (NSUInteger)indexOfViewControllerWithSectionType:(NSInteger)arg1;
- (id)overlayBackgroundViewController;
- (void)setSelectedIdentifier:(id)arg1;
- (void)reloadForNetworkTypeChange;
- (id)moreListTitle;
- (id)selectedIdentifier;
- (BOOL)loadFromDefaults;
- (void)resetUserDefaults;
- (BOOL)saveOrderingToDefaults;
- (BOOL)saveToDefaults;
- (void)selectDefaultSection;
- (void)selectSectionOfType:(NSInteger)arg1;
- (void)setSectionOrdering:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)viewControllerForSectionType:(NSInteger)arg1;
- (void)_locationChanged:(id)arg1;
- (void)_partnerChanged:(id)arg1;
- (void)_applyMoreListTitle;
- (id)_archivedContextsForViewController:(id)arg1;
- (void)_beginReloadingUnderneathTransientViewController;
- (void)_clearNetworkLockoutController;
- (void)_configureStatusBarForTransitionToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_destroyCachedControllers;
- (void)_endReloadingUnderneathTransientViewController;
- (void)_fixupTabBarSelection;
- (void)_fixupViewControllers;
- (BOOL)_isReloadingUnderneathTransientViewController;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(BOOL)arg2;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (id)_rootViewControllerForSection:(id)arg1;
- (BOOL)_saveNavigationPathToDefaults;
- (BOOL)_saveTransientNavigationPathToDefaults;
- (void)_transitionSafeHandleLocationChange:(id)arg1;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (void)_transitionSafeReloadForNetworkTypeChange;
- (void)_updateLockoutVisibility;
- (void)_updateLockoutVisibilityForMoreList;
- (id)_viewControllerForContext:(id)arg1;
- (id)rotatingHeaderView;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (id)selectedViewController;
- (void)_setSelectedViewController:(id)arg1;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dismissModalViewControllerWithTransition:(NSInteger)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (id)rotatingFooterView;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(NSInteger)arg2;
- (void)dealloc;
- (id)sections;

@end