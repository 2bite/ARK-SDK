#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Moschops_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Moschops_Character_BP.Moschops_Character_BP_C
// 0x0134 (0x23BC - 0x2288)
class AMoschops_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Moschops_C* DinoCharacterStatus_BP_Moschops_C1;                       // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MoschLevelUpsAvailable;                                   // 0x2298(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x229C(0x0004) MISSED OFFSET
	TArray<struct FBPHarvestResourceMultiplier>        HarvestResourceTypes;                                     // 0x22A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        HarvestResourceLevels;                                    // 0x22B0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	bool                                               bTestMoschops;                                            // 0x22C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x22C1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              CollectedResourceTypes;                                   // 0x22C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CollectedResourceAmounts;                                 // 0x22D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RequiredTamingFoodIndex;                                  // 0x22E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22EC(0x0004) MISSED OFFSET
	class UClass*                                      RequiredTamingSettingsList;                               // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x22F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x22FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2301(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2304(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2308(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x230C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x230D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x230E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x230F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bWasJustTamed;                               // 0x2311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x2312(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x2318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UClass*>                              CallFunc_Get_Taming_Food_Item_List_Item;                  // 0x2320(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UPrimalDinoSettings*                         K2Node_DynamicCast_AsPrimalDinoSettings;                  // 0x2330(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2338(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2339(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x233C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x2340(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2344(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2345(0x0003) MISSED OFFSET
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x2348(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x234C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x2350(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Get_Item;                                  // 0x2354(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2358(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2359(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x235A(0x0006) MISSED OFFSET
	struct FBPHarvestResourceMultiplier                CallFunc_Array_Get_Item2;                                 // 0x2360(0x0010) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2370(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_IntFloat_ReturnValue;                   // 0x2374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Find_ReturnValue;                          // 0x2378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x237C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x2380(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2381(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Get_Item3;                                 // 0x2384(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_IntFloat_ReturnValue2;                  // 0x2388(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x238C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Get_Item4;                                 // 0x2390(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x2394(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Set_Item_RefProperty;                      // 0x2398(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x239C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_IntToString_ReturnValue;                    // 0x23A0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Max_ReturnValue;                                 // 0x23B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;     // 0x23B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_NewItem_RefProperty;                   // 0x23B8(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Moschops_Character_BP.Moschops_Character_BP_C");
		return ptr;
	}


	void CapHarvestStats();
	void Get_Taming_Food_Item_List(TArray<class UClass*>* Item);
	void BPUntamedConsumeFoodItem(class UPrimalItem** foodItem);
	void OnRep_RequiredTamingFoodIndex();
	bool BPShouldForceFlee();
	bool BPCanTargetCorpse();
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void BPDoHarvestAttack(int* harvestIndex);
	void Get_Current_Harvest_Level(int* Current_Level);
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut);
	void Harvest_Multiplier_Level_Up(int UseEntryIndex);
	class FString MakeUseEntryString(int index);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void Add_Level_Up_Entries(TArray<struct FMultiUseEntry>* FullEntryList);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void STATIC_UserConstructionScript();
	void AnimNotify_HarvestEnd();
	void ReceiveBeginPlay();
	void BPSetupTamed(bool* bWasJustTamed);
	void BPResetClone();
	void ExecuteUbergraph_Moschops_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
