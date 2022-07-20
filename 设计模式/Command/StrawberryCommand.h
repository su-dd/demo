#ifndef StrawberryCommand_H
#define StrawberryCommand_H

#include "Command.h"
#include "IceFactoryReceiver.h"

class StrawberryCommand : public Command
{
public:
	StrawberryCommand(IceFactoryReceiver* iceFactoryReceiver)
	: m_pIceFactoryReceiver(iceFactoryReceiver) {}

	~StrawberryCommand() { m_pIceFactoryReceiver = nullp }

	virtual void execute()
	{

	}
private:
	IceFactoryReceiver* m_pIceFactoryReceiver;
};

#endif // !StrawberryCommand_H
