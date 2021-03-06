/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary;

@interface NSAddressCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property(readonly) void* underlyingResult;


- (unsigned long long)resultType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 components:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 components:(id)arg2;
- (void*)underlyingResult;
- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (id)components;

@end
