//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsLibrary, NSMutableArray;

@interface ShareOrderAlbumManager : NSObject
{
    NSMutableArray *_assetsGroups;
    _Bool _albumAvailable;
    ALAssetsLibrary *_assetsLibray;
}

+ (id)shareInstanceShareOrderAlbumManager;
@property(nonatomic) _Bool albumAvailable; // @synthesize albumAvailable=_albumAvailable;
@property(readonly, retain, nonatomic) ALAssetsLibrary *assetsLibray; // @synthesize assetsLibray=_assetsLibray;
- (void).cxx_destruct;
- (void)loadGroupsAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
