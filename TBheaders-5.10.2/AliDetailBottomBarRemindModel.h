//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailBottomBarItemModel.h"

@class NSString;

@interface AliDetailBottomBarRemindModel : AliDetailBottomBarItemModel
{
    NSString *_supplement;	// 8 = 0x8
    long long _verticalBiz;	// 16 = 0x10
    NSString *_itemId;	// 24 = 0x18
    long long _startTime;	// 32 = 0x20
    long long _endTime;	// 40 = 0x28
    NSString *_salesSite;	// 48 = 0x30
}

@property(retain, nonatomic) NSString *salesSite; // @synthesize salesSite=_salesSite;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long verticalBiz; // @synthesize verticalBiz=_verticalBiz;
@property(retain, nonatomic) NSString *supplement; // @synthesize supplement=_supplement;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end
