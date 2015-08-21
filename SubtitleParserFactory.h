#pragma once

enum SubtitleFormat
{
	UndefinedType = -1,
	SubRip,
	MicroDvd,
	WebVtt
};

class SubtitleParserFactory
{
private:
	SubtitleFormat _subFormat;
	std::string _fileName;
public:
	SubtitleParser* getParser();
	SubtitleParserFactory::SubtitleParserFactory(std::string fileName);
	SubtitleFormat checkSubtitleFormat(std::string fileName);
	~SubtitleParserFactory(void);
};

