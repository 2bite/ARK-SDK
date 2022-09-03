#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvProjEmber_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrystalWyvProjEmber.CrystalWyvProjEmber_C
// 0x0000 (0x0660 - 0x0660)
class ACrystalWyvProjEmber_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvProjEmber.CrystalWyvProjEmber_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CrystalWyvProjEmber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
