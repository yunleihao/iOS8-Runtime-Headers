/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TITextInputTraits, TIDocumentState;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
}

@property(retain) TIDocumentState * documentState;
@property(retain) TITextInputTraits * textInputTraits;

+ (bool)supportsSecureCoding;
+ (id)stateForKeyboardState:(id)arg1;

- (id)textInputTraits;
- (id)documentState;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createDocumentStateIfNecessary;
- (void)setDocumentState:(id)arg1;
- (void)setTextInputTraits:(id)arg1;

@end