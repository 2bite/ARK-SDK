#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossTeleporter_FZ_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_BossTeleporter_FZ_Medium.EX_BossTeleporter_FZ_Medium_C
// 0x0000 (0x0A20 - 0x0A20)
class AEX_BossTeleporter_FZ_Medium_C : public AEX_BossTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_BossTeleporter_FZ_Medium.EX_BossTeleporter_FZ_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EX_BossTeleporter_FZ_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
