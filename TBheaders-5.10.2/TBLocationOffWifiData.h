//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBLocationOffWifiData : NSObject
{
    NSString *_strMac;	// 8 = 0x8
    NSString *_strLongitude;	// 16 = 0x10
    NSString *_strLatitude;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *strLatitude; // @synthesize strLatitude=_strLatitude;
@property(retain, nonatomic) NSString *strLongitude; // @synthesize strLongitude=_strLongitude;
@property(retain, nonatomic) NSString *strMac; // @synthesize strMac=_strMac;
- (void).cxx_destruct;
- (void)unPacketOfflineWifiData:(id)arg1;

@end

