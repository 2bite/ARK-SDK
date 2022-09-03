#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_TekTransmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_TekTransmitter.StorageBox_TekTransmitter_C
// 0x0018 (0x0E28 - 0x0E10)
class AStorageBox_TekTransmitter_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TekTransmitter_C*         PrimalInventoryBP_TekTransmitter_C1;                      // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_TekTransmitter.StorageBox_TekTransmitter_C");
		return ptr;
	}


	bool BPCanBeActivatedByPlayer(class AShooterPlayerController** PC);
	void UserConstructionScript();
	void ExecuteUbergraph_StorageBox_TekTransmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
