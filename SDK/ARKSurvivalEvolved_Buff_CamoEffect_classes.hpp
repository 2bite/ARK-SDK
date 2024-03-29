#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CamoEffect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CamoEffect.Buff_CamoEffect_C
// 0x0029 (0x09A1 - 0x0978)
class ABuff_CamoEffect_C : public ABuff_Base_C
{
public:
	TArray<class UClass*>                              classesToCamoFrom;                                        // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               affectBigDinos;                                           // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0989(0x0007) MISSED OFFSET
	TArray<class AActor*>                              immuneActors;                                             // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               affectTamedDinos;                                         // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CamoEffect.Buff_CamoEffect_C");
		return ptr;
	}


	void Add_Immune_Actor(class AActor* Dino);
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CamoEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
