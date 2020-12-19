#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionTeleporter_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AscensionTeleporter_Hard.AscensionTeleporter_Hard_C
// 0x0000 (0x0A48 - 0x0A48)
class AAscensionTeleporter_Hard_C : public AAscensionTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AscensionTeleporter_Hard.AscensionTeleporter_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AscensionTeleporter_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
