//
//  MusicHeaderView.h
//  SweetMusic
//
//  Created by 董兴斌 on 15/11/15.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MusicModel.h"

typedef void(^HeaderBlock)(CGFloat offsetY);
typedef void(^PlayMusicBlock)();

@interface MusicHeaderView : UIView
@property (weak, nonatomic) IBOutlet UILabel *mnameLabel;
@property (weak, nonatomic) IBOutlet UILabel *mnumLabel;
@property (weak, nonatomic) IBOutlet UILabel *histLabel;
@property (weak, nonatomic) IBOutlet UIImageView *mphotoImageView;
@property (weak, nonatomic) IBOutlet UIButton *PlayButton;
@property (nonatomic,copy) HeaderBlock headerBlock;
@property (nonatomic,copy) PlayMusicBlock playMusicBlock;

- (IBAction)playClick:(UIButton *)sender;

- (void)showDataWithModel:(MusicModel *)model;

@end
