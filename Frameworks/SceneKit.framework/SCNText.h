/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, UIFont, UIBezierPath;

@interface SCNText : SCNGeometry  {
    id _reserved;
    float _flatness;
    float _chamferRadius;
    float _extrusionDepth;
    float _discretizedStraightLineMaxLength;
    struct UIBezierPath { Class x1; struct CGPath {} *x2; double *x3; unsigned long long x4; double x5; double x6; double x7; double x8; int x9; int x10; boolx11; struct CGPath {} *x12; boolx13; } *_chamferProfile;
    long long _primitiveType;
    id _string;
    UIFont *_font;
    bool_wrapped;
    int _alignmentMode;
    int _truncationMode;
    bool_useCustomContainerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _customContainerFrame;
    bool__wantsSeparateGeometryElements;
}

@property double extrusionDepth;
@property(copy) id string;
@property(retain) UIFont * font;
@property(getter=isWrapped) bool wrapped;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerFrame;
@property(copy) NSString * truncationMode;
@property(copy) NSString * alignmentMode;
@property double chamferRadius;
@property(copy) UIBezierPath * chamferProfile;
@property double flatness;

+ (id)textWithString:(id)arg1 extrusionDepth:(double)arg2;
+ (id)SCNJSExportProtocol;
+ (id)text;
+ (bool)supportsSecureCoding;

