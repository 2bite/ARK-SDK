#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PauseBrain_SootheLeed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C
// 0x0009 (0x0979 - 0x0970)
class ABuff_PauseBrain_SootheLeed_C : public ABuff_PauseBrain_C
{
public:
	class UClass*                                      DinoClassToSoothe;                                        // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldSootheDino;                                        // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C");
		return ptr;
	}


	bool PreventActorTargeting(class AActor** ByActor);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PauseBrain_SootheLeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
