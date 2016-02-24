//
//  SingerModel.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseModel.h"

@interface SingerModel : BaseModel

@property (nonatomic,copy) NSString *uid;

@property (nonatomic,copy) NSString *image;

@property (nonatomic,copy) NSString *songname;

@property (nonatomic,assign) NSInteger bfnum;

@property (nonatomic,copy) NSString *articleUrl;

@end
