/*
 *  MPTVOutWindow.h
 *  tokei
 *
 *  Created by 藤川 宏之 on 08/11/29.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

#import <UIKit/UIWindow.h>
#import <QuartzCore/QuartzCore.h>

@class MovieTVHUDView, MPVideoBufferLayerContainer, UIMovieSubtitlesView, MovieSnapshotController;

@interface MPVideoView : UIView
{
    UIView *_videoBufferContainerView;
    MPVideoBufferLayerContainer *_videoBufferContainerLayer;
    CALayer *_videoBufferLayer;
    UIMovieSubtitlesView *_subtitlesView;
    struct CGSize _subtitlesMargin;
    MovieSnapshotController *_snapshotController;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    unsigned int _scaleMode;
    unsigned int _effectiveScaleMode;
    unsigned int _disableFudgingScaleToFullScreen:1;
}

- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;
- (BOOL)canChangeScaleMode;
- (id)moviePath;
- (id)movieSubtitle;
- (void)prepareAVControllerQueue;
- (void)setMovieWithPath:(id)fp8;
- (void)playWhenLikelyToKeepUp;
- (void)playFromBeginning;
- (void)setScaleMode:(unsigned int)fp8;
- (void)setScaleMode:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)setSubtitlesMargin:(struct CGSize)fp8;
- (void)setSubtitlesPadding:(struct CGSize)fp8;
- (struct CGSize)subtitlesPadding;
- (void)toggleScaleMode:(BOOL)fp8;
- (void)_bufferingStateChangedNotification:(id)fp8;
- (void)_itemWillChangeNotification:(id)fp8;
- (void)_playbackStateChangedNotification:(id)fp8;
- (void)_sizeDidChangedNotification:(id)fp8;
- (void)_validityChangedNotification:(id)fp8;
- (void)subtitlesDidClear:(id)fp8;
- (void)subtitlesDidUpdate:(id)fp8;
- (void)cancelSnapshots;
- (void)scheduleThumbnailWithSize:(struct CGSize)fp8 orientation:(int)fp16 time:(float)fp20 delegate:(id)fp24;
- (id)_avController;
- (BOOL)_isCloseToFullScreenWithTransform:(struct CGAffineTransform)fp8;
- (void)_layoutSublayers;
- (void)_layoutSubtitleLayers;
- (void)_layoutVideoLayers:(BOOL)fp8;
- (void)insertSubview:(id)fp8 atIndex:(unsigned int)fp12;
- (void)exchangeSubviewAtIndex:(unsigned int)fp8 withSubviewAtIndex:(unsigned int)fp12;
- (void)addSubview:(id)fp8;
- (void)bringSubviewToFront:(id)fp8;
- (void)insertSubview:(id)fp8 below:(id)fp12;
- (id)viewWithTag:(int)fp8;
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)setFrame:(struct CGRect)fp8;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)fp8;
- (struct CGSize)subtitlesMargin;
- (unsigned int)effectiveScaleMode;
- (void)setEffectiveScaleMode:(unsigned int)fp8;
- (unsigned int)scaleMode;
- (id)movieTitle;
- (void)setMovieTitle:(id)fp8;
- (void)setMovieSubtitle:(id)fp8;

@end

@interface NPTVOutBackgroundView : UIView
{
}

- (id)initWithFrame:(struct CGRect)fp8;

@end

@interface MPTVOutWindow : UIWindow
{
	NPTVOutBackgroundView	*_backgroundView;
	MovieTVHUDView			*_hudView;
	MPVideoView				*_videoView;
}

- (id)initWithVideoView:(id)fp8;
- (void)dealloc;
- (BOOL)_canExistBeyondSuspension;
- (void)_playbackStateChanged:(id)fp8;

@end
