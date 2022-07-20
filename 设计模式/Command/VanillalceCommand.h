#ifndef VanillalceCommand_h
#define VanillalceCommand_h
#include "Command.h"
#include "IceFactoryReceiver.h"

class VanillalceCommand : public Command
{
public:
	VanillalceCommand(IceFactoryReceiver* iceFactoryReceiver)
		: m_pIceFactoryReceiver(iceFactoryReceiver) {}

	~VanillalceCommand() { m_pIceFactoryReceiver = nullpter; }
	virtual void execute()
	{

	}
private:
	IceFactoryReceiver* m_pIceFactoryReceiver;
};

#endif // !VanillalceCommand_h
