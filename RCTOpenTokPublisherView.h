@import UIKit;
#import "RCTEventDispatcher.h"
#import "RCTComponent.h"

@interface RCTOpenTokPublisherView : UIView

@property (nonatomic, strong) NSString *apiKey;
@property (nonatomic, strong) NSString *sessionId;
@property (nonatomic, strong) NSString *token;

@property (nonatomic, copy) RCTDirectEventBlock onStartFailure;
@property (nonatomic, copy) RCTDirectEventBlock onConnected;
@property (nonatomic, copy) RCTDirectEventBlock onDisconnected;
@property (nonatomic, copy) RCTDirectEventBlock onStreamCreated;
@property (nonatomic, copy) RCTDirectEventBlock onStreamDestroyed;
@property (nonatomic, copy) RCTDirectEventBlock onConnectionCreated;
@property (nonatomic, copy) RCTDirectEventBlock onConnectionDestroyed;
@property (nonatomic, copy) RCTDirectEventBlock onUnknownError;

@property (nonatomic, copy) RCTDirectEventBlock onPublishError;

@end