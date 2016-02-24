//
//  NetDataEngine.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^SuccessBlock)(id responsData);
typedef void(^FailedBlock)(NSError *error);

@interface NetDataEngine : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic,strong) AFHTTPRequestOperationManager *manager;

- (void)oneGET:(NSString *)url success:(SuccessBlock)successBlock failed:(FailedBlock)failedBlock;

- (void)twoGET:(NSString *)url success:(SuccessBlock)successBlock failed:(FailedBlock)failedBlock;

@end
