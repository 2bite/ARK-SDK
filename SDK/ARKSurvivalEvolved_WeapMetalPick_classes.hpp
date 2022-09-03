#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMetalPick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMetalPick.WeapMetalPick_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapMetalPick_C : public AWeapBasePick_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMetalPick.WeapMetalPick_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMetalPick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
