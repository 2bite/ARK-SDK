#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BossTeleporter_Dragon_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BossTeleporter_Dragon_Medium.BossTeleporter_Dragon_Medium_C
// 0x0000 (0x0A30 - 0x0A30)
class ABossTeleporter_Dragon_Medium_C : public ABossTeleporter_Dragon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BossTeleporter_Dragon_Medium.BossTeleporter_Dragon_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BossTeleporter_Dragon_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
