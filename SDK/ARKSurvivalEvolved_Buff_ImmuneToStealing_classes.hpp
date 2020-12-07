#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToStealing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ImmuneToStealing.Buff_ImmuneToStealing_C
// 0x0012 (0x0962 - 0x0950)
class ABuff_ImmuneToStealing_C : public ABuff_Base_C
{
public:
	class APawn*                                       replicatedDamageCauser;                                   // 0x0950(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       K2Node_DynamicCast_AsPawn;                                // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0960(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0961(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ImmuneToStealing.Buff_ImmuneToStealing_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_ImmuneToStealing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