- (double)discretizedStraightLineMaxLength;
- (bool)_wantsSeparateGeometryElements;
- (void)set_wantsSeparateGeometryElements:(bool)arg1;
- (void)setDiscretizedStraightLineMaxLength:(double)arg1;
- (void)_customDecodingOfSCNText:(id)arg1;
- (void)_customEncodingOfSCNText:(id)arg1;
- (id)initWithTextGeometryRef:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_4_1; unsigned char x_1_4_2[4]; unsigned int x_1_4_3; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; long long x_1_3_6; long long x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFArray {} *x_1_2_5; struct __CFSet {} *x_1_2_6; struct __CFArray {} *x_1_2_7; struct __C3DAABB {} *x_1_2_8; int (*x_1_2_9)(); struct { boolx_10_3_1; boolx_10_3_2; unsigned short x_10_3_3; unsigned short x_10_3_4; float x_10_3_5; float x_10_3_6; unsigned char x_10_3_7; unsigned char x_10_3_8; unsigned char x_10_3_9; unsigned char x_10_3_10; struct __C3DMeshElement {} *x_10_3_11; struct __C3DMeshSource {} *x_10_3_12; struct __C3DMesh {} *x_10_3_13; boolx_10_3_14; boolx_10_3_15; void *x_10_3_16; void *x_10_3_17; } x_1_2_10; } x_1_1_1; struct { BOOL x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; int x_2_2_5; float x_2_2_6; struct CGPath {} *x_2_2_7; void *x_2_2_8; struct CGPath {} *x_2_2_9; void *x_2_2_10; } x_1_1_2; struct __C3DMesh {} *x_1_1_3; unsigned char x_1_1_4[16]; } x1; struct { struct __CTFrame {} *x_2_1_1; void *x_2_1_2; void *x_2_1_3; int x_2_1_4; int x_2_1_5; boolx_2_1_6; boolx_2_1_7; boolx_2_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_2_1_9; } x2; }*)arg1;
- (void)setChamferProfile:(struct UIBezierPath { Class x1; struct CGPath {} *x2; double *x3; unsigned long long x4; double x5; double x6; double x7; double x8; int x9; int x10; boolx11; struct CGPath {} *x12; boolx13; }*)arg1;
- (struct UIBezierPath { Class x1; struct CGPath {} *x2; double *x3; unsigned long long x4; double x5; double x6; double x7; double x8; int x9; int x10; boolx11; struct CGPath {} *x12; boolx13; }*)chamferProfile;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrame;
- (double)extrusionDepth;
- (void)setExtrusionDepth:(double)arg1;
- (id)initPresentationTextGeometryWithTextGeometryRef:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_4_1; unsigned char x_1_4_2[4]; unsigned int x_1_4_3; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; long long x_1_3_6; long long x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFArray {} *x_1_2_5; struct __CFSet {} *x_1_2_6; struct __CFArray {} *x_1_2_7; struct __C3DAABB {} *x_1_2_8; int (*x_1_2_9)(); struct { boolx_10_3_1; boolx_10_3_2; unsigned short x_10_3_3; unsigned short x_10_3_4; float x_10_3_5; float x_10_3_6; unsigned char x_10_3_7; unsigned char x_10_3_8; unsigned char x_10_3_9; unsigned char x_10_3_10; struct __C3DMeshElement {} *x_10_3_11; struct __C3DMeshSource {} *x_10_3_12; struct __C3DMesh {} *x_10_3_13; boolx_10_3_14; boolx_10_3_15; void *x_10_3_16; void *x_10_3_17; } x_1_2_10; } x_1_1_1; struct { BOOL x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; int x_2_2_5; float x_2_2_6; struct CGPath {} *x_2_2_7; void *x_2_2_8; struct CGPath {} *x_2_2_9; void *x_2_2_10; } x_1_1_2; struct __C3DMesh {} *x_1_1_3; unsigned char x_1_1_4[16]; } x1; struct { struct __CTFrame {} *x_2_1_1; void *x_2_1_2; void *x_2_1_3; int x_2_1_4; int x_2_1_5; boolx_2_1_6; boolx_2_1_7; boolx_2_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_2_1_9; } x2; }*)arg1;
- (double)chamferRadius;
- (void)setChamferRadius:(double)arg1;
- (void)_syncObjCModel:(struct __C3DTextGeometry { struct __C3DShapeGeometry { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_4_1; unsigned char x_1_4_2[4]; unsigned int x_1_4_3; } x_1_3_1; void *x_1_3_2; struct __CFString {} *x_1_3_3; struct __CFString {} *x_1_3_4; struct __CFDictionary {} *x_1_3_5; long long x_1_3_6; long long x_1_3_7; } x_1_2_1; struct __C3DMesh {} *x_1_2_2; struct __C3DMaterial {} *x_1_2_3; struct __CFArray {} *x_1_2_4; struct __CFArray {} *x_1_2_5; struct __CFSet {} *x_1_2_6; struct __CFArray {} *x_1_2_7; struct __C3DAABB {} *x_1_2_8; int (*x_1_2_9)(); struct { boolx_10_3_1; boolx_10_3_2; unsigned short x_10_3_3; unsigned short x_10_3_4; float x_10_3_5; float x_10_3_6; unsigned char x_10_3_7; unsigned char x_10_3_8; unsigned char x_10_3_9; unsigned char x_10_3_10; struct __C3DMeshElement {} *x_10_3_11; struct __C3DMeshSource {} *x_10_3_12; struct __C3DMesh {} *x_10_3_13; boolx_10_3_14; boolx_10_3_15; void *x_10_3_16; void *x_10_3_17; } x_1_2_10; } x_1_1_1; struct { BOOL x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; int x_2_2_5; float x_2_2_6; struct CGPath {} *x_2_2_7; void *x_2_2_8; struct CGPath {} *x_2_2_9; void *x_2_2_10; } x_1_1_2; struct __C3DMesh {} *x_1_1_3; unsigned char x_1_1_4[16]; } x1; struct { struct __CTFrame {} *x_2_1_1; void *x_2_1_2; void *x_2_1_3; int x_2_1_4; int x_2_1_5; boolx_2_1_6; boolx_2_1_7; boolx_2_1_8; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_9_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_9_2_2; } x_2_1_9; } x2; }*)arg1;
- (void)setPrimitiveType:(long long)arg1;
- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFArray {} *x5; struct __CFSet {} *x6; struct __CFArray {} *x7; struct __C3DAABB {} *x8; int (*x9)(); struct { boolx_10_1_1; boolx_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; boolx_10_1_14; boolx_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)__createCFObject;
- (bool)getBoundingSphereCenter:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 radius:(double*)arg2;
- (bool)getBoundingBoxMin:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 max:(struct SCNVector3 { float x1; float x2; float x3; }*)arg2;
- (id)presentationGeometry;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (void)setTruncationMode:(id)arg1;
- (void)setWrapped:(bool)arg1;
- (id)truncationMode;
- (id)alignmentMode;
- (id)font;
- (bool)isWrapped;
- (long long)primitiveType;
- (id)init;
- (void)setString:(id)arg1;
- (id)string;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlignmentMode:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFlatness:(double)arg1;
- (double)flatness;
- (struct { struct { BOOL x_1_1_1; double x_1_1_2; double x_1_1_3; int x_1_1_4; double x_1_1_5; void *x_1_1_6; void *x_1_1_7; } x1; void *x2; void *x3; int x4; int x5; boolx6; boolx7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; double x9; })params;

@end
