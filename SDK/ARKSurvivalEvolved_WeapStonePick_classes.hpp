#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStonePick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStonePick.WeapStonePick_C
// 0x0000 (0x0D90 - 0x0D90)
class AWeapStonePick_C : public AWeapBasePick_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStonePick.WeapStonePick_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStonePick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
