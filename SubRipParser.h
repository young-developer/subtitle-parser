#pragma once

class SrtParser :
	public SubtitleParser
{
	void parse(std::string fileName);
public:
	SrtParser(void);
	SrtParser(std::string fileName);
	~SrtParser(void);
};

