/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@class NSObject<OS_dispatch_queue>, <AirPlayRemoteSlideshowDelegate>, MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject  {
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    <AirPlayRemoteSlideshowDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    bool_started;
    double _startTime;
}

@property <AirPlayRemoteSlideshowDelegate> * delegate;


- (void)stopWithOptions:(id)arg1 completion:(id)arg2;
- (void)startWithOptions:(id)arg1 completion:(id)arg2;
- (void)getFeaturesWithCompletion:(id)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(id)arg2;
- (void)_configureEventHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
