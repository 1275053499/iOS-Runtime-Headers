/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <ATAssetLinkDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _fileIOQueue;
    ATMessageLink * _messageLink;
    BOOL  _open;
    NSMutableArray * _outstandingAssets;
    int  _pendingWriteAmount;
    NSObject<OS_dispatch_semaphore> * _pendingWriteSemaphore;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _readers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ATAssetLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isOpen, nonatomic, readonly) BOOL open;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)_requestAsset:(id)arg1;
- (id)_urlForWritingAsset:(id)arg1 withFileName:(id)arg2;
- (BOOL)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)close;
- (id)delegate;
- (id)enqueueAssets:(id)arg1 force:(BOOL)arg2;
- (id)initWithMessageLink:(id)arg1;
- (BOOL)isOpen;
- (BOOL)linkIsReady;
- (unsigned int)maximumBatchSize;
- (void)messageLinkWasClosed:(id)arg1;
- (BOOL)open;
- (void)prioritizeAsset:(id)arg1;
- (unsigned int)priority;
- (void)setDelegate:(id)arg1;

@end
