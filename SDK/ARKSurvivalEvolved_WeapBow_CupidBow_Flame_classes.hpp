#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_CupidBow_Flame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C
// 0x0000 (0x0ECB - 0x0ECB)
class AWeapBow_CupidBow_Flame_C : public AWeapBow_Flame_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow_CupidBow_Flame.WeapBow_CupidBow_Flame_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBow_CupidBow_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
