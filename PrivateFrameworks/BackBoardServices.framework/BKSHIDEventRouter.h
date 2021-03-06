/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSSet;

@interface BKSHIDEventRouter : NSObject <NSSecureCoding> {
    long long _destination;
    NSSet *_hidEventDescriptors;
}

@property(readonly) long long destination;
@property(readonly) NSSet * hidEventDescriptors;

+ (id)defaultEventRouters;
+ (id)routerWithDestination:(long long)arg1;
+ (id)defaultFocusedAppEventRouter;
+ (id)defaultSystemAppEventRouter;
+ (bool)supportsSecureCoding;

- (id)dumpContents;
- (bool)containsDescriptor:(id)arg1;
- (bool)specifiesDescriptor:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (void)addHIDEventDescriptors:(id)arg1;
- (id)stringForDestination:(long long)arg1;
- (long long)destination;
- (id)hidEventDescriptors;
- (id)initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2;
- (id)initWithDestination:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
