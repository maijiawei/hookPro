//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDObject.h"

@class NSNumber, PDIndexedDBKey;

@interface PDIndexedDBKeyRange : PDObject
{
}

+ (id)keysToEncode;

// Remaining properties
@property(retain, nonatomic) PDIndexedDBKey *lower; // @dynamic lower;
@property(retain, nonatomic) NSNumber *lowerOpen; // @dynamic lowerOpen;
@property(retain, nonatomic) PDIndexedDBKey *upper; // @dynamic upper;
@property(retain, nonatomic) NSNumber *upperOpen; // @dynamic upperOpen;

@end

