//
//  ViewController.h
//  PageViewControllerDemo
//
//  Created by test on 5/11/16.
//  Copyright © 2016 test. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *startWalkThrough;

@property UIPageViewController* pageViewController;
@property (nonatomic,strong) NSArray *pageTitles;
@property (nonatomic,strong) NSArray *pageImgs;

@end

