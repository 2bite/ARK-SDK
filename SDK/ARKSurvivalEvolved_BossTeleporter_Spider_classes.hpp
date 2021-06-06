#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Spider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossTeleporter_Spider.BossTeleporter_Spider_C
// 0x0000 (0x0A30 - 0x0A30)
class ABossTeleporter_Spider_C : public ABossTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossTeleporter_Spider.BossTeleporter_Spider_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BossTeleporter_Spider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
