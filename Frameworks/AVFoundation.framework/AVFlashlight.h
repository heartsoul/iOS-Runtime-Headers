/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFlashlightInternal;

@interface AVFlashlight : NSObject {
    AVFlashlightInternal *_internal;
}

@property(getter=isAvailable,readonly) BOOL available;
@property(readonly) float flashlightLevel;
@property(getter=isOverheated,readonly) BOOL overheated;

+ (BOOL)hasFlashlight;
+ (void)initialize;

- (void)_refreshIsAvailable;
- (BOOL)bringupFigRecorderWithError:(id*)arg1;
- (void)dealloc;
- (BOOL)ensureFigRecorderWithError:(id*)arg1;
- (float)flashlightLevel;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (BOOL)isAvailable;
- (BOOL)isOverheated;
- (BOOL)setFlashlightLevel:(float)arg1 withError:(id*)arg2;
- (void)teardownFigRecorder;
- (void)turnPowerOff;
- (BOOL)turnPowerOnWithError:(id*)arg1;

@end
