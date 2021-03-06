/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboard, UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {
    UIWebSelectTableViewController *_tableViewController;
    UIKeyboard *_keyboard;
}

@property(retain) UIWebSelectTableViewController * _tableViewController;


- (void)dealloc;
- (void)set_tableViewController:(id)arg1;
- (void)_userActionDismissedPopover:(id)arg1;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(bool)arg5;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (id)_tableViewController;

@end
