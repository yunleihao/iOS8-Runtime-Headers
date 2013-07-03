/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImage, CALayer;

@interface MKModernUserLocationView : MKUserLocationView  {
    CALayer *_innerCircleLayer;
    BOOL _shouldInnerPulse;
    struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; } *_innerImageMask;
    BOOL _rotateInnerImageToMatchCourse;
    CALayer *_baseLayer;
}

@property BOOL shouldInnerPulse;
@property(retain) UIImage * innerImageMask;
@property BOOL rotateInnerImageToMatchCourse;

+ (float)baseDiameter;
+ (float)innerDiameter;

- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)rotateInnerImageToMatchCourse;
- (id)innerImageMask;
- (BOOL)shouldInnerPulse;
- (void)setRotateInnerImageToMatchCourse:(BOOL)arg1;
- (void)setInnerImageMask:(struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)arg1;
- (void)_updateInnerCourseRotation;
- (void)_updatePulseAnimation;
- (id)_innerPulseAnimation;
- (void)setShouldInnerPulse:(BOOL)arg1;
- (void)_updateInnerMaskLayer;
- (void)_setupLayers;
- (void)_updateLayers;
- (id)_baseLayer;
- (void)_setMapPitchRadians:(float)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)_dealloc;
- (void)didMoveToWindow;

@end