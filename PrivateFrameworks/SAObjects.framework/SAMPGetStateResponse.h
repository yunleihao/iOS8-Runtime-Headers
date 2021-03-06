/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SAMPMediaItem, NSString;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SAMPMediaItem * listeningToItem;
@property(copy) NSNumber * listeningToMusicApplication;
@property(copy) NSString * source;
@property int state;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getStateResponse;

- (void)setListeningToMusicApplication:(id)arg1;
- (id)listeningToMusicApplication;
- (void)setListeningToItem:(id)arg1;
- (id)listeningToItem;
- (id)encodedClassName;
- (id)source;
- (void)setSource:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)groupIdentifier;

@end
