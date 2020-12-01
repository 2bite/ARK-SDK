#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionTeleporter_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AscensionTeleporter_Medium.AscensionTeleporter_Medium_C
// 0x0000 (0x0A28 - 0x0A28)
class AAscensionTeleporter_Medium_C : public AAscensionTeleporter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AscensionTeleporter_Medium.AscensionTeleporter_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AscensionTeleporter_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
