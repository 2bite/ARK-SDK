#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjIceBreath_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjIceBreath.ProjIceBreath_C
// 0x0000 (0x0660 - 0x0660)
class AProjIceBreath_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjIceBreath.ProjIceBreath_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjIceBreath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
