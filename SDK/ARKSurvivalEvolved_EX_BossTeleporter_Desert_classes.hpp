#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossTeleporter_Desert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_BossTeleporter_Desert.EX_BossTeleporter_Desert_C
// 0x0000 (0x0A20 - 0x0A20)
class AEX_BossTeleporter_Desert_C : public AEX_BossTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_BossTeleporter_Desert.EX_BossTeleporter_Desert_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EX_BossTeleporter_Desert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
