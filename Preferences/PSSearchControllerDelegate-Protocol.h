//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL, PSSearchController;

@protocol PSSearchControllerDelegate <NSObject>
- (NSArray *)rootSpecifiersForSearchController:(PSSearchController *)arg1;
- (void)searchController:(PSSearchController *)arg1 openURL:(NSURL *)arg2;
@end
