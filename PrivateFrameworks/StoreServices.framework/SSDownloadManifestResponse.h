/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding> {
    NSArray *_validDownloads;
}

@property(copy) NSArray * validDownloads;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)validDownloads;
- (void)setValidDownloads:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
