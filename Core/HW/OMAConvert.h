// It can simply convert a at3+ file or stream to oma format
// Thanks to JPCSP project

#pragma once

#include "../../Globals.h"

namespace OMAConvert {

	// output OMA to outputStream, and return it's size. You need to release it by use releaseStream()
	int convertStreamtoOMA(u8* audioStream, int audioSize, u8** outputStream);
	// output OMA to outputStream, and return it's size. You need to release it by use releaseStream()
	int convertRIFFtoOMA(u8* riff, int riffSize, u8** outputStream);

	void releaseStream(u8** stream);

	int getOMANumberAudioChannels(u8* oma);

} // namespace OMAConvert
