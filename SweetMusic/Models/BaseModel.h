//
//  BaseModel.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel : NSObject

- (void)setValue:(id)value forUndefinedKey:(NSString *)key;

@end
