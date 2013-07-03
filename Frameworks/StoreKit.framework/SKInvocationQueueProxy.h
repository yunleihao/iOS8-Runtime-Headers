/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class Protocol, NSMutableArray;

@interface SKInvocationQueueProxy : NSObject  {
    NSMutableArray *_invocationQueue;
    id _invocationTarget;
    Protocol *_protocol;
}

@property(retain) id invocationTarget;


- (void)setInvocationTarget:(id)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)invocationTarget;

@end