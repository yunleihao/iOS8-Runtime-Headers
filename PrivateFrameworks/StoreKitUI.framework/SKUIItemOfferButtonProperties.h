/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, CAFilter, UIImage, NSAttributedString;

@interface SKUIItemOfferButtonProperties : NSObject  {
    bool_hasBorderView;
    bool_hasTitleLabel;
    bool_universal;
    bool_progressIndeterminate;
    bool_cancelRecognizer;
    UIColor *_borderBackgroundColor;
    UIColor *_borderColor;
    CAFilter *_borderCompositingFilter;
    double _borderWidth;
    double _borderCornerRadius;
    NSAttributedString *_attributedText;
    UIColor *_textColor;
    long long _confirmationTitleStyle;
    long long _titleStyle;
    UIImage *_image;
    long long _progressType;
    double _progress;
    double _alpha;
}

@property bool hasBorderView;
@property(retain) UIColor * borderBackgroundColor;
@property(retain) UIColor * borderColor;
@property(retain) CAFilter * borderCompositingFilter;
@property double borderWidth;
@property double borderCornerRadius;
@property bool hasTitleLabel;
@property(copy) NSAttributedString * attributedText;
@property(retain) UIColor * textColor;
@property bool universal;
@property long long confirmationTitleStyle;
@property long long titleStyle;
@property(retain) UIImage * image;
@property long long progressType;
@property bool progressIndeterminate;
@property double progress;
@property bool cancelRecognizer;
@property double alpha;


- (void)setCancelRecognizer:(bool)arg1;
- (bool)cancelRecognizer;
- (void)setProgressIndeterminate:(bool)arg1;
- (bool)progressIndeterminate;
- (void)setTitleStyle:(long long)arg1;
- (long long)titleStyle;
- (void)setConfirmationTitleStyle:(long long)arg1;
- (long long)confirmationTitleStyle;
- (bool)universal;
- (void)setHasTitleLabel:(bool)arg1;
- (bool)hasTitleLabel;
- (void)setBorderCornerRadius:(double)arg1;
- (double)borderCornerRadius;
- (void)setBorderCompositingFilter:(id)arg1;
- (id)borderCompositingFilter;
- (void)setBorderBackgroundColor:(id)arg1;
- (id)borderBackgroundColor;
- (void)setHasBorderView:(bool)arg1;
- (bool)hasBorderView;
- (long long)progressType;
- (void)setUniversal:(bool)arg1;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (double)borderWidth;
- (double)alpha;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setBorderColor:(id)arg1;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)setProgressType:(long long)arg1;
- (id)textColor;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setAlpha:(double)arg1;

@end
