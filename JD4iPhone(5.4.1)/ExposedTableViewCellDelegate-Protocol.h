//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExposedTableViewCell, NSArray, NSIndexPath;

@protocol ExposedTableViewCellDelegate <NSObject>
- (void)saveFilterData:(ExposedTableViewCell *)arg1 withData:(NSArray *)arg2 index:(long long)arg3;
- (void)updateTableListData:(ExposedTableViewCell *)arg1 withIndex:(NSIndexPath *)arg2 isOpen:(_Bool)arg3;
- (void)allBrandBtnClick:(ExposedTableViewCell *)arg1 withIndex:(long long)arg2;
@end

