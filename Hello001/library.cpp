#define EXPORT extern "C" __declspec(dllexport)

EXPORT char* HelloMsg()
{
	return "konekomaroは、こねこまろです。";
}
