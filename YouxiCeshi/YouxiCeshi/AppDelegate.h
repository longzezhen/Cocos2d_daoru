//
//  AppDelegate.h
//  YouxiCeshi
//
//  Created by df on 2020/1/9.
//  Copyright © 2020 cons. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

