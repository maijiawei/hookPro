//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface WeAppListDataSource : NSObject
{
    NSArray *_dataList;	// 8 = 0x8
    NSMutableDictionary *_modelList;	// 16 = 0x10
    NSMutableDictionary *_rectList;	// 24 = 0x18
    NSMutableDictionary *_imageDidLoadList;	// 32 = 0x20
    NSString *_prefix;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableDictionary *imageDidLoadList; // @synthesize imageDidLoadList=_imageDidLoadList;
@property(retain, nonatomic) NSMutableDictionary *rectList; // @synthesize rectList=_rectList;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSMutableDictionary *modelList; // @synthesize modelList=_modelList;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)needPrefix;
- (void)parseDataBindingWithIndex:(unsigned long long)arg1 cellViewItem:(id)arg2 weAppDataManager:(id)arg3;
- (void)parseCellModelCAViewIdWithIndex:(unsigned long long)arg1 cellViewItem:(id)arg2 weAppDataManager:(id)arg3;
- (id)generateViewIdWithCellViewItem:(id)arg1;
- (long long)cellCount;
- (long long)count;
- (void)removeAllCellitems;
- (void)parseCellitem:(id)arg1 weAppDataManager:(id)arg2;
- (id)setViewRectWithhCellComponentItem:(id)arg1;
- (id)getViewRectWithCellComponentItem:(id)arg1;
- (id)getComponentItemWithIndex:(unsigned long long)arg1 celComponentItem:(id)arg2 weAppDataManager:(id)arg3;
- (void)setDataWithComponentItem:(id)arg1 weAppDataManager:(id)arg2 objectName:(id)arg3;
- (void)setDataWithComponentItem:(id)arg1 weAppDataManager:(id)arg2;
- (void)setImageDidLoaded:(_Bool)arg1 cellComponentItem:(id)arg2;
- (id)getImageDidLoaded:(id)arg1;
- (void)copyComponentData:(id)arg1;
- (_Bool)dataFromApiOrDataSource:(id)arg1;
- (void)configList;
- (void)configWithArray:(id)arg1 ObjectName:(id)arg2;
- (id)init;
- (id)initWithComponentItem:(id)arg1 weAppDataManager:(id)arg2;

@end

