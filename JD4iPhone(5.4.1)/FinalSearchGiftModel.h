//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSNumber, NSString;

@interface FinalSearchGiftModel : JDModel
{
    NSString *_giftId;
    NSString *_giftName;
    NSString *_giftImagePath;
    NSString *_giftAddMoney;
    NSString *_giftMsg;
    NSString *_imageDomin;
    NSNumber *_checkType;
    NSString *_maidian;
}

@property(copy, nonatomic) NSString *maidian; // @synthesize maidian=_maidian;
@property(retain, nonatomic) NSNumber *checkType; // @synthesize checkType=_checkType;
@property(copy, nonatomic) NSString *imageDomin; // @synthesize imageDomin=_imageDomin;
@property(copy, nonatomic) NSString *giftMsg; // @synthesize giftMsg=_giftMsg;
@property(copy, nonatomic) NSString *giftAddMoney; // @synthesize giftAddMoney=_giftAddMoney;
@property(copy, nonatomic) NSString *giftImagePath; // @synthesize giftImagePath=_giftImagePath;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(copy, nonatomic) NSString *giftId; // @synthesize giftId=_giftId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

