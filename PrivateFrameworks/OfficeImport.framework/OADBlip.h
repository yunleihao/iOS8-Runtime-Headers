/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADSubBlip;

@interface OADBlip : NSObject  {
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)arg1;

- (id)altSubBlip;
- (void)setAltSubBlip:(id)arg1;
- (void)setMainSubBlip:(id)arg1;
- (id)mainSubBlip;
- (unsigned int*)referenceCount;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end
