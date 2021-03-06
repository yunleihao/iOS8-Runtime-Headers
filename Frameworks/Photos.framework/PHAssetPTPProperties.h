/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class PHAsset, NSString;

@interface PHAssetPTPProperties : NSObject  {
    PHAsset *_asset;
    NSString *_exifTimestampString;
    NSString *_importSessionID;
}

@property(readonly) PHAsset * asset;
@property(readonly) NSString * exifTimestampString;
@property(readonly) NSString * importSessionID;


- (id)exifTimestampString;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;
- (id)importSessionID;
- (id)asset;
- (void).cxx_destruct;

@end
