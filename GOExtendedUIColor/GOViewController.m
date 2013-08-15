//
//  GOViewController.m
//  GOExtendedUIColor
//
//  Created by Goppinath Thurairajah on 15.08.13.
//  Copyright (c) 2013 Goppinath Thurairajah. All rights reserved.
//

#import "GOViewController.h"

#import "UIColor+GOExtension.h"

@interface GOViewController ()

@end

@implementation GOViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    UIView *testView = [[UIView alloc] initWithFrame:CGRectMake(100, 100, 100, 100)];
    
    [testView setBackgroundColor:[UIColor oliveDrabColor]];
    
    [self.view addSubview:testView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
