/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary * _awdMetrics;
    NSString * _connectionUUID;
    BOOL  _hasTimedOut;
    NSInputStream * _inputStreamForSocket;
    BOOL  _isDefaultPairedDevice;
    unsigned int  _mtu;
    NSString * _nsuuid;
    id /* block */  _openSocketCompletionHandler;
    NSString * _openSocketCompletionHandlerID;
    NSObject<OS_dispatch_queue> * _openSocketCompletionHandlerQueue;
    NSOutputStream * _outputStreamForSocket;
    NSString * _service;
    NSString * _serviceToken;
    int  _socket;
    NSString * _streamName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSInputStream *inputStream;
@property (nonatomic, readonly) unsigned int mtu;
@property (nonatomic, readonly, retain) NSOutputStream *outputStream;
@property (nonatomic, readonly) int socket;
@property (readonly) Class superclass;

- (void)_cleanupCompletionBlock;
- (void)_close;
- (void)_connect;
- (void)_daemonDied:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)deviceConnectionKey;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)inputStream;
- (unsigned int)mtu;
- (id)outputStream;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (int)socket;
- (BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
