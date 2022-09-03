#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvProjBlood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvProjBlood.CrystalWyvProjBlood_C
// 0x0000 (0x0660 - 0x0660)
class ACrystalWyvProjBlood_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvProjBlood.CrystalWyvProjBlood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvProjBlood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
