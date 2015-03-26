//
//  SPGooglePlacesAutocompletePlace.h
//  SPGooglePlacesAutocomplete
//
//  Created by Stephen Poletto on 7/17/12.
//  Copyright (c) 2012 Stephen Poletto. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

#import "SPGooglePlacesAutocompleteUtilities.h"

@interface SPGooglePlacesAutocompletePlace : NSObject {
    CLGeocoder *geocoder;
}

+ (SPGooglePlacesAutocompletePlace *)placeFromDictionary:(NSDictionary *)placeDictionary;

/*!
 Contains the human-readable name for the returned result. For establishment results, this is usually the business name.
 */
@property (nonatomic, retain, readonly) NSString *name;

/*!
 Contains the primary 'type' of this place (i.e. "establishment" or "gecode").
 */
@property (nonatomic, readonly) SPGooglePlacesAutocompletePlaceType type;

/*!
 Contains a unique token that you can use to retrieve additional information about this place in a Place Details request. You can store this token and use it at any time in future to refresh cached data about this Place, but the same token is not guaranteed to be returned for any given Place across different searches.
 */
@property (nonatomic, retain, readonly) NSString *placeID;

/*!
 Resolves the place to a CLPlacemark, issuing  Google Place Details request if needed.
 */
- (void)resolveToPlacemark:(SPGooglePlacesPlacemarkResultBlock)block;

@end
