#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StorageBox_ChristmasGift_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StorageBox_ChristmasGift.StorageBox_ChristmasGift_C
// 0x001B (0x0DD3 - 0x0DB8)
class AStorageBox_ChristmasGift_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_Gift_C*                   PrimalInventoryBP_Gift_C1;                                // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AGameMode*                                   CallFunc_GetGameMode_ReturnValue;                         // 0x0DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameMode*                            K2Node_DynamicCast_AsShooterGameMode;                     // 0x0DC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0DD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x0DD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0DD2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StorageBox_ChristmasGift.StorageBox_ChristmasGift_C");
		return ptr;
	}


	bool BPOverrideDemolish(class AShooterPlayerController** ForPC);
	bool BPOverrideAllowStructureAccess(class AShooterPlayerController** ForPC, bool* bIsAccessAllowed);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StorageBox_ChristmasGift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
