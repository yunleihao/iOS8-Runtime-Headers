/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger  {
    NSPersistentStoreCoordinator *fPersistentStoreCoordinator;
}

@property(retain) NSPersistentStoreCoordinator * fPersistentStoreCoordinator;

+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (id)getStoreURLforContext:(id)arg1;
+ (bool)destroyDBAtLocation:(id)arg1;
+ (id)migrationOptions;
+ (id)getPersistenCoordinator:(id)arg1;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (bool)migrateDataStoreAtLocation:(id)arg1 withDstModelAtLocation:(id)arg2;
+ (id)instanceWithUsingDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (id)instanceWithInitDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;

- (id)fPersistentStoreCoordinator;
- (void)setFPersistentStoreCoordinator:(id)arg1;
- (id)createManagedObjectContext;
- (id)init;
- (void).cxx_destruct;

@end
