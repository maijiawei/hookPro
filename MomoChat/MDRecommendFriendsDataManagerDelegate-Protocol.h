//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDApiResponse, NSString;

@protocol MDRecommendFriendsDataManagerDelegate <NSObject>

@optional
- (void)applyAddFriendSuccess:(_Bool)arg1 response:(MDApiResponse *)arg2 msg:(NSString *)arg3;
- (void)removeRecommendUserSuccess:(_Bool)arg1 msg:(NSString *)arg2;
- (void)removeHud;
- (void)showHud;
- (void)showErrorMsg:(NSString *)arg1;
- (void)showOKMsg:(NSString *)arg1;
- (void)getDataFail:(NSString *)arg1;
- (void)getDataSuccess:(NSString *)arg1;
- (void)getRecommendPhoneFriendsFail:(NSString *)arg1;
- (void)getRecommendPhoneFriendsSuccess:(NSString *)arg1;
@end
