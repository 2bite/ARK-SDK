#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CamoGasCloud_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CamoGasCloud.CamoGasCloud_C
// 0x0003 (0x0963 - 0x0960)
class ACamoGasCloud_C : public ABuff_PoisonTrap_C
{
public:
	bool                                               drainStaminaAffectsDinos;                                 // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               drainStaminaAffectsBigDinos;                              // 0x0961(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               drainStaminaAffectsTamedDinos;                            // 0x0962(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamoGasCloud.CamoGasCloud_C");
		return ptr;
	}


	bool BPExcludeAoEActor(class AActor** ActorToConsider);
	void UserConstructionScript();
	void ExecuteUbergraph_CamoGasCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
