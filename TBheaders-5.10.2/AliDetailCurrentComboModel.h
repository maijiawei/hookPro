//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AlidetailComboItemsForAppModel;

@interface AliDetailCurrentComboModel : TBJSONModel
{
    NSString *_name;	// 8 = 0x8
    NSArray<AlidetailComboItemsForAppModel> *_itemsForApp;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray<AlidetailComboItemsForAppModel> *itemsForApp; // @synthesize itemsForApp=_itemsForApp;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

