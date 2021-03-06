/*
 * (C) Copyright 1992 by Simson Garfinkel and Associates, Inc.
 *
 * All Rights Reserved.
 *
 * Use of this module is covered by your source-code license agreement with
 * Simson Garfinkel and Associates, Inc.  Use of this module, or any code
 * that it contains, without a valid source-code license agreement is a
 * violation of copyright law.
 *
 */

#import "AbstractReportElement.h"

@interface PageElement:AbstractReportElement
{
	NSRect	rect;
	BOOL	notes;			/* show notes, not rectangle */
	NSView	*rview;			/* view we grab our stuff from */
	float	rotation;		/* our rotation */
	int	pageNumber;		/* our page number, just for debugging */
}

- initForRect:(NSRect)r inReportView:(NSView *)v;
- setRotation:(float)rot;
- debugInfo;
- (int)pageNumber;
- setPageNumber:(int)i;

@end
