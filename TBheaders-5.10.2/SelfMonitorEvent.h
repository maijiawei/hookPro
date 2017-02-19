//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SelfMonitorEvent : NSObject
{
    unsigned long long _eventType;	// 8 = 0x8
    NSString *_module;	// 16 = 0x10
    NSString *_monitorPoint;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *monitorPoint; // @synthesize monitorPoint=_monitorPoint;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)initWithMonitorPoint:(id)arg1;
- (id)initWithModule:(id)arg1 monitorPoint:(id)arg2;

@end
