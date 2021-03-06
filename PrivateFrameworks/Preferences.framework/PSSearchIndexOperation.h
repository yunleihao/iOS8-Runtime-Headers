/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSSearchIndexOperationDelegate>, PSSearchEntry;

@interface PSSearchIndexOperation : NSOperation  {
    PSSearchEntry *_searchEntry;
    <PSSearchIndexOperationDelegate> *_delegate;
}

@property(readonly) PSSearchEntry * searchEntry;
@property <PSSearchIndexOperationDelegate> * delegate;

+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(bool*)arg2 checkManifest:(bool*)arg3;

- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(bool)arg2;
- (id)searchEntry;
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;
- (void)_cancel;
- (void)main;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
