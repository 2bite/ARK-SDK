#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Dinopithecus_BattlecryTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C
// 0x0024 (0x099C - 0x0978)
class ABuff_Dinopithecus_BattlecryTarget_C : public ABuff_Base_C
{
public:
	struct FVector                                     PlayerAttachedOffset;                                     // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerAttachedScale;                                      // 0x0984(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PlayerAttachedRotation;                                   // 0x0990(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Dinopithecus_BattlecryTarget.Buff_Dinopithecus_BattlecryTarget_C");
		return ptr;
	}


	void STATIC_BPSetupForInstigator(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Dinopithecus_BattlecryTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
