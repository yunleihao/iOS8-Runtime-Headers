/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSImageScalingSpecification : NSObject  {
    int _assetTypeFlags;
    double _nominalShortSideLength;
    double _minimumLongSideLength;
    double _maximumLongSideLength;
}

@property double nominalShortSideLength;
@property double minimumLongSideLength;
@property double maximumLongSideLength;
@property int assetTypeFlags;

+ (id)specificationWithSharedAlbumSpecificationString:(id)arg1;
+ (id)assetsToGenerateFromImageWithInputSize:(struct CGSize { double x1; double x2; })arg1 toConformToSpecifications:(id)arg2;

- (double)scaleFactorForInputSize:(struct CGSize { double x1; double x2; })arg1;
- (int)assetTypeFlags;
- (void)setMaximumLongSideLength:(double)arg1;
- (void)setMinimumLongSideLength:(double)arg1;
- (void)setNominalShortSideLength:(double)arg1;
- (double)maximumLongSideLength;
- (double)minimumLongSideLength;
- (double)nominalShortSideLength;
- (void)setAssetTypeFlags:(int)arg1;
- (id)description;

@end
