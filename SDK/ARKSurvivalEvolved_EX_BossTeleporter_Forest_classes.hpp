#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossTeleporter_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_BossTeleporter_Forest.EX_BossTeleporter_Forest_C
// 0x0000 (0x0970 - 0x0970)
class AEX_BossTeleporter_Forest_C : public AEX_BossTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_BossTeleporter_Forest.EX_BossTeleporter_Forest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EX_BossTeleporter_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif