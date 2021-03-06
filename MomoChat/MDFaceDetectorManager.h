//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface MDFaceDetectorManager : NSObject
{
    _Bool _supportDetectFaces;
    NSURL *_objectDetectorModelURL;
}

@property(retain, nonatomic) NSURL *objectDetectorModelURL; // @synthesize objectDetectorModelURL=_objectDetectorModelURL;
@property(nonatomic) _Bool supportDetectFaces; // @synthesize supportDetectFaces=_supportDetectFaces;
- (void).cxx_destruct;
- (void)fallbackObjectDetectorModelWithURL:(id)arg1;
- (void)backUpObjectDetectorModelWithURL:(id)arg1;
- (_Bool)updateObjectDetectorModelWithURL:(id)arg1;
- (void)downLoadFaceGustrueDetector:(id)arg1;
- (id)makeObjectDetector;
- (_Bool)canCreateObjectDetector;
- (id)init;

@end

