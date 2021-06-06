#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_LoadoutDummy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_LoadoutDummy.Structure_LoadoutDummy_C
// 0x0050 (0x0FA6 - 0x0F56)
class AStructure_LoadoutDummy_C : public AStructure_TrainingDummy_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0F56(0x0002) MISSED OFFSET
	class UStaticMeshComponent*                        MyExtraStaticMesh;                                        // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        Swap_Colors;                                              // 0x0F60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AStructure_LoadoutDummy_Hotbar_C*            ServerHotbar;                                             // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                HotbarID;                                                 // 0x0F78(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0F7C(0x0004) MISSED OFFSET
	double                                             LastInventoryFunctionUseTime;                             // 0x0F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               IgnoreTransferCustomTags;                                 // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HotbarOffsetDistance;                                     // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHotbarFillOverridesItems;                                // 0x0F9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F9D(0x0003) MISSED OFFSET
	int                                                CurrentDefaultEInt;                                       // 0x0FA0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        K2Node_Event_EndPlayReason;                               // 0x0FA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0FA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_LoadoutDummy.Structure_LoadoutDummy_C");
		return ptr;
	}


	void SetHotbarCurrentHealth();
	void ReceiveDestroyed();
	void BPPlacedStructure(class APlayerController** ForPC);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void SetTextRendererColor();
	void OnRep_HotbarID();
	void STATIC_CreateHotbarStructure(class APlayerController* PC);
	void Fill_Dummy_Everything(class APlayerController* PC);
	void Fill_Character_Everything(class APlayerController* PC);
	void Fill_Dummy_Inventory(class APlayerController* PC);
	void Fill_Character_Inventory(class APlayerController* PC);
	void Swap_Everything(class APlayerController* PC);
	void Swap_All_Inventory(class APlayerController* PC);
	void Swap_All_Hotbar(class APlayerController* PC);
	void Fill_Dummy_Hotbar(class APlayerController* PC);
	void Fill_Character_Hotbar(class APlayerController* PC);
	void Fill_Dummy_Equipment(class APlayerController* PC);
	void Fill_Character_Equipment(class APlayerController* PC);
	void SwapAllEquipment(class APlayerController* PC);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Structure_LoadoutDummy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
