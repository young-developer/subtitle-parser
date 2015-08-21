#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "SubtitleParser.h"
#include "SubRipParser.h"
#include "SubtitleParserFactory.h"

SubtitleParserFactory::SubtitleParserFactory(std::string fileName)
{
	_fileName = fileName;
	_subFormat = checkSubtitleFormat(fileName);
}

SubtitleFormat SubtitleParserFactory::checkSubtitleFormat(std::string fileName)
{
	if(fileName.size()<5) return UndefinedType;
	
	std::string format = fileName.substr(fileName.size()-4,fileName.size());

	if(format == ".srt")
	{
		return SubRip;
	}
	else if(format == ".sub")
	{
		return MicroDvd;
	}
	else if(format == ".vtt")
	{
		return WebVtt;
	}
}

SubtitleParser* SubtitleParserFactory::getParser()
{
	switch(_subFormat)
	{
		case SubRip:
		{
			return new SrtParser(_fileName);
		}
		break;
		default:
		{
			std::cout<<"Error: Undefined subtitle format!";
		}
	}
        throw;
}

SubtitleParserFactory::~SubtitleParserFactory(void)
{
}
