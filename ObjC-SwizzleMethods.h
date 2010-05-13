/*
 *  ObjC-SwizzleMethods.h
 *  moreWord
 *
 *  Created by Evadne Wu on 5/14/10.
 *  Copyright 2010 Iridia Productions. All rights reserved.
 *
 */





#import <objc/objc-class.h>

#ifndef SwizzleMethodsClass
#define SwizzleMethodsClass

void SwizzleMethods (Class originalClass, SEL originalSelector, Class alternateClass, SEL alternateSelector);
void RedirectMethod (Class originalClass, SEL originalSelector, Class alternateClass, SEL alternateSelector);

#endif




