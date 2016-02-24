//
//  MusicModel.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseModel.h"
#import "SongModel.h"

@interface MusicModel : BaseModel

@property (nonatomic,copy) NSString *mname;

@property (nonatomic,copy) NSString *mnum;

@property (nonatomic,copy) NSString *mphoto;

@property (nonatomic,copy) NSString *mdesc;

@property (nonatomic,assign) NSInteger hist;

@property (nonatomic,strong) NSMutableArray *listArray;

@property (nonatomic,assign) BOOL isFloded;

@end
