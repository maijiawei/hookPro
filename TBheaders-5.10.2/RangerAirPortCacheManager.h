//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

@interface RangerAirPortCacheManager : NSObject
{
    NSMutableDictionary *_cacheRecordDict;	// 8 = 0x8
    NSString *_cacheRecordPath;	// 16 = 0x10
    NSString *_zipCheckPath;	// 24 = 0x18
    NSDate *_currentDate;	// 32 = 0x20
    NSString *_airportPath;	// 40 = 0x28
    _Bool _isCheckingZipFiles;	// 48 = 0x30
    NSMutableDictionary *_checkingZipFilesList;	// 56 = 0x38
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)renewCacheWithBlock:(CDUnknownBlockType)arg1;
- (id)cacheKeyFromTestName:(id)arg1 bucketName:(id)arg2;
- (id)cacheKeyFromMd5TestName:(id)arg1 bucketName:(id)arg2;
- (id)getMd5_32Bit:(id)arg1;
- (void)removeAllCaches;
- (void)checkZipFileAtList;
- (void)findAllFilesUnderPath:(id)arg1 relativePath:(id)arg2 resultCollect:(id)arg3;
- (_Bool)unzipFile:(id)arg1 toPath:(id)arg2;
- (void)checkZipFileIsConflictWithExistesTests:(id)arg1 finsihBlock:(CDUnknownBlockType)arg2;
- (_Bool)isCacheAvailable:(id)arg1 andFileExists:(id)arg2;
- (_Bool)isFileExistes:(id)arg1;
- (_Bool)isCacheAvailable:(id)arg1;
- (void)clearCacheWithPath:(id)arg1;
- (void)addCacheWithPath:(id)arg1 zipUrl:(id)arg2;
- (void)removeCacheWithPath:(id)arg1;
- (void)saveRecord;
- (id)init;

@end
