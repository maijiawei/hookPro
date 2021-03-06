//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JHSOptionItemModel, JHSUTListModel, NSString, UIView;

@protocol JHSUTDelegate <NSObject>

@optional
- (void)didExpose:(JHSOptionItemModel *)arg1 inView:(UIView *)arg2 withUTListModel:(JHSUTListModel *)arg3;
- (void)didRefreshPage:(JHSUTListModel *)arg1;
- (void)didChangeTab:(NSString *)arg1 atIndex:(long long)arg2 inView:(UIView *)arg3 usingGesture:(NSString *)arg4 withUTListModel:(JHSUTListModel *)arg5 optionScm:(NSString *)arg6;
- (void)didSelectPreImageBtn:(JHSOptionItemModel *)arg1 atIndex:(long long)arg2 inView:(UIView *)arg3 usingGesture:(NSString *)arg4 withUTListModel:(JHSUTListModel *)arg5;
- (void)didSelectObject:(JHSOptionItemModel *)arg1 atIndex:(long long)arg2 inView:(UIView *)arg3 withUTListModel:(JHSUTListModel *)arg4;
@end

