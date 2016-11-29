#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 16	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1264 600\" width=\"80%\" id=\"ctrlimg\"><rect width=\"1200\" height=\"500\" ry=\"30\" rx=30 x=40 y=17 style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 18562, GZIP size: 6039 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3C, 0xFB, 0x73, 0xDA, 0x48, 0x93, 0xBF, 0xDF, 0x5F, 
	0xA1, 0x28, 0xB5, 0x36, 0x1C, 0x02, 0x4B, 0x42, 0x02, 0x0C, 
	0xC6, 0xFE, 0x6C, 0x92, 0x6C, 0x5C, 0x1B, 0x6F, 0x5C, 0x21, 
	0x9B, 0xEC, 0x1D, 0x45, 0xA5, 0x84, 0x1E, 0x20, 0x5B, 0x48, 
	0x9C, 0x24, 0xEC, 0xF8, 0x1C, 0xFF, 0xEF, 0xD7, 0xDD, 0x33, 
	0xA3, 0x17, 0xE0, 0xE0, 0xCD, 0x7D, 0xDE, 0x8A, 0xE6, 0xD5, 
	0xAF, 0xE9, 0xE9, 0xE9, 0xE9, 0x69, 0x89, 0xBD, 0xB3, 0x62, 
	0xE9, 0xFD, 0x57, 0x7B, 0x38, 0x99, 0xF4, 0x94, 0x6E, 0x4F, 
	0x57, 0x7A, 0xAA, 0x22, 0x5F, 0xFF, 0x7E, 0x25, 0x69, 0xB2, 
	0x62, 0xA8, 0x53, 0x05, 0x7A, 0x0D, 0xD1, 0xFB, 0xE9, 0x4B, 
	0xA1, 0x17, 0x61, 0xB5, 0x36, 0x07, 0xD6, 0x4B, 0xC0, 0xAC, 
	0x1B, 0xA0, 0xF5, 0x32, 0xB4, 0x20, 0xDD, 0x2E, 0x43, 0x0B, 
	0xDA, 0xED, 0x12, 0xB4, 0x2E, 0x68, 0x1B, 0x25, 0x68, 0x5D, 
	0xD0, 0x36, 0xCA, 0xD0, 0x82, 0xB6, 0x59, 0x86, 0x16, 0xB4, 
	0xCD, 0x12, 0x74, 0x5B, 0xD0, 0xEE, 0x94, 0xA0, 0xDB, 0x82, 
	0x76, 0xA7, 0x0C, 0x2D, 0x68, 0x77, 0xCB, 0xD0, 0x82, 0x76, 
	0xB7, 0x04, 0x6D, 0x08, 0xDA, 0xBD, 0x12, 0xB4, 0x21, 0x68, 
	0xB3, 0xEE, 0xE9, 0xE0, 0x3F, 0xEE, 0x40, 0xF1, 0x8E, 0x7B, 
	0xF7, 0x21, 0x49, 0x41, 0xF7, 0x9A, 0x22, 0x9F, 0x7F, 0x7E, 
	0x7B, 0x25, 0x2B, 0x1A, 0x60, 0x68, 0xA6, 0x22, 0x8F, 0x1F, 
	0x92, 0xD4, 0x5D, 0xCA, 0x05, 0xC0, 0x77, 0xEB, 0x10, 0x57, 
	0x69, 0xA2, 0x01, 0xEC, 0x75, 0x1C, 0xCD, 0x63, 0x6B, 0x29, 
	0x8D, 0x63, 0x5B, 0x56, 0x9A, 0x9A, 0xD2, 0xD4, 0x95, 0x89, 
	0x2C, 0x2B, 0xF2, 0xFB, 0x28, 0x70, 0xA4, 0x37, 0xD1, 0x7D, 
	0x08, 0xF5, 0xCF, 0xD1, 0x7C, 0x1E, 0xB8, 0x50, 0x19, 0x3D, 
	0xD8, 0x50, 0x4E, 0x91, 0x30, 0xA1, 0xBA, 0x77, 0xBE, 0x7B, 
	0xBF, 0x81, 0x5A, 0x85, 0xBA, 0x3B, 0xBA, 0x8E, 0xE7, 0x3F, 
	0x81, 0x3A, 0xFF, 0xEB, 0x6F, 0xE9, 0xE3, 0x3A, 0x5D, 0xAD, 
	0x53, 0x0E, 0xD8, 0x7E, 0x5E, 0x12, 0xEA, 0xFC, 0x3D, 0x8E, 
	0xD6, 0x2B, 0xE9, 0xBC, 0xDC, 0xBC, 0xD8, 0xA0, 0xFD, 0xD7, 
	0x2A, 0x49, 0x63, 0x17, 0xE6, 0xF8, 0x87, 0xFB, 0xE0, 0xC6, 
	0x4C, 0x08, 0x43, 0x69, 0x9A, 0x5B, 0x87, 0xA5, 0x77, 0x7E, 
	0x10, 0x64, 0x30, 0xFA, 0x76, 0x18, 0x78, 0x6E, 0x80, 0xA0, 
	0x84, 0x15, 0x3E, 0x9D, 0x9C, 0x49, 0x75, 0x54, 0xB0, 0xE9, 
	0xEC, 0x26, 0xC0, 0xB9, 0x14, 0x20, 0xAE, 0xAE, 0xA5, 0x71, 
	0xCA, 0xF0, 0xBA, 0xD0, 0xA3, 0xB4, 0x71, 0x60, 0x9F, 0xC5, 
	0xD2, 0x7B, 0x8A, 0x5C, 0x13, 0xD8, 0x12, 0x0D, 0xD4, 0x73, 
	0x22, 0x60, 0x22, 0xA9, 0x15, 0xA7, 0xF2, 0x54, 0x34, 0xDF, 
	0x86, 0x0E, 0x36, 0x54, 0x45, 0xD3, 0xC1, 0xD4, 0xCE, 0xD7, 
	0x69, 0x24, 0x5D, 0x86, 0xA9, 0x1B, 0xDF, 0x59, 0x81, 0xCC, 
	0x39, 0x7E, 0xB2, 0x42, 0x27, 0x5A, 0x52, 0x2B, 0x63, 0xF8, 
	0x11, 0xD9, 0x7F, 0xF4, 0xBC, 0x92, 0x40, 0x25, 0xFE, 0xA3, 
	0xC0, 0x5F, 0x31, 0xC6, 0x7A, 0xA9, 0x3B, 0x0A, 0xD3, 0x38, 
	0x0A, 0xD8, 0x48, 0xB3, 0xC7, 0x67, 0x3B, 0x5A, 0xA7, 0xA8, 
	0x64, 0x61, 0x20, 0x20, 0x45, 0xA1, 0xF9, 0xEE, 0xF3, 0x45, 
	0xA1, 0xF5, 0x39, 0xB6, 0xC2, 0xC4, 0x4F, 0xFD, 0x28, 0x84, 
	0x29, 0x3E, 0xA0, 0x30, 0xB8, 0x38, 0xC7, 0xC4, 0xA3, 0x34, 
	0x7A, 0x1D, 0x25, 0x05, 0xB4, 0xEB, 0xC0, 0x7A, 0x90, 0xAE, 
	0x2C, 0x3B, 0x06, 0xCA, 0x30, 0x75, 0x0D, 0xF7, 0x18, 0x75, 
	0xCA, 0xA8, 0x92, 0x68, 0xB5, 0x61, 0x70, 0x5C, 0xC5, 0x5C, 
	0xB3, 0x4C, 0x13, 0x1F, 0x22, 0x00, 0xCC, 0x67, 0xF9, 0xC9, 
	0xB5, 0xA3, 0xD8, 0x61, 0x54, 0xEB, 0x44, 0x56, 0x57, 0xF3, 
	0xD1, 0x71, 0xB4, 0x8E, 0x6D, 0x37, 0x5B, 0x81, 0x89, 0x7C, 
	0x75, 0xF4, 0x16, 0x3D, 0x21, 0x95, 0xE0, 0xE3, 0x68, 0x1F, 
	0x68, 0xBC, 0x14, 0xED, 0x36, 0x2F, 0x0D, 0x5E, 0x9A, 0xBC, 
	0xEC, 0xA0, 0x08, 0xCD, 0xE2, 0xF2, 0x35, 0x5F, 0xBC, 0x78, 
	0xD0, 0xFA, 0x62, 0xC5, 0x0F, 0x52, 0xEA, 0x2F, 0xFD, 0x70, 
	0x2E, 0xE9, 0xEA, 0x6F, 0x95, 0x1E, 0x13, 0x7A, 0xF6, 0x5C, 
	0x65, 0x5A, 0x25, 0xC7, 0xA7, 0x65, 0x52, 0xE1, 0x9F, 0xB6, 
	0x97, 0x71, 0x76, 0x39, 0x96, 0xF4, 0x25, 0x0A, 0xD6, 0x4B, 
	0x5A, 0x3A, 0xB5, 0xD8, 0x7D, 0x61, 0x05, 0x56, 0x68, 0x67, 
	0xFD, 0x5A, 0x47, 0x0C, 0x7C, 0x70, 0xEF, 0xDC, 0x20, 0x29, 
	0xC0, 0x17, 0xD6, 0xF9, 0x93, 0x95, 0x32, 0x23, 0x98, 0x70, 
	0x4E, 0xA0, 0x61, 0xFF, 0x3B, 0x3C, 0xDF, 0xF8, 0xB8, 0xAA, 
	0x5F, 0xFD, 0x15, 0x76, 0xBD, 0xF9, 0xF2, 0x56, 0xE6, 0xA6, 
	0x24, 0xBF, 0x19, 0xFF, 0xA1, 0xB1, 0x42, 0x67, 0x1B, 0x41, 
	0x37, 0xC1, 0x77, 0xBE, 0x03, 0xD7, 0xE8, 0x26, 0x85, 0xE5, 
	0xAD, 0x33, 0xAA, 0xBB, 0x86, 0x2B, 0x7E, 0xE2, 0xDA, 0x02, 
	0x00, 0x44, 0x01, 0x3F, 0xA1, 0xE5, 0x26, 0xBF, 0xB1, 0xD3, 
	0x33, 0xB8, 0x0E, 0x87, 0x6B, 0x03, 0xED, 0xC8, 0x5E, 0xD3, 
	0xEC, 0xDA, 0x6C, 0x76, 0x97, 0xB1, 0xCF, 0x9A, 0xDC, 0xEC, 
	0x60, 0x79, 0x60, 0x55, 0xC9, 0xFB, 0x89, 0xFA, 0x45, 0xA1, 
	0x3E, 0x2A, 0xD4, 0xDF, 0x88, 0xA5, 0x1E, 0xDB, 0x56, 0xC0, 
	0x71, 0x78, 0xF5, 0x22, 0xAF, 0x8E, 0xF2, 0xEA, 0x1B, 0x9A, 
	0x12, 0x08, 0x31, 0x76, 0xC3, 0x24, 0x8A, 0xA5, 0xDF, 0x2D, 
	0x3F, 0x14, 0xBC, 0x85, 0x3E, 0x55, 0x67, 0x06, 0xCF, 0x0E, 
	0x3D, 0x35, 0x9D, 0x15, 0x3D, 0x28, 0x04, 0xE6, 0x62, 0x9D, 
	0xA6, 0xCC, 0xDB, 0x16, 0xB1, 0xB4, 0x23, 0x53, 0xA5, 0xA2, 
	0xC3, 0x8A, 0xAE, 0x49, 0xC5, 0x31, 0x6B, 0x69, 0x2A, 0x2F, 
	0x75, 0x5E, 0x72, 0x60, 0x38, 0xD8, 0xA9, 0xD4, 0x79, 0xBB, 
	0xCD, 0xB1, 0x4D, 0x0E, 0xDF, 0xD5, 0x4D, 0x81, 0xCF, 0x11, 
	0x0C, 0x0E, 0xA9, 0x63, 0x0F, 0x17, 0xE9, 0xEB, 0x02, 0xB4, 
	0x51, 0xB4, 0xA7, 0xA2, 0x60, 0x40, 0x5A, 0xFD, 0x03, 0xCB, 
	0x1E, 0x2B, 0xDB, 0x2A, 0x2F, 0x75, 0x5E, 0x1A, 0xBC, 0xEC, 
	0xB0, 0xD2, 0xE0, 0xE3, 0x06, 0xC7, 0x33, 0x38, 0x9E, 0xC9, 
	0xFB, 0x4D, 0x8E, 0x67, 0x72, 0x3C, 0x93, 0xE3, 0x75, 0xF8, 
	0x78, 0x87, 0xE3, 0x75, 0x79, 0xBB, 0xCB, 0xDB, 0x3D, 0x6A, 
	0xF3, 0x8D, 0xF1, 0xC1, 0xF7, 0xC8, 0x07, 0x1A, 0xB9, 0x19, 
	0xFC, 0x6E, 0x2D, 0x97, 0xD6, 0x46, 0x1F, 0x5B, 0x9E, 0x42, 
	0xD7, 0xFB, 0xB5, 0x5B, 0xB0, 0x1D, 0x72, 0xB0, 0x56, 0x92, 
	0x16, 0xBA, 0xC6, 0x56, 0xBA, 0x8E, 0x2D, 0xDC, 0x2C, 0x42, 
	0x13, 0x7F, 0x46, 0xF1, 0x12, 0x7C, 0x04, 0xEC, 0x01, 0x37, 
	0x61, 0x83, 0xAE, 0xC3, 0x4C, 0x5B, 0x91, 0x2F, 0xAC, 0x38, 
	0x33, 0xBE, 0x9F, 0x78, 0x02, 0x3A, 0x44, 0x54, 0x34, 0x1D, 
	0x3B, 0x0A, 0x9D, 0x44, 0x28, 0xFF, 0x8D, 0x9B, 0x5A, 0x7E, 
	0x50, 0xD5, 0x3A, 0xC3, 0xFE, 0x10, 0xDD, 0xE3, 0x06, 0x75, 
	0x1D, 0x7F, 0xBD, 0x44, 0x62, 0xFE, 0x7C, 0x21, 0xD0, 0x46, 
	0xA3, 0xBF, 0xA4, 0xB1, 0x9B, 0xA6, 0xE0, 0x8A, 0x8A, 0xD6, 
	0x0F, 0x5E, 0xD6, 0xC2, 0x73, 0x10, 0xA6, 0x71, 0xE7, 0x32, 
	0x9E, 0x1D, 0x94, 0x32, 0xBC, 0x15, 0x12, 0x7F, 0x72, 0x13, 
	0x37, 0x15, 0x18, 0x4C, 0x8F, 0x42, 0x77, 0x5C, 0x5F, 0xF2, 
	0x39, 0x50, 0x40, 0xE8, 0x63, 0xF0, 0x78, 0xBE, 0xE3, 0x46, 
	0xD2, 0x67, 0xA0, 0x89, 0x47, 0x2E, 0x06, 0x1E, 0x3C, 0x2E, 
	0x92, 0xB3, 0x30, 0x47, 0x66, 0xB1, 0xD2, 0x11, 0x36, 0x05, 
	0x1A, 0x73, 0x44, 0x02, 0x8D, 0xF9, 0x27, 0xDA, 0xE1, 0xA3, 
	0x45, 0x1C, 0x2D, 0x2D, 0xDC, 0xDD, 0x99, 0xF4, 0xE4, 0xEE, 
	0xB7, 0x88, 0x0E, 0xBE, 0xA1, 0x2A, 0x3D, 0x91, 0xB8, 0xBE, 
	0xBC, 0x26, 0x67, 0x63, 0x72, 0xFD, 0xF9, 0x73, 0x3F, 0xB5, 
	0x02, 0xE9, 0xBF, 0x23, 0xF0, 0xDC, 0x3C, 0xF6, 0x00, 0x29, 
	0x23, 0xE6, 0xF0, 0xF8, 0xD6, 0x05, 0x3E, 0x62, 0xAB, 0xC3, 
	0x56, 0xF8, 0xAD, 0x09, 0x36, 0xF8, 0x1B, 0xC3, 0xE0, 0x5A, 
	0x01, 0x8F, 0x27, 0x8D, 0xFD, 0xFF, 0x75, 0x33, 0x0A, 0x4D, 
	0xF4, 0xA7, 0x7F, 0xD3, 0xD9, 0x81, 0xB5, 0xFF, 0x2A, 0x02, 
	0xE6, 0xC4, 0x33, 0xE0, 0x6E, 0x06, 0xDC, 0xAD, 0x00, 0x5F, 
	0xC0, 0xA9, 0x97, 0x07, 0x57, 0x24, 0x42, 0x66, 0x1F, 0x5C, 
	0xA4, 0x8B, 0xC0, 0xB2, 0x6F, 0x65, 0xBE, 0x0F, 0x33, 0x96, 
	0x97, 0x61, 0x08, 0x78, 0xA2, 0x05, 0x31, 0x20, 0xB6, 0x72, 
	0xBA, 0x18, 0x27, 0x49, 0xEC, 0xD8, 0x2C, 0x85, 0x5C, 0x3D, 
	0xA1, 0xFD, 0x6B, 0xD7, 0xBA, 0xCD, 0x4E, 0x01, 0xA0, 0x90, 
	0x4D, 0x97, 0x05, 0xBF, 0x0B, 0x58, 0x7A, 0x76, 0x54, 0xC8, 
	0x74, 0x28, 0x82, 0x65, 0xB2, 0xD6, 0x4F, 0x43, 0x27, 0xE9, 
	0xAF, 0x55, 0x56, 0xE5, 0x00, 0x9F, 0x5C, 0xD8, 0x17, 0xA1, 
	0x04, 0x47, 0xE9, 0x3A, 0x3B, 0xFF, 0x3F, 0xB9, 0x73, 0x72, 
	0xA8, 0x58, 0x5E, 0xF0, 0x72, 0xC4, 0x4B, 0xE6, 0x47, 0x49, 
	0x8E, 0x94, 0x4E, 0x24, 0x90, 0xE0, 0x58, 0x34, 0x5E, 0x2E, 
	0x80, 0x20, 0x76, 0xE5, 0x2E, 0xA3, 0xF8, 0x01, 0xED, 0x09, 
	0x19, 0x53, 0xC0, 0x8B, 0xDB, 0x16, 0x2D, 0x3B, 0x6E, 0x9E, 
	0xB3, 0xE2, 0x02, 0xE8, 0xE3, 0x19, 0xF5, 0x62, 0x1E, 0x0C, 
	0xE3, 0xDA, 0x8D, 0x13, 0x1F, 0x1C, 0x06, 0x77, 0x44, 0x0C, 
	0x60, 0x17, 0x5F, 0x0A, 0x37, 0xF8, 0x81, 0xC8, 0xE2, 0x0A, 
	0xDE, 0xFC, 0x1C, 0xED, 0x39, 0x76, 0xCE, 0x82, 0x96, 0x2A, 
	0x67, 0x8A, 0xF4, 0x02, 0x6B, 0x4E, 0x8A, 0xEB, 0xB4, 0x79, 
	0x03, 0x01, 0xC7, 0xB8, 0xB9, 0xB7, 0xCD, 0x8B, 0x53, 0xB9, 
	0x0C, 0xEF, 0x5C, 0x16, 0x13, 0xD1, 0x66, 0x58, 0x26, 0xB4, 
	0x25, 0x78, 0xC1, 0x4A, 0x93, 0x97, 0x1A, 0x3E, 0xF4, 0x84, 
	0x49, 0x43, 0x4C, 0x5C, 0xD7, 0x99, 0x81, 0xA9, 0x4A, 0x19, 
	0xB7, 0x02, 0x41, 0x82, 0x92, 0x3F, 0xFB, 0xAE, 0x04, 0x81, 
	0xD5, 0xFB, 0xAF, 0xA3, 0xD7, 0x32, 0x04, 0x78, 0x2A, 0xEB, 
	0x65, 0x37, 0x2D, 0x08, 0xB7, 0x3C, 0x3E, 0x37, 0xF0, 0xA9, 
	0xD2, 0xB9, 0x4D, 0x7B, 0x88, 0xB5, 0xBF, 0x5A, 0x7E, 0x2A, 
	0xE1, 0x39, 0x95, 0x48, 0x09, 0xF9, 0x47, 0xC0, 0x36, 0x39, 
	0xF6, 0x68, 0x9D, 0xA4, 0xD1, 0x52, 0x7A, 0x0F, 0xC1, 0x59, 
	0x80, 0x3B, 0x09, 0x3C, 0x32, 0xF8, 0xE7, 0x3B, 0x5C, 0xAA, 
	0x5D, 0xEA, 0xA6, 0xB8, 0x01, 0xAC, 0xAF, 0xDA, 0x73, 0x91, 
	0x69, 0xEF, 0x32, 0xB4, 0x80, 0xFF, 0x1D, 0xB7, 0x37, 0xEC, 
	0xC1, 0xC0, 0x56, 0x02, 0xD6, 0xA1, 0x6B, 0xB3, 0x90, 0x9F, 
	0x79, 0x1B, 0x2B, 0x74, 0x03, 0xE9, 0x22, 0x06, 0xD7, 0x9B, 
	0x86, 0x6E, 0x82, 0xDE, 0x4A, 0x84, 0x55, 0x10, 0x2D, 0xCE, 
	0x5D, 0x89, 0xC7, 0x12, 0x5B, 0x16, 0x9F, 0xF9, 0xA7, 0x2F, 
	0xB8, 0x27, 0x24, 0x16, 0x3F, 0x6C, 0xB5, 0x10, 0xF2, 0x48, 
	0xA4, 0xF6, 0xDF, 0xE8, 0xB8, 0xA5, 0xA7, 0xCA, 0xA3, 0xCB, 
	0x1D, 0x6B, 0xC9, 0x14, 0xF3, 0x21, 0x02, 0xAA, 0xD2, 0xF8, 
	0xC3, 0x27, 0xA4, 0xFB, 0xB3, 0xED, 0x26, 0xAE, 0xB9, 0xB0, 
	0x47, 0xE1, 0x3E, 0x9C, 0xC0, 0x35, 0xB7, 0x12, 0x63, 0x23, 
	0x3B, 0xEE, 0x89, 0x20, 0x8A, 0x53, 0xDA, 0x8A, 0xA1, 0x98, 
	0xE0, 0x7E, 0xBB, 0x4A, 0x0F, 0xB6, 0x26, 0xB8, 0x07, 0xD0, 
	0x91, 0x86, 0x89, 0x07, 0x05, 0x8E, 0x53, 0xD8, 0x6C, 0xE0, 
	0x94, 0xC0, 0xD7, 0x69, 0x3D, 0x45, 0x3B, 0x56, 0x30, 0xA0, 
	0x66, 0x27, 0x21, 0x9C, 0xA8, 0x41, 0x14, 0x6B, 0xA2, 0x82, 
	0x91, 0xFA, 0xD5, 0xB5, 0xC6, 0x9E, 0xEC, 0xDE, 0x06, 0x35, 
	0xD6, 0xAB, 0xF3, 0xF6, 0x78, 0xBD, 0x82, 0xC8, 0x4A, 0x78, 
	0x32, 0x79, 0x14, 0xB8, 0x56, 0x48, 0x62, 0xB1, 0xDA, 0xCB, 
	0x83, 0x7F, 0x20, 0xFE, 0x56, 0x93, 0xE0, 0x6A, 0x9D, 0xD5, 
	0xEE, 0xA8, 0xA6, 0x67, 0x7D, 0xBA, 0xE8, 0xFB, 0x02, 0x26, 
	0xC7, 0x4B, 0x9D, 0x97, 0x6D, 0x5E, 0x1A, 0xBC, 0x34, 0x79, 
	0xD9, 0xE1, 0x65, 0x97, 0x97, 0x3D, 0x2A, 0x75, 0x8E, 0xAF, 
	0x73, 0x7C, 0x9D, 0xE3, 0xEB, 0x1C, 0x5F, 0xE7, 0xF8, 0x3A, 
	0xC7, 0xD7, 0x39, 0xBE, 0xCE, 0xF0, 0xDD, 0x25, 0xAD, 0x19, 
	0x96, 0x17, 0xBC, 0x1C, 0xF1, 0x92, 0xD9, 0xC6, 0x8B, 0xAF, 
	0x3D, 0x32, 0x0B, 0x9C, 0x11, 0x87, 0xD5, 0xF4, 0xAC, 0xD6, 
	0xCE, 0x6A, 0xC6, 0x1E, 0x37, 0x17, 0x7E, 0xB3, 0x44, 0x40, 
	0x88, 0xFD, 0x25, 0x7E, 0x07, 0xE0, 0x76, 0x02, 0x77, 0x53, 
	0xB6, 0xA8, 0xBC, 0x4D, 0x77, 0xC3, 0xE9, 0xF3, 0x97, 0x8A, 
	0x31, 0x9E, 0xF6, 0xB8, 0x07, 0xE8, 0x7A, 0xC1, 0xAE, 0x12, 
	0x2F, 0xB6, 0xB2, 0xBF, 0xD1, 0xD8, 0xE5, 0xF3, 0xB7, 0x63, 
	0xB4, 0xEC, 0xD1, 0x79, 0xC1, 0xBC, 0x48, 0xFF, 0x10, 0xCA, 
	0x11, 0x87, 0xAB, 0x28, 0xF4, 0xD3, 0x28, 0xDE, 0x4B, 0xC5, 
	0x34, 0xFB, 0xF3, 0x77, 0x5F, 0x50, 0x44, 0xB0, 0x59, 0xAE, 
	0x1A, 0x14, 0xFC, 0x22, 0x4A, 0x53, 0x0C, 0x2A, 0xE0, 0x60, 
	0xA4, 0x30, 0xE9, 0x13, 0x3A, 0x01, 0x19, 0x4F, 0x7A, 0x3C, 
	0xE3, 0x71, 0x62, 0x4E, 0xBA, 0x40, 0xA5, 0xB9, 0x7C, 0x00, 
	0xD0, 0x8E, 0x4A, 0x48, 0x47, 0x19, 0xCA, 0x51, 0x86, 0x70, 
	0xC4, 0xC1, 0x49, 0x5D, 0xE0, 0x93, 0xC8, 0xD4, 0xA1, 0xD4, 
	0x79, 0xD9, 0xE6, 0xA5, 0xC1, 0x4B, 0x93, 0x97, 0x1D, 0x5E, 
	0x76, 0x79, 0xD9, 0xE3, 0xE5, 0x31, 0x2F, 0x35, 0xF5, 0xA7, 
	0xD3, 0x65, 0x25, 0x3F, 0x0B, 0x79, 0xF5, 0x82, 0x04, 0x41, 
	0xE9, 0x50, 0xB3, 0xBF, 0x93, 0x77, 0x2A, 0xAE, 0x24, 0xC4, 
	0xA0, 0x60, 0x31, 0x62, 0x1E, 0xEC, 0xBC, 0x4B, 0x20, 0x52, 
	0x4A, 0x84, 0x7F, 0x52, 0x5B, 0x2A, 0x7B, 0x9A, 0x54, 0x68, 
	0xEC, 0xC9, 0x1A, 0x3A, 0x7B, 0xB2, 0x46, 0x9B, 0x3D, 0x59, 
	0xC3, 0x60, 0x4F, 0xD6, 0xE0, 0x4F, 0x56, 0x74, 0xD8, 0x93, 
	0x35, 0xBA, 0xEC, 0xC9, 0x1A, 0x3D, 0xF6, 0x64, 0x8D, 0x63, 
	0xF6, 0xA4, 0xFB, 0x0D, 0x49, 0xA0, 0x31, 0x09, 0x34, 0x92, 
	0x40, 0x63, 0x12, 0x68, 0x24, 0x81, 0xC6, 0x24, 0xD0, 0x48, 
	0x02, 0x8D, 0x49, 0xA0, 0x91, 0x04, 0x1A, 0x93, 0x40, 0x6B, 
	0xF1, 0x27, 0x2B, 0x3A, 0xEC, 0xC9, 0x1A, 0x5D, 0xF6, 0x64, 
	0x8D, 0x1E, 0x7B, 0xB2, 0xC6, 0x31, 0x7B, 0x62, 0x43, 0x07, 
	0x09, 0xB8, 0x3A, 0x9A, 0x44, 0xBE, 0xD9, 0x36, 0xE8, 0xD9, 
	0xA6, 0xA7, 0x4E, 0x4F, 0x8D, 0x9E, 0x28, 0x6A, 0x53, 0x3F, 
	0xA6, 0x67, 0x8F, 0x9E, 0x5D, 0x7A, 0x76, 0xE8, 0x49, 0xB8, 
	0x3A, 0xE1, 0xEA, 0x84, 0xAB, 0x13, 0xAE, 0x4E, 0xB8, 0x74, 
	0xF9, 0x6B, 0x6A, 0x84, 0xAB, 0x11, 0xAE, 0x46, 0xB8, 0x1A, 
	0xE1, 0xD2, 0x84, 0xE1, 0xAE, 0x43, 0x4F, 0xC2, 0xD5, 0x08, 
	0x57, 0x23, 0x5C, 0xB2, 0x8E, 0x26, 0xA1, 0x12, 0x26, 0x21, 
	0x12, 0x1E, 0xA1, 0x31, 0x69, 0x89, 0x09, 0x41, 0xA3, 0x72, 
	0x71, 0x7A, 0x38, 0x37, 0xF8, 0x87, 0x23, 0x08, 0x82, 0xB0, 
	0x88, 0x84, 0xD8, 0x48, 0x86, 0x54, 0x40, 0x80, 0xA4, 0x74, 
	0x52, 0x36, 0x29, 0x99, 0x94, 0x4B, 0x6A, 0x22, 0x65, 0x92, 
	0x12, 0x49, 0x79, 0x88, 0x41, 0xF3, 0xA0, 0x29, 0xD1, 0xEC, 
	0x68, 0xA2, 0x34, 0x67, 0x9A, 0x3E, 0x69, 0x82, 0x94, 0x42, 
	0xFA, 0x21, 0x55, 0x91, 0xD6, 0x48, 0x81, 0xA4, 0x4B, 0x52, 
	0x2B, 0x69, 0x18, 0x94, 0x8D, 0x07, 0x9B, 0xB7, 0x0E, 0x29, 
	0x9A, 0x90, 0xE6, 0x6F, 0x2F, 0x2E, 0x6B, 0x56, 0xFD, 0x31, 
	0x66, 0x01, 0xA9, 0x13, 0xD9, 0xEB, 0xA5, 0x1B, 0xA6, 0xAD, 
	0xB9, 0x9B, 0xBE, 0x0D, 0x5C, 0xAC, 0x5E, 0x3C, 0x5C, 0x3A, 
	0x00, 0xF1, 0x94, 0xA1, 0xC0, 0x75, 0xE8, 0xBC, 0x66, 0x29, 
	0xB3, 0xFA, 0xA3, 0x17, 0xC5, 0x35, 0x3C, 0x22, 0x6D, 0xC9, 
	0x0F, 0xA5, 0x59, 0xDD, 0x6A, 0xE1, 0x50, 0x9A, 0xC6, 0xFE, 
	0x0C, 0x82, 0xEF, 0x9A, 0xAD, 0xCC, 0x26, 0xF6, 0xB4, 0x3E, 
	0xE0, 0xA4, 0xAD, 0x12, 0x85, 0x0F, 0x8C, 0x02, 0x1F, 0xE3, 
	0x24, 0x1F, 0xA3, 0xD0, 0x0E, 0x7C, 0xFB, 0xB6, 0x7F, 0x48, 
	0x62, 0xC9, 0x5E, 0x78, 0xD8, 0x98, 0x35, 0x0E, 0xE5, 0x7A, 
	0x2B, 0xB1, 0xE3, 0x28, 0x08, 0x2E, 0xC3, 0x34, 0xFA, 0x02, 
	0x37, 0xA8, 0x5A, 0x7D, 0x70, 0xA8, 0xD8, 0xEB, 0x38, 0x89, 
	0xE2, 0xBE, 0xBC, 0x8A, 0x7C, 0xCC, 0x4A, 0xC9, 0x4F, 0x05, 
	0x11, 0x57, 0x70, 0x2F, 0x4B, 0xAF, 0x0A, 0xF3, 0x12, 0x0C, 
	0x3C, 0xB8, 0x04, 0xF4, 0xE5, 0xD7, 0x0E, 0xFD, 0xC9, 0x4A, 
	0x92, 0xC6, 0xD1, 0xAD, 0x0B, 0x1D, 0xEC, 0xBA, 0xCF, 0x9A, 
	0xCD, 0x7B, 0x72, 0x53, 0x7D, 0x58, 0xC8, 0x0D, 0x9A, 0xE3, 
	0xDD, 0x34, 0x6D, 0xFA, 0x2B, 0xD0, 0xEC, 0x74, 0x3A, 0x9B, 
	0x34, 0xB5, 0x12, 0x4D, 0x3B, 0x7E, 0xBB, 0xA9, 0x87, 0x6C, 
	0x0D, 0xEC, 0xD8, 0x85, 0x70, 0x8B, 0x2F, 0x03, 0x30, 0x06, 
	0xC0, 0x22, 0xEA, 0x78, 0x6F, 0xDC, 0x3F, 0xC7, 0x35, 0x79, 
	0x91, 0xA6, 0xAB, 0xFE, 0xD1, 0xD1, 0xFD, 0xFD, 0x7D, 0xEB, 
	0xBE, 0xDD, 0x8A, 0xE2, 0x39, 0x65, 0x34, 0x8E, 0x92, 0x3B, 
	0x38, 0xE1, 0x2B, 0xA4, 0x2D, 0x41, 0xD9, 0x1A, 0xD5, 0xD8, 
	0x42, 0xD8, 0x69, 0x1C, 0xF8, 0xCB, 0xB9, 0xDC, 0xA8, 0xCD, 
	0xCE, 0x66, 0x7D, 0x59, 0xAE, 0xD7, 0x11, 0x27, 0x59, 0xDC, 
	0x8F, 0x6B, 0x45, 0x44, 0xEA, 0x00, 0x05, 0x55, 0x91, 0xAC, 
	0x33, 0x8B, 0x90, 0x5A, 0x09, 0xE6, 0x54, 0x5B, 0x8E, 0x9F, 
	0xAC, 0xE0, 0xFC, 0x1B, 0xCA, 0x72, 0x81, 0xE7, 0x88, 0xB3, 
	0x6C, 0x59, 0xAB, 0x95, 0x1B, 0x3A, 0xA3, 0x85, 0x1F, 0x38, 
	0x65, 0xE2, 0xE9, 0x9F, 0xD6, 0xF2, 0x5D, 0xE0, 0x24, 0xB9, 
	0xED, 0x59, 0x2D, 0x1F, 0xEF, 0x7C, 0xEF, 0x3F, 0x5F, 0x7D, 
	0x00, 0x62, 0xCA, 0xCD, 0x50, 0x1D, 0xDC, 0x9C, 0x68, 0xF0, 
	0x68, 0x34, 0xEA, 0xB3, 0xD3, 0x9B, 0x83, 0x83, 0x1A, 0x91, 
	0x45, 0x2D, 0xCB, 0x7E, 0xB8, 0xC2, 0x34, 0xF0, 0xA3, 0xEF, 
	0xF4, 0x65, 0x22, 0xF5, 0x4D, 0x6E, 0xDC, 0x28, 0xA1, 0xB5, 
	0x74, 0x8B, 0x6D, 0x12, 0xB0, 0x2F, 0xD3, 0x6A, 0xF5, 0x41, 
	0x41, 0xAB, 0xEF, 0x03, 0x59, 0xA1, 0x5B, 0x5A, 0x3F, 0xC1, 
	0xBB, 0x56, 0x32, 0xB9, 0x99, 0x9E, 0x65, 0x35, 0x98, 0xD4, 
	0x13, 0xAA, 0x22, 0x17, 0xA3, 0x31, 0x94, 0x4F, 0x66, 0xF1, 
	0xD1, 0xA9, 0x5C, 0x10, 0x3C, 0xFE, 0x30, 0x0B, 0x0A, 0x66, 
	0x63, 0x0D, 0x61, 0x9F, 0xAC, 0x02, 0x3F, 0xAD, 0xC9, 0x3F, 
	0x64, 0x40, 0x9E, 0xA8, 0x53, 0xD0, 0x50, 0x2B, 0x70, 0xC3, 
	0x79, 0xBA, 0x38, 0xD5, 0xCE, 0x38, 0x81, 0x86, 0x35, 0xD1, 
	0x90, 0x41, 0x81, 0xD0, 0x7D, 0x3C, 0xBE, 0x60, 0x93, 0xF7, 
	0xBD, 0x9A, 0x3D, 0x64, 0x5A, 0x4E, 0x2E, 0x16, 0x00, 0xDB, 
	0x90, 0x41, 0xFC, 0x59, 0x5D, 0x79, 0xF5, 0xFE, 0x2B, 0x68, 
	0x77, 0x62, 0x4D, 0xEB, 0x8F, 0xDB, 0x01, 0xEC, 0xB2, 0xCA, 
	0x6C, 0xBE, 0x24, 0x34, 0xE1, 0xE1, 0x95, 0x95, 0x2E, 0x5A, 
	0x5E, 0x10, 0x81, 0x6A, 0x35, 0xB4, 0x0D, 0x9A, 0x27, 0x97, 
	0xAC, 0xA9, 0xD5, 0x1B, 0xF2, 0x6F, 0xF2, 0x80, 0xDE, 0xFC, 
	0x0C, 0x49, 0xA5, 0x0B, 0x43, 0xAE, 0x0F, 0x4A, 0x40, 0xA7, 
	0x1A, 0xE8, 0xDC, 0x29, 0xB0, 0x28, 0x8F, 0xAA, 0x42, 0x75, 
	0xB3, 0x69, 0x5E, 0xEB, 0xAB, 0xC3, 0xE1, 0xEC, 0x4C, 0x24, 
	0x8D, 0xFA, 0xEC, 0x4E, 0x2B, 0x81, 0xB0, 0x38, 0x79, 0x05, 
	0x16, 0xD0, 0x56, 0x1C, 0x2A, 0x9D, 0xF2, 0x42, 0x0A, 0x5F, 
	0x21, 0x3B, 0x01, 0xA8, 0x85, 0xA6, 0xA8, 0x00, 0x56, 0x03, 
	0x64, 0x92, 0x95, 0xF4, 0x61, 0x05, 0xCB, 0x08, 0x6E, 0x28, 
	0xC5, 0xAC, 0x03, 0x5B, 0x40, 0xB9, 0x09, 0xFD, 0x7E, 0x8A, 
	0xEB, 0xFB, 0xC6, 0x0D, 0x5C, 0xBC, 0x45, 0xDB, 0x81, 0x95, 
	0x24, 0x7D, 0xD9, 0x75, 0x52, 0xB6, 0x90, 0xBB, 0x99, 0xD8, 
	0xAB, 0x87, 0x3D, 0xB9, 0x8C, 0xAE, 0x33, 0x36, 0xA3, 0x68, 
	0xF5, 0xF0, 0x12, 0x26, 0x7E, 0x98, 0xEC, 0xC9, 0xE4, 0xF2, 
	0xCF, 0x71, 0xC6, 0xE5, 0x32, 0x4C, 0xF0, 0x42, 0x29, 0xF8, 
	0x00, 0x11, 0x89, 0xF3, 0x7A, 0x12, 0x0E, 0xDA, 0x1D, 0xAA, 
	0x8A, 0x07, 0xBB, 0xC3, 0x3B, 0x19, 0xFF, 0xF1, 0xED, 0xEA, 
	0xFC, 0xEF, 0xF3, 0xD1, 0xE7, 0xCB, 0x8F, 0x7F, 0x8E, 0x07, 
	0x1E, 0x6C, 0x14, 0xB0, 0x25, 0x52, 0x32, 0x89, 0x94, 0xAC, 
	0xAC, 0x90, 0x6F, 0x12, 0x2F, 0xB4, 0x49, 0x92, 0x26, 0x49, 
	0x02, 0x4F, 0x8F, 0x4B, 0xBF, 0x09, 0x8A, 0x6F, 0x04, 0x36, 
	0x41, 0x61, 0x5D, 0xBD, 0x83, 0x03, 0x5C, 0xDD, 0x1F, 0x3F, 
	0xDE, 0x7F, 0xBD, 0x03, 0xA3, 0x3C, 0x38, 0x60, 0x25, 0xAC, 
	0x7A, 0xA1, 0x3A, 0xF1, 0xA0, 0xA5, 0xBE, 0x1A, 0xD6, 0x34, 
	0xB3, 0xD4, 0x09, 0x1B, 0xA3, 0x5E, 0x77, 0xE2, 0x77, 0xE1, 
	0x18, 0x8D, 0x5E, 0xF1, 0xEA, 0x03, 0x37, 0x48, 0x5C, 0x09, 
	0xE4, 0x7D, 0xE5, 0x1E, 0x1C, 0x14, 0x2C, 0xDD, 0x1D, 0x6A, 
	0x64, 0x96, 0xF3, 0xA1, 0x38, 0x36, 0xAA, 0x92, 0xD7, 0x07, 
	0xE8, 0xCA, 0x76, 0xD9, 0x0F, 0xB1, 0x28, 0x68, 0x1D, 0x9E, 
	0xDE, 0x33, 0xBA, 0x6F, 0x90, 0x6A, 0x0B, 0x9E, 0x98, 0x4C, 
	0xA3, 0x7C, 0x20, 0x0E, 0x33, 0x47, 0xFC, 0x3F, 0x6B, 0x37, 
	0x7E, 0x18, 0x83, 0xBD, 0xD9, 0x10, 0x5F, 0x9F, 0x07, 0x41, 
	0x4D, 0x86, 0xED, 0x91, 0x80, 0x65, 0x3B, 0xB0, 0x1E, 0xCE, 
	0x89, 0xCD, 0xF7, 0xC6, 0xC0, 0x81, 0xA5, 0xB0, 0x27, 0xCE, 
	0x94, 0x6F, 0xC8, 0x3B, 0x3F, 0xF1, 0x67, 0x3E, 0x78, 0x09, 
	0x70, 0x93, 0x54, 0x87, 0xD8, 0x72, 0xE0, 0x27, 0xB1, 0x3D, 
	0xB4, 0x94, 0x1B, 0x2C, 0x66, 0xB9, 0x00, 0xCC, 0x6C, 0x48, 
	0x00, 0xA6, 0xBF, 0x1F, 0x3F, 0x6A, 0xAC, 0x32, 0x9C, 0x4C, 
	0xEB, 0x4A, 0xA6, 0xD3, 0x21, 0xD6, 0x90, 0x06, 0xD7, 0x3E, 
	0x55, 0x27, 0x48, 0x6D, 0x7A, 0x56, 0x69, 0xF7, 0x27, 0x53, 
	0x25, 0x73, 0x37, 0x83, 0x7F, 0xCF, 0xB4, 0x16, 0xBE, 0xE3, 
	0xB8, 0x61, 0xE1, 0x0C, 0xA0, 0x8D, 0x5C, 0x98, 0x06, 0xF8, 
	0x92, 0x5C, 0x76, 0x9C, 0x49, 0x26, 0x51, 0x71, 0xEE, 0xE0, 
	0x48, 0xEB, 0x8F, 0xF7, 0xB1, 0x9F, 0xBA, 0xA3, 0xF1, 0xB8, 
	0x96, 0x0B, 0x6B, 0x09, 0x6B, 0x00, 0x50, 0x90, 0x6B, 0x06, 
	0x72, 0xCD, 0x4E, 0xDE, 0x7F, 0xCD, 0x24, 0x9B, 0x31, 0xDB, 
	0x87, 0x1E, 0x34, 0x37, 0x73, 0x7A, 0xAA, 0x1E, 0x1C, 0x5C, 
	0x7D, 0x7C, 0x83, 0x46, 0x95, 0xF5, 0x35, 0x35, 0xEA, 0xAE, 
	0x31, 0x5B, 0x03, 0x29, 0x34, 0x54, 0x27, 0xAB, 0xD7, 0x1F, 
	0x0B, 0xAE, 0xD0, 0xF1, 0xEF, 0xB2, 0x6D, 0x03, 0x36, 0xF4, 
	0x44, 0x06, 0x67, 0x81, 0xE3, 0xCA, 0xC4, 0x61, 0x87, 0x53, 
	0xC9, 0x1F, 0xD2, 0x39, 0x45, 0x54, 0x16, 0x55, 0x2A, 0xE4, 
	0xB4, 0x67, 0xE4, 0xB4, 0x6F, 0x18, 0x31, 0x47, 0x59, 0x70, 
	0x05, 0xCC, 0x94, 0x1B, 0x30, 0x3F, 0xDC, 0x0B, 0x8F, 0x6C, 
	0x51, 0x1E, 0xB5, 0xFE, 0x04, 0xDF, 0xD1, 0xC1, 0xBF, 0xA9, 
	0xA2, 0x43, 0xDD, 0x84, 0x3A, 0x26, 0x83, 0xDA, 0x50, 0xEF, 
	0xC2, 0xB5, 0xB0, 0x6B, 0x4C, 0x15, 0xA3, 0x00, 0x63, 0xF6, 
	0x27, 0x3D, 0x55, 0xE9, 0x41, 0xAD, 0xD3, 0x9F, 0x74, 0x54, 
	0xA5, 0x03, 0xB5, 0x2E, 0x8C, 0x43, 0x55, 0xC3, 0xEF, 0x03, 
	0x34, 0xB5, 0x3F, 0x81, 0xC3, 0x0F, 0xEE, 0x90, 0xD8, 0x40, 
	0xEA, 0xC7, 0x2A, 0x4B, 0x4E, 0x69, 0x26, 0x81, 0x41, 0x05, 
	0x30, 0x75, 0x82, 0x05, 0x44, 0x83, 0x86, 0x8E, 0xF9, 0x90, 
	0x8E, 0xD8, 0xC0, 0xB6, 0x8D, 0x75, 0x40, 0x6E, 0x03, 0x2E, 
	0x4A, 0xA0, 0x83, 0x68, 0x26, 0x88, 0x40, 0xFD, 0x6D, 0xEA, 
	0x37, 0x49, 0x62, 0x10, 0xAD, 0xD3, 0x35, 0x59, 0xBF, 0x49, 
	0xFD, 0xD0, 0x84, 0x3A, 0x09, 0x07, 0x40, 0x3D, 0xA8, 0x03, 
	0x17, 0xB3, 0x07, 0x82, 0xE2, 0xAC, 0x90, 0xBE, 0x01, 0x57, 
	0x60, 0xE8, 0x6F, 0x03, 0x7D, 0x1D, 0xAE, 0xC0, 0xDD, 0x5E, 
	0x17, 0x1A, 0xC0, 0x00, 0x2A, 0xC0, 0x54, 0x83, 0x06, 0x4E, 
	0xDE, 0x80, 0x9B, 0xB1, 0xDE, 0x86, 0x06, 0xB0, 0x30, 0x55, 
	0xB8, 0x14, 0x1B, 0x3A, 0x34, 0x7A, 0x38, 0x02, 0x72, 0xA0, 
	0xF8, 0xED, 0x63, 0x9C, 0x2A, 0xA8, 0x07, 0x89, 0x82, 0xDE, 
	0xB0, 0xCF, 0x84, 0x3A, 0x7E, 0x1B, 0xA1, 0xA3, 0x44, 0x26, 
	0x72, 0x80, 0x86, 0x41, 0x0D, 0xA0, 0xD3, 0xEE, 0x76, 0xA1, 
	0x13, 0x1B, 0x20, 0x5F, 0xCF, 0xD4, 0x94, 0x76, 0x07, 0xD8, 
	0x75, 0x00, 0x07, 0x08, 0x02, 0x07, 0x98, 0x69, 0x47, 0x63, 
	0x0D, 0x5D, 0x07, 0x76, 0x5D, 0x18, 0x39, 0xE6, 0x3A, 0xC6, 
	0x7E, 0x50, 0x32, 0xAA, 0xB5, 0x8B, 0x0B, 0xA5, 0xC3, 0x2C, 
	0xA0, 0xDE, 0x43, 0x86, 0x70, 0x73, 0xD7, 0x51, 0xD6, 0x1E, 
	0x00, 0xF5, 0xBA, 0xBA, 0x62, 0xF4, 0x3A, 0x53, 0x80, 0x04, 
	0x0C, 0x14, 0x0B, 0x51, 0x8E, 0x35, 0x6A, 0x40, 0x85, 0x70, 
	0xB1, 0x02, 0x93, 0xD4, 0xA9, 0x62, 0x88, 0x0A, 0x2E, 0x10, 
	0x6A, 0xE9, 0x18, 0xA4, 0x33, 0xDB, 0x40, 0xEF, 0xB8, 0x2B, 
	0x2A, 0x3D, 0xE2, 0x0E, 0x95, 0x63, 0x06, 0xF3, 0x34, 0x48, 
	0xEE, 0xFD, 0xD4, 0x5E, 0x88, 0x3D, 0x60, 0x80, 0x4D, 0x3B, 
	0xAE, 0x67, 0xAD, 0x83, 0xB4, 0x8F, 0x11, 0xC6, 0x24, 0xEB, 
	0x9F, 0x42, 0x2C, 0x52, 0x17, 0xE6, 0x0E, 0xD1, 0xA1, 0x1C, 
	0x63, 0xCE, 0x4F, 0x79, 0xFC, 0xDE, 0xE7, 0x20, 0xDA, 0xB4, 
	0x59, 0x02, 0x57, 0xA7, 0x47, 0xBA, 0xF2, 0x20, 0x46, 0xF5, 
	0xCA, 0xA8, 0x86, 0xA3, 0xF1, 0xF7, 0xBE, 0xA6, 0x2A, 0xF1, 
	0x03, 0x3E, 0x59, 0xBC, 0x55, 0xA1, 0xA0, 0x2C, 0xE8, 0xDE, 
	0xDF, 0xAF, 0xA0, 0x3E, 0xF1, 0x73, 0xA0, 0x28, 0x8E, 0xED, 
	0xC7, 0x74, 0xF9, 0x7E, 0xB4, 0x0B, 0x12, 0x29, 0x76, 0x41, 
	0x00, 0x25, 0xAE, 0x92, 0x3F, 0xD2, 0x21, 0x12, 0xE7, 0x0A, 
	0xC0, 0x88, 0x97, 0x2E, 0x25, 0xFC, 0xE2, 0xE0, 0x60, 0x40, 
	0xAC, 0x64, 0x6E, 0x20, 0xAB, 0xA2, 0x86, 0x6C, 0x0B, 0x98, 
	0xC3, 0x0E, 0x29, 0xE3, 0x8C, 0x6B, 0x3B, 0x15, 0x53, 0xAB, 
	0x30, 0x86, 0x2B, 0x6D, 0xBD, 0xA2, 0x9D, 0xAA, 0xAE, 0x9B, 
	0x26, 0x81, 0xFC, 0x54, 0x45, 0x40, 0x6A, 0x87, 0x96, 0x80, 
	0x02, 0x9E, 0xC1, 0xA5, 0x59, 0x0C, 0x66, 0x70, 0x29, 0xB8, 
	0x1D, 0xD0, 0x04, 0x60, 0x93, 0xB2, 0x52, 0xE7, 0xA5, 0xB1, 
	0xFF, 0x84, 0xAA, 0x8A, 0x6C, 0x97, 0xE6, 0xD2, 0xD1, 0x5B, 
	0x26, 0x97, 0x16, 0x8C, 0x4C, 0x88, 0xA7, 0xE9, 0xE6, 0xF3, 
	0xF2, 0x68, 0x5C, 0x8E, 0x36, 0x2F, 0xCD, 0xFD, 0xE5, 0x21, 
	0x8E, 0x05, 0x11, 0x1A, 0x55, 0x63, 0x6B, 0x83, 0x36, 0x84, 
	0x48, 0xBA, 0x99, 0x89, 0xA4, 0xFE, 0x44, 0x45, 0xDD, 0xFD, 
	0x45, 0xD0, 0x61, 0x85, 0x9E, 0x93, 0xC0, 0x68, 0x76, 0x7B, 
	0x99, 0x5A, 0x0C, 0x3D, 0x57, 0x8B, 0xD9, 0x7D, 0x56, 0x06, 
	0xF0, 0x55, 0x7B, 0xCB, 0x60, 0x96, 0x44, 0x68, 0x6A, 0xD9, 
	0x9C, 0x73, 0x23, 0x69, 0x6F, 0x99, 0xB2, 0xB2, 0x2F, 0x83, 
	0x86, 0xA9, 0xA2, 0xBD, 0xFD, 0x13, 0x1E, 0xC5, 0x29, 0x99, 
	0xBB, 0xB6, 0xCE, 0xD6, 0x4D, 0xDC, 0xD0, 0x40, 0xB3, 0x95, 
	0x8D, 0xDC, 0xFB, 0x85, 0x49, 0xE0, 0x9B, 0xCC, 0xD2, 0x14, 
	0x8E, 0xCD, 0x2D, 0xDB, 0x4C, 0x2F, 0x18, 0xEE, 0xF1, 0x2F, 
	0x72, 0x6B, 0x68, 0x25, 0xE3, 0x6C, 0x76, 0xD5, 0x2D, 0x0C, 
	0xB5, 0x6E, 0xCE, 0xD0, 0xF8, 0x89, 0xFE, 0xB4, 0x97, 0xE8, 
	0xAF, 0xA4, 0x3B, 0x52, 0xE6, 0x2F, 0xEA, 0x4F, 0xAB, 0xE8, 
	0x0F, 0x55, 0xF5, 0x6F, 0x54, 0x60, 0xAF, 0xBC, 0xB3, 0x75, 
	0x73, 0x07, 0xC3, 0x97, 0x28, 0xF0, 0x05, 0xAE, 0x4E, 0xAB, 
	0x6E, 0xAA, 0x63, 0xF2, 0xCA, 0x26, 0xF2, 0x36, 0x33, 0xD3, 
	0xCF, 0x6D, 0xBF, 0x67, 0xFC, 0x8A, 0x6A, 0xCB, 0x4E, 0xA4, 
	0xD9, 0xED, 0xB4, 0xCC, 0x0D, 0x6E, 0x7A, 0xD1, 0x79, 0xB4, 
	0x9F, 0x9F, 0x68, 0x67, 0xFF, 0x89, 0x1A, 0x95, 0x65, 0xED, 
	0x6A, 0x1B, 0x9C, 0x31, 0x80, 0xCA, 0x54, 0xAC, 0xEF, 0x3B, 
	0xCF, 0xED, 0xBB, 0xBA, 0xAD, 0x97, 0x77, 0x75, 0xB3, 0xA7, 
	0xBF, 0xC8, 0x30, 0xF7, 0xA3, 0xDA, 0xD8, 0x45, 0xB5, 0xA8, 
	0xA5, 0xE3, 0x17, 0x1C, 0xE5, 0xDD, 0xF2, 0x56, 0xD6, 0x8D, 
	0xEC, 0xA4, 0x33, 0xB3, 0x55, 0x31, 0xB6, 0xD8, 0xFB, 0x13, 
	0xBB, 0x84, 0xF3, 0x8E, 0xF6, 0xB4, 0x98, 0x00, 0xF2, 0x86, 
	0xAE, 0xB8, 0x0F, 0x78, 0x43, 0x0F, 0x33, 0x28, 0x2E, 0xB0, 
	0xCA, 0x53, 0x26, 0x7A, 0x5F, 0xCB, 0x2E, 0x11, 0x73, 0xB8, 
	0x44, 0xCC, 0x4F, 0xBC, 0xC1, 0x5C, 0x5C, 0x1C, 0x44, 0x00, 
	0x94, 0xBA, 0xDF, 0x2B, 0xB2, 0x96, 0xB6, 0x8D, 0xD1, 0x6E, 
	0x74, 0xD4, 0xFF, 0x9C, 0x37, 0xE1, 0xE1, 0x41, 0x5C, 0x41, 
	0xE0, 0x4D, 0x2B, 0xB4, 0x17, 0x51, 0x2C, 0xF7, 0xE5, 0x25, 
	0x5C, 0xC4, 0x50, 0x99, 0x3C, 0x91, 0xC9, 0x72, 0xA1, 0x5E, 
	0x14, 0xA6, 0xCD, 0x7B, 0xF6, 0xE6, 0x05, 0xAE, 0xC0, 0x51, 
	0xE0, 0x88, 0x4E, 0x7C, 0x99, 0x01, 0x5D, 0x6D, 0x13, 0xEE, 
	0xC1, 0x03, 0xA7, 0x85, 0xB4, 0xF0, 0xB3, 0x20, 0xB8, 0x15, 
	0x0E, 0xDD, 0xC9, 0x7C, 0x9A, 0xAF, 0x98, 0xB3, 0x45, 0x09, 
	0xBB, 0x05, 0xDE, 0x0C, 0x20, 0x1B, 0xC6, 0xB3, 0x41, 0xD2, 
	0x59, 0xA5, 0x5D, 0x0D, 0x8E, 0x20, 0x82, 0x6A, 0x80, 0x41, 
	0x6C, 0xCE, 0x8A, 0x4F, 0x00, 0xB3, 0xEA, 0x59, 0xB2, 0x56, 
	0x64, 0x84, 0xAB, 0xF9, 0xDA, 0xCE, 0x0A, 0xDF, 0xCB, 0x91, 
	0x5D, 0x34, 0xD9, 0x87, 0x29, 0x7D, 0x0E, 0xB2, 0x39, 0xFB, 
	0x59, 0x43, 0xDB, 0x39, 0xF9, 0xC1, 0x5E, 0x97, 0xC5, 0xC2, 
	0x5D, 0x70, 0xD1, 0x96, 0xEB, 0x03, 0x88, 0xC2, 0x17, 0x85, 
	0x6C, 0xDA, 0xE1, 0x09, 0x26, 0x5D, 0x24, 0xBA, 0x4A, 0x0F, 
	0xF3, 0xB9, 0x40, 0x50, 0xB3, 0xFA, 0x3E, 0x28, 0x2C, 0x58, 
	0x3F, 0xA4, 0x64, 0xDA, 0x00, 0x3F, 0x34, 0xF0, 0x6D, 0x2B, 
	0x68, 0x5A, 0x81, 0x3F, 0x0F, 0xFB, 0x69, 0xB4, 0x1A, 0xC8, 
	0xA7, 0xAF, 0x0F, 0x1B, 0x35, 0x90, 0xB4, 0xDE, 0x38, 0x94, 
	0x0E, 0xC2, 0x59, 0xB2, 0x1A, 0x48, 0x27, 0x47, 0x48, 0xF6, 
	0x54, 0x3A, 0x01, 0xC1, 0x24, 0xDF, 0x19, 0xCA, 0xC1, 0x2C, 
	0x70, 0xBE, 0xB1, 0xD4, 0xBB, 0x44, 0x59, 0x25, 0xEC, 0x92, 
	0x4F, 0x0F, 0x1B, 0x94, 0xCA, 0xCC, 0xAC, 0xB8, 0xDE, 0x90, 
	0x4F, 0x8E, 0x00, 0xE7, 0x54, 0x56, 0xA2, 0x30, 0xF0, 0x43, 
	0x97, 0xD9, 0xA4, 0x3F, 0xDC, 0x48, 0xB8, 0x02, 0x41, 0x4C, 
	0x3F, 0xF2, 0x74, 0xAB, 0x68, 0xB1, 0xEC, 0x0A, 0xB3, 0x04, 
	0x96, 0x5B, 0xC9, 0x48, 0x8B, 0x44, 0xAC, 0x17, 0x44, 0x56, 
	0xDA, 0xA7, 0x8F, 0x09, 0x64, 0xA6, 0xA7, 0x85, 0xE2, 0xD7, 
	0x15, 0xBF, 0xFC, 0xA6, 0x41, 0x8E, 0xC2, 0x5B, 0xF7, 0x61, 
	0x8D, 0xAF, 0x20, 0xE9, 0xCE, 0x7F, 0x48, 0x13, 0xA0, 0x0B, 
	0xF4, 0x61, 0xBD, 0xA0, 0x3F, 0x12, 0x3F, 0x5D, 0xF8, 0x49, 
	0x8B, 0xD8, 0xD5, 0x07, 0x72, 0xFD, 0x89, 0x5F, 0xAD, 0xFF, 
	0xC1, 0x3D, 0x9D, 0xE7, 0xDB, 0xBC, 0x91, 0xAC, 0xEC, 0x75, 
	0x65, 0xCF, 0x13, 0x7F, 0xB3, 0x38, 0x47, 0xB7, 0x83, 0x98, 
	0xF2, 0x49, 0xC5, 0x94, 0x05, 0x71, 0x07, 0xD7, 0x70, 0xCB, 
	0xD8, 0x25, 0x94, 0x66, 0xC9, 0x73, 0xD7, 0xF8, 0x6D, 0x5B, 
	0x96, 0xB8, 0x86, 0xC6, 0x53, 0x5D, 0x09, 0x36, 0x12, 0x08, 
	0xE9, 0x1B, 0x54, 0x18, 0xCE, 0xAA, 0x94, 0x16, 0x07, 0x21, 
	0x6E, 0x95, 0xD0, 0xBD, 0x97, 0x3E, 0xAE, 0x30, 0x7F, 0x52, 
	0x63, 0xE9, 0xD6, 0xA4, 0x2F, 0x61, 0xF6, 0xFB, 0x46, 0x51, 
	0x95, 0xD2, 0xCC, 0x87, 0xC3, 0x9B, 0x33, 0xAD, 0xAF, 0xD6, 
	0xB7, 0xA4, 0x79, 0xF3, 0x74, 0x7C, 0x50, 0xC6, 0xA1, 0x1C, 
	0xA1, 0xA5, 0xDC, 0xF2, 0x32, 0x80, 0x69, 0x6C, 0xAC, 0x96, 
	0xBD, 0xC0, 0x4F, 0x41, 0x68, 0xB7, 0x09, 0x2A, 0x6C, 0xE1, 
	0x40, 0xEC, 0xC3, 0xBA, 0x52, 0x5E, 0xA2, 0x41, 0x51, 0x35, 
	0xFE, 0x0A, 0xBF, 0xC6, 0xAB, 0x2B, 0xF9, 0x2E, 0xC9, 0x35, 
	0x99, 0xC6, 0x81, 0x98, 0x73, 0x71, 0xD7, 0xC8, 0xFC, 0xAB, 
	0x70, 0xFC, 0x1E, 0xF5, 0xF2, 0xBA, 0xF0, 0x11, 0x20, 0xC9, 
	0xB7, 0xD8, 0xCC, 0xDF, 0x9F, 0x5E, 0x5E, 0xF7, 0x61, 0x53, 
	0xCC, 0x4E, 0x59, 0x26, 0x9E, 0xBF, 0x57, 0x30, 0x84, 0xFE, 
	0xB6, 0xBC, 0x50, 0x40, 0xD6, 0x97, 0xD7, 0x85, 0x37, 0x0A, 
	0x85, 0x8E, 0xD2, 0x2B, 0x05, 0xB3, 0xF8, 0x46, 0x01, 0x81, 
	0x46, 0xDE, 0x1C, 0x5C, 0xD5, 0xE4, 0x66, 0xBA, 0xF1, 0x22, 
	0xE1, 0xE6, 0xA4, 0x7D, 0x26, 0x4B, 0x2D, 0x09, 0x1C, 0x8E, 
	0x3C, 0xA8, 0xBC, 0xED, 0x10, 0xAF, 0x19, 0xF8, 0xE3, 0x74, 
	0xBC, 0x9E, 0x85, 0x6E, 0x2A, 0x5D, 0x59, 0xC9, 0x6D, 0xFF, 
	0x45, 0x82, 0x27, 0x84, 0x58, 0x7C, 0x15, 0x92, 0x77, 0xFC, 
	0x5C, 0x70, 0x6D, 0x3F, 0xC1, 0x71, 0xFD, 0x58, 0xFA, 0x8D, 
	0xFD, 0xB6, 0xA4, 0x92, 0x81, 0x63, 0x9D, 0xB8, 0xEF, 0xD5, 
	0xE9, 0xE9, 0x10, 0x4C, 0xAB, 0xD8, 0x71, 0x32, 0xD4, 0x8C, 
	0xD2, 0xDE, 0x23, 0xBF, 0x58, 0x5C, 0xDE, 0x1C, 0x1A, 0x0E, 
	0x3D, 0xBE, 0xA4, 0x45, 0x47, 0x5A, 0x9C, 0x2E, 0xC0, 0xBE, 
	0x0D, 0x0B, 0x9E, 0x28, 0x6F, 0x33, 0x5F, 0x64, 0x2F, 0x5C, 
	0xFB, 0x76, 0x16, 0x7D, 0x47, 0x87, 0xC6, 0xB3, 0xC3, 0xCC, 
	0x2E, 0x01, 0xF0, 0xF2, 0x7A, 0x96, 0xB9, 0x94, 0x8D, 0x64, 
	0x26, 0xF3, 0x2A, 0x84, 0xEE, 0x3A, 0x67, 0x87, 0x3C, 0x63, 
	0x7B, 0xD8, 0x3F, 0x64, 0x49, 0xCE, 0x43, 0xB0, 0xE3, 0x27, 
	0x14, 0x9B, 0x43, 0xA0, 0xD0, 0xA8, 0x40, 0xCC, 0x83, 0x67, 
	0x55, 0x4C, 0x79, 0x14, 0xE5, 0x5F, 0x56, 0xF7, 0x74, 0x2E, 
	0x84, 0x58, 0x1B, 0xFE, 0x26, 0xAD, 0x2F, 0xF9, 0xE4, 0x7F, 
	0x9B, 0xB3, 0x20, 0xB2, 0x6F, 0x07, 0x52, 0x2E, 0x18, 0xEE, 
	0xEB, 0xDA, 0x0E, 0x66, 0x67, 0x72, 0xB2, 0x88, 0xEE, 0x61, 
	0x95, 0x78, 0x22, 0x16, 0xDC, 0x39, 0x49, 0xC9, 0x96, 0x84, 
	0x81, 0xE1, 0xFA, 0x68, 0xC3, 0x82, 0x8E, 0xF5, 0x69, 0x1D, 
	0x97, 0x74, 0x59, 0xB2, 0x45, 0x69, 0xC3, 0xD4, 0x96, 0x9B, 
	0xA6, 0x46, 0xD2, 0x7F, 0x13, 0x29, 0xF9, 0x9B, 0x7C, 0x05, 
	0x4A, 0xBD, 0xBB, 0x8D, 0x2E, 0x17, 0xFD, 0xA6, 0xA1, 0x91, 
	0xD5, 0x2D, 0x77, 0x5A, 0x1D, 0x25, 0x88, 0x2A, 0x32, 0xD6, 
	0xC6, 0x6E, 0xEC, 0x5B, 0x41, 0x5D, 0x66, 0xA7, 0xED, 0xB2, 
	0x98, 0xC2, 0xCF, 0xDF, 0x32, 0xD8, 0x22, 0xAE, 0xDA, 0xF1, 
	0x2A, 0xC1, 0x66, 0xFA, 0x29, 0xBF, 0x45, 0x53, 0x5F, 0x0D, 
	0x01, 0xCF, 0x29, 0xEF, 0xCF, 0x05, 0x6E, 0xC1, 0x01, 0x0B, 
	0xFC, 0xB6, 0xB8, 0x71, 0x37, 0x08, 0xE6, 0xBE, 0xFD, 0x2D, 
	0x7B, 0x35, 0x47, 0x4F, 0x5B, 0xEC, 0xC2, 0x1D, 0xA3, 0xC2, 
	0x73, 0xF6, 0x65, 0x4C, 0x8C, 0xD3, 0xE8, 0x74, 0x42, 0xC3, 
	0x58, 0xD8, 0x58, 0xA8, 0xD3, 0x61, 0xED, 0x99, 0xC1, 0x03, 
	0xCD, 0xAC, 0xFF, 0x28, 0x9C, 0x81, 0x10, 0x60, 0x6A, 0x1D, 
	0xF0, 0xF0, 0x03, 0x59, 0x9C, 0x59, 0x2E, 0x39, 0x6E, 0xB7, 
	0x74, 0x48, 0x58, 0xF8, 0x7D, 0xA1, 0x0A, 0xFF, 0x3D, 0xFB, 
	0x1E, 0x07, 0xDF, 0x2B, 0x68, 0x9D, 0x52, 0x07, 0x9A, 0x99, 
	0xDA, 0xD7, 0xEA, 0x5B, 0x68, 0x46, 0xB1, 0x54, 0x4B, 0xF0, 
	0xA3, 0x5A, 0xFC, 0x42, 0xF0, 0x1F, 0x92, 0xA6, 0xB3, 0xE9, 
	0x89, 0xB2, 0xF8, 0xE2, 0x65, 0x10, 0x2A, 0xDC, 0x2B, 0xEF, 
	0x7C, 0xB6, 0xB7, 0xB9, 0x95, 0x2B, 0x5C, 0xFB, 0xB0, 0xB2, 
	0xBB, 0x95, 0xBF, 0x6D, 0x50, 0x44, 0x28, 0xCF, 0x4A, 0x79, 
	0x56, 0x7E, 0x89, 0x45, 0x52, 0xD6, 0x89, 0x40, 0xA9, 0x53, 
	0x63, 0xAF, 0x8E, 0x99, 0xC2, 0xBD, 0x7A, 0x9E, 0xCC, 0xF7, 
	0xB6, 0x9B, 0xCA, 0x4B, 0x85, 0xCD, 0x49, 0x0F, 0x88, 0x5E, 
	0x44, 0x3A, 0x07, 0xC7, 0xE9, 0xB5, 0x2C, 0xC7, 0xA9, 0x15, 
	0x97, 0x01, 0x0E, 0x61, 0xB9, 0xF0, 0xA6, 0x70, 0x31, 0x9C, 
	0xC0, 0x3A, 0x4F, 0x15, 0x1F, 0xF6, 0xB3, 0x5F, 0xF1, 0xD7, 
	0x3E, 0xEC, 0xED, 0x72, 0x98, 0xC4, 0x7F, 0x02, 0x38, 0xF1, 
	0xA7, 0xC5, 0x50, 0x89, 0x39, 0x10, 0x3E, 0x00, 0x27, 0x04, 
	0x9A, 0x1D, 0x46, 0x76, 0x16, 0xD6, 0x7E, 0xFC, 0x50, 0xC9, 
	0x9F, 0x94, 0x86, 0xD9, 0xB2, 0xDD, 0x0E, 0x7F, 0x6A, 0x03, 
	0xDB, 0xD4, 0x9B, 0xB9, 0x27, 0x9F, 0x38, 0x1D, 0x54, 0x34, 
	0xCD, 0x63, 0x98, 0xC1, 0x2D, 0x60, 0xC3, 0xEC, 0x8A, 0xB0, 
	0xCA, 0xCD, 0x54, 0xBC, 0xCF, 0xC1, 0x97, 0x66, 0xA0, 0x32, 
	0xAF, 0x68, 0xA2, 0x39, 0x28, 0xDC, 0x2D, 0x65, 0x74, 0xA5, 
	0x65, 0xB9, 0xE1, 0xBC, 0x29, 0x52, 0x63, 0xA1, 0x1F, 0x58, 
	0xF2, 0x2D, 0xE8, 0xD3, 0x89, 0xBF, 0x04, 0xE3, 0xAF, 0xCC, 
	0xA5, 0x28, 0x0B, 0xCA, 0x66, 0x63, 0x0E, 0xBD, 0xC0, 0xCD, 
	0xDB, 0x1D, 0x15, 0x11, 0x72, 0xE5, 0x8D, 0xA4, 0x4D, 0x6F, 
	0x24, 0xEB, 0x45, 0x9F, 0x85, 0x40, 0x5B, 0x7C, 0xD6, 0x76, 
	0x93, 0xA8, 0x2B, 0xEE, 0xD0, 0x69, 0x31, 0x43, 0x48, 0x26, 
	0x4E, 0x8B, 0x99, 0x98, 0xEB, 0x5C, 0x86, 0x8E, 0xFB, 0x7D, 
	0xCA, 0x9C, 0x81, 0xB8, 0x96, 0x7E, 0x03, 0x56, 0xCF, 0xBE, 
	0x49, 0xCC, 0xBA, 0xC5, 0x9B, 0xB9, 0xA2, 0xCE, 0x8B, 0x83, 
	0xD0, 0xDC, 0x18, 0x47, 0x17, 0x05, 0xCB, 0xE8, 0xA2, 0x31, 
	0xD4, 0x32, 0x91, 0xB7, 0xF9, 0xBB, 0xFA, 0xC1, 0xC1, 0xF3, 
	0xE3, 0x65, 0x1F, 0xA6, 0x54, 0x57, 0x1E, 0x2F, 0xD2, 0x03, 
	0xB6, 0xAD, 0x76, 0xB8, 0xF3, 0x9A, 0x0D, 0x37, 0x21, 0xD8, 
	0x16, 0x07, 0x07, 0xAF, 0xBC, 0xDC, 0x7D, 0x1F, 0x1C, 0x90, 
	0x29, 0xEC, 0xFF, 0xBA, 0x98, 0xC8, 0xFC, 0xEC, 0x95, 0xB1, 
	0x92, 0xBF, 0x28, 0x56, 0x4A, 0xE6, 0x81, 0x9A, 0x50, 0x50, 
	0xD6, 0xEA, 0xEA, 0x0A, 0x00, 0x74, 0xCA, 0x8F, 0xC5, 0x79, 
	0x6C, 0xBC, 0x70, 0xB7, 0x71, 0x6B, 0x17, 0xCF, 0xA4, 0x4A, 
	0xCA, 0xA0, 0xBC, 0x91, 0xE7, 0x7C, 0x93, 0x66, 0x3B, 0x67, 
	0xCE, 0x36, 0x21, 0xE2, 0x84, 0x43, 0x7D, 0x10, 0x66, 0x1B, 
	0x1B, 0x06, 0xDC, 0x6C, 0x6F, 0x87, 0xE5, 0xBD, 0x4D, 0x63, 
	0x93, 0x70, 0x5A, 0xDF, 0xF0, 0xBF, 0x8B, 0x3D, 0xFC, 0x2F, 
	0x4C, 0xA1, 0xBA, 0x9C, 0xF4, 0x0C, 0x73, 0xC7, 0xB6, 0x1B, 
	0x64, 0x3F, 0x5F, 0x5C, 0x32, 0x87, 0x30, 0x77, 0xB9, 0x1E, 
	0x44, 0x58, 0xB9, 0xCB, 0x5D, 0x6C, 0x77, 0xB9, 0xBF, 0x24, 
	0xDF, 0x1E, 0xE7, 0x34, 0x80, 0x41, 0x31, 0xCC, 0x4F, 0xE2, 
	0xC1, 0xB6, 0x4F, 0x4C, 0x72, 0x81, 0x07, 0xEC, 0x6A, 0x7D, 
	0x1E, 0xC7, 0xD6, 0x43, 0xCB, 0x4F, 0xA8, 0xDC, 0x5C, 0x0A, 
	0x88, 0xC3, 0xFC, 0xB3, 0x6A, 0x2F, 0xAC, 0x6D, 0xBF, 0xDA, 
	0x07, 0x77, 0xCB, 0xE6, 0x4D, 0x53, 0xC3, 0x60, 0x06, 0xF3, 
	0x19, 0xF8, 0x7B, 0x9F, 0xE1, 0x10, 0x17, 0x2A, 0xF2, 0xA4, 
	0x9B, 0xCC, 0xCB, 0x07, 0x60, 0x3C, 0xC1, 0x49, 0x15, 0x57, 
	0xD8, 0x43, 0xC0, 0x62, 0xBD, 0x45, 0xC5, 0x67, 0x96, 0x79, 
	0x07, 0x53, 0x25, 0xD8, 0xE7, 0x74, 0xAF, 0x2C, 0xD6, 0x70, 
	0x18, 0xF0, 0x9B, 0x67, 0xB6, 0x50, 0xCB, 0xA1, 0x7F, 0x70, 
	0xB0, 0x21, 0xEC, 0x06, 0xC3, 0x1D, 0xD2, 0x36, 0x35, 0x16, 
	0xFE, 0xEE, 0x0B, 0xBC, 0xA9, 0xC5, 0xDD, 0xB0, 0x74, 0x38, 
	0x80, 0x79, 0x29, 0x11, 0x9E, 0x9A, 0x5E, 0xED, 0xE6, 0x44, 
	0x3D, 0x38, 0xE0, 0xBF, 0x1B, 0x98, 0xDC, 0x4E, 0x2B, 0xEA, 
	0xCC, 0x07, 0x9E, 0x53, 0xE4, 0xB2, 0x91, 0xC3, 0xFD, 0xB2, 
	0x12, 0x41, 0xB0, 0xA0, 0x41, 0x8B, 0x7D, 0x73, 0xAA, 0xFE, 
	0xF8, 0xE1, 0x6F, 0xD1, 0x04, 0x5C, 0xB5, 0x36, 0xFA, 0xB4, 
	0xA2, 0xE8, 0xDB, 0xED, 0x0A, 0x27, 0x34, 0xAC, 0x6D, 0x19, 
	0x83, 0x10, 0xE7, 0xA6, 0xBE, 0x63, 0x66, 0xC1, 0xFF, 0xD7, 
	0x6C, 0xFC, 0x82, 0x7C, 0x37, 0xA7, 0x43, 0x96, 0x2C, 0xDD, 
	0x69, 0xB0, 0x60, 0xEE, 0xFB, 0x9A, 0x6C, 0xF4, 0x8F, 0xE4, 
	0x8B, 0x84, 0x7C, 0x8D, 0xC6, 0xD3, 0x13, 0xA5, 0x98, 0x9F, 
	0x8A, 0x5F, 0xEF, 0x89, 0x4F, 0x54, 0x1E, 0x45, 0x96, 0x87, 
	0x3E, 0x9F, 0x2B, 0xBA, 0xED, 0x59, 0xE4, 0x3C, 0x3C, 0x52, 
	0x22, 0xCF, 0xB3, 0x96, 0x7E, 0xF0, 0xD0, 0x3F, 0xC7, 0x2B, 
	0x8B, 0xF2, 0x1E, 0x7C, 0x8D, 0x8B, 0x99, 0x3C, 0x25, 0xB1, 
	0xC2, 0xA4, 0x99, 0xC0, 0x45, 0xC6, 0x1B, 0x34, 0xEF, 0xDD, 
	0xD9, 0xAD, 0x9F, 0x36, 0x57, 0x31, 0xE6, 0x26, 0x6D, 0xFC, 
	0xF5, 0x48, 0xD3, 0x72, 0x6E, 0xD6, 0x49, 0xDA, 0x77, 0xBF, 
	0x5B, 0x76, 0x3A, 0x78, 0xC2, 0xF4, 0x66, 0xE9, 0x4E, 0xB2, 
	0x68, 0x4B, 0x8F, 0xD2, 0x8C, 0xD2, 0x98, 0x7D, 0xE9, 0x75, 
	0x9B, 0xFE, 0xA4, 0x24, 0x0A, 0x7C, 0x47, 0xD2, 0xE0, 0xA6, 
	0x25, 0xAD, 0x20, 0x38, 0x84, 0xCD, 0xD5, 0x37, 0xB1, 0xB1, 
	0xB4, 0xE2, 0xB9, 0x1F, 0xF6, 0x25, 0xDD, 0x94, 0x54, 0x09, 
	0xFE, 0x0D, 0x24, 0xFC, 0x29, 0xD3, 0x3C, 0x8E, 0xD6, 0xA1, 
	0xC3, 0xD8, 0xF5, 0x5F, 0xCF, 0x8E, 0xF1, 0xBF, 0x01, 0xA7, 
	0xD9, 0x8C, 0x2D, 0xC7, 0x5F, 0x27, 0x0C, 0x7D, 0x93, 0x7B, 
	0x2B, 0x98, 0x49, 0x8F, 0x82, 0x3B, 0xF0, 0xE3, 0x9C, 0xF1, 
	0x3B, 0x59, 0xF8, 0xAB, 0x12, 0x69, 0x23, 0x91, 0x0D, 0x8E, 
	0xD2, 0x6B, 0x97, 0xFE, 0x72, 0x59, 0x41, 0x34, 0xFA, 0x2F, 
	0x17, 0x58, 0x74, 0xEC, 0xB8, 0x1C, 0xB3, 0xDC, 0x37, 0x25, 
	0x44, 0x6D, 0x17, 0xBF, 0x1C, 0x06, 0x4C, 0x3F, 0x64, 0x09, 
	0x5F, 0x40, 0xC6, 0x2B, 0xE7, 0x16, 0xD9, 0x31, 0xE5, 0x81, 
	0xCA, 0xDB, 0x50, 0x81, 0xE5, 0xD8, 0x9E, 0xD3, 0xDB, 0x3A, 
	0x5F, 0x6F, 0x04, 0x18, 0x2C, 0x83, 0x19, 0xB8, 0x5E, 0x3A, 
	0xC8, 0x55, 0x7F, 0x4C, 0x7F, 0xDB, 0x54, 0xAF, 0x6F, 0x9D, 
	0x76, 0x36, 0xEB, 0x2D, 0x3A, 0xDA, 0x26, 0x6C, 0x10, 0x03, 
	0x67, 0x3B, 0x70, 0xAD, 0x98, 0x73, 0x7E, 0x92, 0xB6, 0x8A, 
	0xB7, 0x30, 0x00, 0x2E, 0x5B, 0x68, 0xA2, 0xB6, 0x09, 0xF8, 
	0x1A, 0x4D, 0x38, 0x83, 0x6B, 0xA6, 0xD1, 0x0A, 0x96, 0x8F, 
	0x3E, 0x8D, 0xDD, 0x02, 0xBC, 0xD0, 0x71, 0xCE, 0x59, 0x66, 
	0x5A, 0x32, 0x10, 0xAE, 0xA8, 0x73, 0x29, 0x53, 0xBA, 0x60, 
	0xAB, 0x82, 0x7D, 0x01, 0x3D, 0xB4, 0x30, 0xA1, 0x05, 0xCD, 
	0xDC, 0xAE, 0x06, 0xD5, 0x35, 0x9C, 0x99, 0x31, 0x90, 0x58, 
	0xF3, 0x1E, 0x7F, 0xFE, 0xB9, 0xAF, 0xF1, 0x25, 0x17, 0xEB, 
	0x54, 0x7A, 0x5C, 0xF1, 0x5F, 0xA2, 0xF6, 0x25, 0xCF, 0xFF, 
	0xEE, 0x3A, 0x88, 0x8C, 0xBF, 0x3E, 0xE9, 0x4B, 0x24, 0x26, 
	0xE5, 0x99, 0x79, 0x7D, 0x8B, 0xE9, 0x19, 0xA3, 0xF3, 0x77, 
	0xA6, 0x2A, 0xB8, 0x4B, 0x9C, 0x7D, 0x66, 0x88, 0x1A, 0xE0, 
	0x49, 0x4C, 0xF2, 0x6D, 0xF3, 0xA5, 0x3E, 0x07, 0xFF, 0xA7, 
	0x0E, 0x16, 0x93, 0x20, 0x8C, 0x42, 0x40, 0xDF, 0x61, 0xA5, 
	0x42, 0x3B, 0x06, 0xD0, 0xA4, 0x85, 0xE1, 0x9F, 0xBB, 0x4B, 
	0xFC, 0x73, 0xF7, 0xEA, 0xB4, 0x11, 0x70, 0x9B, 0xDD, 0xE2, 
	0xD7, 0xA0, 0x8F, 0x85, 0x7C, 0x10, 0x8B, 0xC2, 0x60, 0xE5, 
	0x5A, 0xAE, 0x93, 0x3E, 0x16, 0xD2, 0xEB, 0x83, 0x7C, 0xC2, 
	0x30, 0x55, 0xCF, 0xF3, 0x06, 0x62, 0x62, 0xAA, 0xA4, 0xC3, 
	0x0A, 0xE9, 0x03, 0x2E, 0x92, 0x68, 0x6E, 0xDB, 0xAE, 0xCC, 
	0xBE, 0x0B, 0x7B, 0x9B, 0x19, 0xFA, 0xB6, 0xA5, 0xE4, 0xFB, 
	0x66, 0xDB, 0xB6, 0x59, 0x49, 0x8F, 0x42, 0xE5, 0x02, 0xBF, 
	0x60, 0x51, 0xDA, 0xF6, 0x1D, 0xFA, 0xAF, 0xA5, 0xEB, 0xF8, 
	0x96, 0x44, 0xDE, 0x10, 0x4C, 0x90, 0xAF, 0x77, 0xA6, 0x5D, 
	0x54, 0xB6, 0xF4, 0xCA, 0x5F, 0xAE, 0xA2, 0x38, 0xB5, 0x42, 
	0x70, 0x8E, 0x4F, 0x32, 0xA5, 0xDC, 0xE9, 0x93, 0xCA, 0xA6, 
	0xC6, 0xBE, 0xA9, 0xC4, 0x78, 0x88, 0xBE, 0x27, 0x1C, 0xFC, 
	0x1F, 0x55, 0xF3, 0xB4, 0x2C, 0x82, 0x48, 0x00, 0x00, 
};

	// Default Controller Configuration (len=115)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x61, 0x05, 0x04, 0x41, 0x2D, 0x01, 0x00, 0x05, 0x04, 
	0x41, 0x2D, 0x01, 0x01, 0x05, 0x04, 0x41, 0x2D, 0x02, 0x00, 
	0x05, 0x04, 0x41, 0x2D, 0x02, 0x01, 0x05, 0x04, 0x41, 0x2D, 
	0x03, 0x00, 0x05, 0x04, 0x41, 0x2D, 0x03, 0x01, 0x05, 0x04, 
	0x41, 0x2D, 0x04, 0x00, 0x05, 0x04, 0x41, 0x2D, 0x04, 0x01, 
	0x05, 0x04, 0x41, 0x2D, 0x05, 0x00, 0x05, 0x04, 0x41, 0x2D, 
	0x05, 0x01, 0x05, 0x04, 0x41, 0x2D, 0x06, 0x00, 0x05, 0x04, 
	0x41, 0x2D, 0x06, 0x01, 0x05, 0x04, 0x41, 0x2D, 0x07, 0x00, 
	0x05, 0x04, 0x41, 0x2D, 0x07, 0x01, 0x05, 0x04, 0x41, 0x2D, 
	0x08, 0x00, 0x05, 0x04, 0x41, 0x2D, 0x08, 0x01, 0xFF, 0xC0, 
	0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 
	0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


SkaarhojGPIO2x8 GPIOboard;