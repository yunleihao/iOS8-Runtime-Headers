/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer  {
    FigCaptionLayerPrivate *_priv;
}


- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { }*)arg1;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)layoutSublayers;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setFontName:(const char *)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
