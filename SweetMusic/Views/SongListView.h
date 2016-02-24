//
//  SongListView.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SongModel.h"
#import "MusicModel.h"

typedef void(^BackBlock)();
typedef void(^StartPlayBlock)(NSInteger);
typedef void(^PlayNextBlock)(NSInteger);

@interface SongListView : UIView

@property (nonatomic,strong) MusicModel *musicModel;

@property (nonatomic,strong) NSArray *listArray;

@property (nonatomic,assign) NSInteger isPlayingIndex;

@property (nonatomic,copy) BackBlock backBlock;

@property (nonatomic,copy) StartPlayBlock startPlayBlock;

@property (nonatomic,copy) PlayNextBlock playNextBlock;

- (instancetype)initWithFrame:(CGRect)frame MusicModel:(MusicModel *)musicModel Index:(NSInteger)index;

@end
