#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionTeleporter_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AscensionTeleporter_Easy.AscensionTeleporter_Easy_C
// 0x0000 (0x0A58 - 0x0A58)
class AAscensionTeleporter_Easy_C : public AAscensionTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AscensionTeleporter_Easy.AscensionTeleporter_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AscensionTeleporter_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
