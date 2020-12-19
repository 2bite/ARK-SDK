#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBola_XmasLights_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBola_XmasLights.WeapBola_XmasLights_C
// 0x0000 (0x0E80 - 0x0E80)
class AWeapBola_XmasLights_C : public AWeapBola_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBola_XmasLights.WeapBola_XmasLights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBola_XmasLights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
