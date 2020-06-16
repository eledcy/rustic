#include <Rustic.h>

class PlayGround : public Rustic::Application
{
public:
	PlayGround()
	{

	}

	~PlayGround()
	{

	}
};

int main()
{
	PlayGround* playground = new PlayGround();
	playground->Start();
	delete playground;
}