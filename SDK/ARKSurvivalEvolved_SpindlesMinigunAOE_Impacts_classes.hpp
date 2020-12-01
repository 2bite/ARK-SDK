#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpindlesMinigunAOE_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C
// 0x0008 (0x0848 - 0x0840)
class ASpindlesMinigunAOE_Impacts_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpindlesMinigunAOE_Impacts.SpindlesMinigunAOE_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpindlesMinigunAOE_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
