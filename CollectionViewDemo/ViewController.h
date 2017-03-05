//
//  ViewController.h
//  CollectionViewDemo
//
//  Created by Anas MD on 3/5/17.
//  Copyright © 2017 Anas MD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;

@property(nonatomic, strong) NSArray *array;
@end

