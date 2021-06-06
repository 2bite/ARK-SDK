#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvProjWater_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvProjWater.CrystalWyvProjWater_C
// 0x0000 (0x0660 - 0x0660)
class ACrystalWyvProjWater_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvProjWater.CrystalWyvProjWater_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvProjWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
