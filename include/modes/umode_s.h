#include "mode.h"

class InspIRCd;

class ModeUserServerNotice : public ModeHandler
{
 public:
	ModeUserServerNotice(InspIRCd* Instance);
	ModeAction OnModeChange(userrec* source, userrec* dest, chanrec* channel, std::string &parameter, bool adding);
};
