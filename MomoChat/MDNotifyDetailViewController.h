//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDSwitch, NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface MDNotifyDetailViewController : MDViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_cellModels;
    NSMutableDictionary *_cellModelsDic;
    MBProgressHUD *_hud;
    UITableView *_tableView;
    MDSwitch *_currentSwitch;
}

@property(retain, nonatomic) MDSwitch *currentSwitch; // @synthesize currentSwitch=_currentSwitch;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSMutableDictionary *cellModelsDic; // @synthesize cellModelsDic=_cellModelsDic;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
- (void)addNotifications;
- (void)removeHud;
- (void)showHud;
- (void)commitCircleCommentPushEnableStateFinish:(id)arg1;
- (void)circleCommentPushStateChanged:(id)arg1;
- (void)commitChangedPushGroupFeedFinish:(id)arg1;
- (void)pushGroupFeedValueChanged:(id)arg1;
- (void)commitChangedPushFeedVideoShareFinish:(id)arg1;
- (void)feedVideoSharePushStateChanged:(id)arg1;
- (void)commitChangedPushFriendFeedFinish:(id)arg1;
- (void)pushFriendFeedValueChanged:(id)arg1;
- (void)commitChangedPushHelloPushFinish:(id)arg1;
- (void)helloPushSwitchChanged:(id)arg1;
- (void)handleChangePushStateNotification:(id)arg1;
- (void)likeSwitchStateChange:(id)arg1;
- (void)commentSwitchStateChange:(id)arg1;
- (void)resetCellBackgroundView:(id)arg1 indexPath:(id)arg2;
- (void)switchStateChanged:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configureTableView;
- (void)updateCellModelWithKey:(id)arg1 on:(_Bool)arg2;
- (void)addCellModel:(id)arg1 forGroup:(id)arg2;
- (void)setupCellModels;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)back;
- (void)setupNavBar;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

