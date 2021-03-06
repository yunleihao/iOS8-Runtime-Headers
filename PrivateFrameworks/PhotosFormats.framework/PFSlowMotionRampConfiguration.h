/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionRampConfiguration : NSObject  {
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
    unsigned long long _playbackNumIntermediateSteps;
    unsigned long long _exportNumIntermediateSteps;
}

@property(readonly) double rampTime;
@property(readonly) double introTime;
@property(readonly) double outroTime;
@property(readonly) double volumeSuppressionIntroTime;
@property(readonly) double volumeSuppressionOutroTime;
@property(readonly) unsigned long long playbackNumIntermediateSteps;
@property(readonly) unsigned long long exportNumIntermediateSteps;
@property(readonly) float playbackRampCurveExponent;
@property(readonly) float exportRampCurveExponent;


- (double)volumeSuppressionOutroTime;
- (double)volumeSuppressionIntroTime;
- (void)computeRampToTargetRate:(float)arg1 forExport:(bool)arg2 outTimeSteps:(id*)arg3 outIntermediateRates:(id*)arg4;
- (id)initForRampDown:(bool)arg1;
- (float)playbackRampCurveExponent;
- (float)exportRampCurveExponent;
- (double)outroTime;
- (double)introTime;
- (double)rampTime;
- (unsigned long long)playbackNumIntermediateSteps;
- (unsigned long long)exportNumIntermediateSteps;
- (id)init;

@end
