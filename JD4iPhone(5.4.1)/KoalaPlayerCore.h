//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LEMediaPlayerCore.h"

@class KoalaPlayerOperationStateHandler, NSObject<OS_dispatch_queue>, NSString, UIView;

@interface KoalaPlayerCore : LEMediaPlayerCore
{
    float _startPlayCacheDuration;
    float _startBufferCacheDuration;
    float _endBufferCacheDuration;
    float _maxDelayDuration;
    float _maxCacheDuration;
    int _playerCorePanoramaGyroOrientation;
    _Bool _isRtspPreferTCP;
    long long _displayType;
    NSString *_urlString;
    struct lec_player_t *_player;
    KoalaPlayerOperationStateHandler *_operationStateHandler;
    UIView *_contentView;
    NSObject<OS_dispatch_queue> *_renderQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) KoalaPlayerOperationStateHandler *operationStateHandler; // @synthesize operationStateHandler=_operationStateHandler;
@property(nonatomic) struct lec_player_t *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)setLogLevel;
- (void)reloadContentView;
- (long long)mediaPlayerCoreLevelFromKoalaPlayerCoreLevel:(int)arg1;
- (void)tickToSendPlayerTimeToDelegate;
- (void)releaseMediaPlayer:(struct lec_player_t *)arg1;
- (struct lec_player_t *)createMediaPlayer;
- (void)onRecvSeekDoneEvent;
- (void)onRecvPrepareDoneEvent;
- (void)suspend:(_Bool)arg1;
- (_Bool)seekToPosition:(long long)arg1;
- (_Bool)stop;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)prepare;
- (void)dealloc;
- (id)initWithMediaPlayerType:(long long)arg1 urlString:(id)arg2 displayType:(long long)arg3;
- (id)initWithMediaPlayerType:(long long)arg1 urlString:(id)arg2;
- (void)setDisplayType:(long long)arg1;
- (long long)displayType;
- (void)setIsRtspPreferTCP:(_Bool)arg1;
- (_Bool)isRtspPreferTCP;
- (void)setPlayerCorePanoramaGyroOrientation:(int)arg1;
- (int)playerCorePanoramaGyroOrientation;
- (void)setMaxCacheDuration:(float)arg1;
- (float)maxCacheDuration;
- (void)setMaxDelayDuration:(float)arg1;
- (float)maxDelayDuration;
- (void)setEndBufferCacheDuration:(float)arg1;
- (float)endBufferCacheDuration;
- (void)setStartBufferCacheDuration:(float)arg1;
- (float)startBufferCacheDuration;
- (void)setStartPlayCacheDuration:(float)arg1;
- (float)startPlayCacheDuration;
@property(nonatomic) float volume; // @dynamic volume;
@property(nonatomic) float duration; // @dynamic duration;
@property(nonatomic) float cacheDuration; // @dynamic cacheDuration;
@property(nonatomic) float position; // @dynamic position;
@property(nonatomic) float videoHeight; // @dynamic videoHeight;
@property(nonatomic) float videoWidth; // @dynamic videoWidth;
@property(nonatomic) __weak id <LEMediaPlayerCoreDelegate> delegate; // @dynamic delegate;
@property(nonatomic) long long status; // @dynamic status;
@property(nonatomic) UIView *videoView; // @dynamic videoView;
@property(nonatomic) long long mediaPlayerType; // @dynamic mediaPlayerType;

@end

