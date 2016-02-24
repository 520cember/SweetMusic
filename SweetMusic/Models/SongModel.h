//
//  SongModel.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseModel.h"

@interface SongModel : BaseModel


@property (nonatomic, assign) NSInteger id;

@property (nonatomic, assign) NSInteger mid;

@property (nonatomic, copy) NSString *songname;

@property (nonatomic, copy) NSString *createDate;

@property (nonatomic, copy) NSString *filename;

@property (nonatomic, copy) NSString *resourcecode;

@property (nonatomic, copy) NSString *songer;

@property (nonatomic, assign) NSInteger time;

@property (nonatomic, copy) NSString *filename192;

@property (nonatomic, assign) NSInteger fsize;

@property (nonatomic, copy) NSString *thumbnailUrl;

@property (nonatomic, assign) NSInteger scnum;

@property (nonatomic, copy) NSString *updateDate;

@property (nonatomic, copy) NSString *isshare;

@property (nonatomic, copy) NSString *songphoto;

@property (nonatomic, assign) NSInteger status;


@end
