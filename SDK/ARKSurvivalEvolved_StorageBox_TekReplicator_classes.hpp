#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekReplicator_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_TekReplicator.StorageBox_TekReplicator_C
// 0x0020 (0x0E30 - 0x0E10)
class AStorageBox_TekReplicator_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TekReplicator_C*          PrimalInventoryBP_TekReplicator_C1;                       // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastCraftingNotificationTime;                             // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_TekReplicator.StorageBox_TekReplicator_C");
		return ptr;
	}


	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void NotifyCraftingFinished();
	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_TekReplicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
