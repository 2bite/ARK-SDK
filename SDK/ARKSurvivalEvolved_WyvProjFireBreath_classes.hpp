#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvProjFireBreath_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvProjFireBreath.WyvProjFireBreath_C
// 0x0000 (0x0660 - 0x0660)
class AWyvProjFireBreath_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvProjFireBreath.WyvProjFireBreath_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WyvProjFireBreath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
