/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, NSCoding, NSSecureCoding, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _compactConstraints;
    _AAUIDataclassOptionCache * _dataclassOptionCache;
    <AAUIDataclassPickerViewControllerDelegate> * _delegate;
    NSArray * _expandedConstraints;
    AAUIBuddyView * _tableFooterView;
    AAUIHeaderView * _tableHeaderView;
    UITableView * _tableView;
}

@property (nonatomic, copy) NSDictionary *dataclassOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIDataclassPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) AAUIBuddyView *view;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_additionalInformationSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (float)_compressedHeightForView:(id)arg1 containedInView:(id)arg2;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)arg1;
- (void)_dismissAdditionalInformation:(id)arg1;
- (BOOL)_hasPaymentPasses;
- (id)_nextBarButtonItem;
- (void)_nextButtonSelected:(id)arg1;
- (id)_signOutFooterText;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (id)_tableView;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (id)dataclassOptions;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataclassOptions:(struct NSDictionary { Class x1; }*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDataclassOptions:(struct NSDictionary { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)switchTableViewCellDidUpdateValue:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end