//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ImageDownloadLoader, NSData;

@protocol ImageDownloadLoaderDelegate <NSObject>

@optional
- (void)onDownloadFinishedWithLoader:(ImageDownloadLoader *)arg1 AndData:(NSData *)arg2;
@end
