/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, NSDictionary, NSHashTable, NSString;

@interface _UISettings : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying> {
    NSHashTable *_internal_keyObservers;
    NSHashTable *_internal_keyPathObservers;
    NSSet *_internal_childKeys;
    NSSet *_internal_leafKeys;
    NSDictionary *_internal_keyClasses;
    NSDictionary *_internal_keyStructs;
    bool_internal_isObservingPropertiesAndChildren;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2;
+ (id)settingsFromArchiveDictionary:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)_isObservingPropertiesAndChildren;
- (void)removeKeyObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (bool)restoreFromArchiveFile:(id)arg1 error:(id*)arg2;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (void)restoreDefaultValues;
- (bool)archiveToFile:(id)arg1 error:(id*)arg2;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)_handleChildGroupChange:(id)arg1;
- (id)_keyForChild:(id)arg1;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_sendKeyChanged:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (id)_associatedName;
- (id)_associatedNameOrNilIfDefault;
- (void)_startObservingPropertiesAndChildren;
- (bool)_hasObservers;
- (void)_stopObservingChild:(id)arg1;
- (void)_startObservingChild:(id)arg1;
- (id)_dictionaryForStructKey:(id)arg1 ofType:(id)arg2;
- (id)_dictionaryForFontKey:(id)arg1;
- (id)_dictionaryForColorKey:(id)arg1;
- (id)_structValueForKey:(id)arg1 ofType:(id)arg2 fromDictionary:(id)arg3;
- (id)_fontForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)_colorForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (id)archiveValueForKey:(id)arg1;
- (id)_allKeys;
- (void)_stopObservingPropertiesAndChildren;
- (id)_initWithArchiveDictionary:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)_setAssociatedName:(id)arg1;
- (void)setDefaultValues;
- (void)_introspectKeys;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_startInit;
- (void)setValuesFromModel:(id)arg1;
- (id)archiveDictionary;
- (id)initWithDefaultValues;

@end
