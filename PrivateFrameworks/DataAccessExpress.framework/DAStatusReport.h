/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString, NSNumber, NSDate;

@interface DAStatusReport : NSObject  {
    bool_syncingAllowed;
    int _numHBIDataPoints;
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_uploadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSString *_protocolVersion;
    NSDate *_creationDate;
}

@property(retain) NSString * persistentUUID;
@property(retain) NSString * displayName;
@property(retain) NSString * accountType;
@property(retain) NSNumber * timeSpan;
@property(retain) NSNumber * timeInNetworking;
@property(retain) NSNumber * averageHBI;
@property(retain) NSNumber * successfulRequests;
@property(retain) NSNumber * failedNetworkRequests;
@property(retain) NSNumber * failedProtocolRequests;
@property(retain) NSNumber * downloadedElements;
@property(retain) NSNumber * uploadedElements;
@property(retain) NSNumber * falseMoreAvailableCount;
@property(retain) NSString * protocolVersion;
@property bool syncingAllowed;
@property(retain) NSDate * creationDate;
@property int numHBIDataPoints;


- (void)setNumHBIDataPoints:(int)arg1;
- (int)numHBIDataPoints;
- (void)noteFalseMoreAvailableResponse;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)mergeStatusReport:(id)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2;
- (bool)syncingAllowed;
- (id)falseMoreAvailableCount;
- (id)uploadedElements;
- (id)downloadedElements;
- (id)failedProtocolRequests;
- (id)failedNetworkRequests;
- (id)successfulRequests;
- (id)averageHBI;
- (id)timeInNetworking;
- (id)timeSpan;
- (id)accountType;
- (id)persistentUUID;
- (void)setSyncingAllowed:(bool)arg1;
- (void)setFalseMoreAvailableCount:(id)arg1;
- (void)setUploadedElements:(id)arg1;
- (void)setDownloadedElements:(id)arg1;
- (void)setFailedProtocolRequests:(id)arg1;
- (void)setFailedNetworkRequests:(id)arg1;
- (void)setSuccessfulRequests:(id)arg1;
- (void)setAverageHBI:(id)arg1;
- (void)setTimeInNetworking:(id)arg1;
- (void)setTimeSpan:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setPersistentUUID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)creationDate;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)protocolVersion;
- (void)setProtocolVersion:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)dictionaryRepresentation;

@end
