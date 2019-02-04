#pragma once

#include <global_include.h>

#define VHBB_DATA std::string("ux0:/data/VHBBWiki")

#define API_ENDPOINT std::string("http://devdavisnunez.x10.mx/wikihb/api/v1/?vhbb")
#define API_LOCAL std::string("ux0:/data/VHBBWiki/homebrews.yaml")

#define ICONS_FOLDER std::string("ux0:/data/VHBBWiki/icons")
#define ICON_URL_PREFIX std::string("http://devdavisnunez.x10.mx/wikihb/icons/")

#define SERVER_BASE_URL std::string("http://devdavisnunez.x10.mx/wikihb/")
#define SCREENSHOTS_FOLDER std::string("ux0:/data/VHBBWiki/screenshots")

enum {
	COLOR_WHITE = RGBA8(255, 255, 255, 255),
	COLOR_BLACK = RGBA8(0, 0, 0, 255),
	COLOR_AQUA = RGBA8(168, 244, 253, 255),
	COLOR_BLUEGREY = RGBA8(92, 108, 124, 255),
	COLOR_RED = RGBA8(255, 0, 0, 255),
	COLOR_YELLOW = RGBA8(240, 255, 0, 255)
};
