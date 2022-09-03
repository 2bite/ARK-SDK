#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Compound_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Compound.ProjArrow_Compound_C
// 0x0008 (0x0690 - 0x0688)
class AProjArrow_Compound_C : public APrimalProjectileArrow
{
public:
	class UAudioComponent*                             Projectile_SFX;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Compound.ProjArrow_Compound_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Compound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
