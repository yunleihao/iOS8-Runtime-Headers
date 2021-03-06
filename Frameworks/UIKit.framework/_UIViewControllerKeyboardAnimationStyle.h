/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewControllerTransitionContext, _UIViewControllerKeyboardAnimationStyleInfo;

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional  {
    bool_disableAlongsideView;
    bool_allowCustomTransition;
    _UIViewControllerTransitionContext *_context;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
}

@property(readonly) _UIViewControllerTransitionContext * context;
@property bool disableAlongsideView;
@property(readonly) _UIViewControllerKeyboardAnimationStyleInfo * info;
@property bool allowCustomTransition;

+ (id)animationStyleWithContext:(id)arg1;
+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(bool)arg2;

- (id)context;
- (id)initWithContext:(id)arg1;
- (id)info;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)canDismissWithScrollView;
- (bool)isAnimationCompleted;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (bool)allowCustomTransition;
- (void)launchAnimation:(id)arg1 afterStarted:(id)arg2 completion:(id)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (bool)disableAlongsideView;
- (void)setAllowCustomTransition:(bool)arg1;
- (void)setDisableAlongsideView:(bool)arg1;

@end
