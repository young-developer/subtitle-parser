# C++ Subtitle Parser Library
Subtitle-parser - A simple C++ Subtitle Parser library.
___
#### Formats
* SubRip

#### Sample Usage
```cpp
SubtitleParserFactory *subParserFactory = new SubtitleParserFactory("filename.srt");
SubtitleParser *parser = subParserFactory->getParser();
```
