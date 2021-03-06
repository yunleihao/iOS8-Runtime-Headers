/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMStillImageCaptureRequestDelegate>;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {
    bool_transient;
    long long _deviceOrientation;
    long long _captureDevice;
    long long _flashMode;
    int _hdrMode;
    bool_usesStillImageStabilization;
    bool_wantsAudioForCapture;
    <CAMStillImageCaptureRequestDelegate> *_delegate;
}

@property(getter=isTransient,readonly) bool transient;
@property(readonly) long long deviceOrientation;
@property(readonly) long long captureDevice;
@property(readonly) long long flashMode;
@property(readonly) int hdrMode;
@property(readonly) bool usesStillImageStabilization;
@property(readonly) bool wantsAudioForCapture;
@property(readonly) <CAMStillImageCaptureRequestDelegate> * delegate;


- (bool)wantsAudioForCapture;
- (bool)usesStillImageStabilization;
- (int)hdrMode;
- (long long)captureDevice;
- (long long)flashMode;
- (bool)isTransient;
- (long long)deviceOrientation;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
