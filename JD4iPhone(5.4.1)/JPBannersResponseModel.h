//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface JPBannersResponseModel : JDModel
{
    NSString *adName;
    int adType;
    NSString *adImgUrl;
    int adPlat;
    int hotelId;
    NSString *webImgUrl;
    int adLocation;
    NSString *checkInCity;
    NSString *checkInDate;
    NSString *keyword;
    NSString *takeoffCity;
    NSString *arriveCity;
    NSString *takeoffDate;
}

@property(retain, nonatomic) NSString *takeoffDate; // @synthesize takeoffDate;
@property(retain, nonatomic) NSString *arriveCity; // @synthesize arriveCity;
@property(retain, nonatomic) NSString *takeoffCity; // @synthesize takeoffCity;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword;
@property(retain, nonatomic) NSString *checkInDate; // @synthesize checkInDate;
@property(retain, nonatomic) NSString *checkInCity; // @synthesize checkInCity;
@property(nonatomic) int adLocation; // @synthesize adLocation;
@property(retain, nonatomic) NSString *webImgUrl; // @synthesize webImgUrl;
@property(nonatomic) int hotelId; // @synthesize hotelId;
@property(nonatomic) int adPlat; // @synthesize adPlat;
@property(retain, nonatomic) NSString *adImgUrl; // @synthesize adImgUrl;
@property(nonatomic) int adType; // @synthesize adType;
@property(retain, nonatomic) NSString *adName; // @synthesize adName;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;
- (id)init;

@end

