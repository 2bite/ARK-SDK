#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTripWireC4_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTripWireC4.WeapTripWireC4_C
// 0x0000 (0x0DA8 - 0x0DA8)
class AWeapTripWireC4_C : public AShooterWeapon_Placer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTripWireC4.WeapTripWireC4_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapTripWireC4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
