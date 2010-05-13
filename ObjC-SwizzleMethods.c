/*
 *  ObjC-SwizzleMethods.c
 *  moreWord
 *
 *  Created by Evadne Wu on 5/14/10.
 *  Copyright 2010 Iridia Productions. All rights reserved.
 *
 */

#include "ObjC-SwizzleMethods.h"





void SwizzleMethods (Class originalClass, SEL originalSelector, Class alternateClass, SEL alternateSelector) {

	Method originalMethod = nil, alternateMethod = nil;

	originalMethod = class_getInstanceMethod(originalClass, originalSelector);
	alternateMethod = class_getInstanceMethod(alternateClass, alternateSelector);

	if (!originalMethod || !alternateMethod) return;

//	10.5+
	method_exchangeImplementations(originalMethod, alternateMethod);

}





void RedirectMethod (Class originalClass, SEL originalSelector, Class alternateClass, SEL alternateSelector) {

	Method originalMethod = nil, alternateMethod = nil;

	originalMethod = class_getInstanceMethod(originalClass, originalSelector);
	alternateMethod = class_getInstanceMethod(alternateClass, alternateSelector);

	if (!originalMethod || !alternateMethod) return;

//	10.5+
	method_setImplementation(originalMethod, method_getImplementation(alternateMethod));

}




