#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Therizino_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Therizino_Character_BP.Therizino_Character_BP_C
// 0x00B4 (0x233C - 0x2288)
class ATherizino_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Therizino_C* DinoCharacterStatus_BP_Therizino_C1;                      // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TherizinoLevelUpsAvailable;                               // 0x2290(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2294(0x0004) MISSED OFFSET
	TArray<int>                                        HarvestResourceLevels;                                    // 0x2298(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	bool                                               bTestTherizino;                                           // 0x22A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x22A9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              CollectedResourceTypes;                                   // 0x22B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        CollectedResourceAmounts;                                 // 0x22C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              HarvestFocusStrings;                                      // 0x22D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      HarvestFocusValuesPerLevel;                               // 0x22E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      HarvestResourceLists;                                     // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastLevelUpAnimTime;                                      // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2301(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2304(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2309(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x230A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x230B(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x230C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue2;                     // 0x2310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2312(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2314(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2318(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2319(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x231C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x2320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Set_Item_RefProperty;                      // 0x2324(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2329(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Get_Item;                                  // 0x232C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2330(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_NewItem_RefProperty;                   // 0x2334(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	float                                              CallFunc_Array_Set_Item2_RefProperty;                     // 0x2338(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Therizino_Character_BP.Therizino_Character_BP_C");
		return ptr;
	}


	struct FName GetSocketForMeleeTraceForHitBlockers(int* AttackIndex);
	void Cap_Harvest_Stats();
	void BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut);
	float BPModifyHarvestDamage(class UPrimalHarvestingComponent** harvestComponent, float* inDamage);
	void Multiply_Items_by_Attack_Type(int InputPin);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void BPDoHarvestAttack(int* harvestIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void STATIC_SetClawAttackAnimByMovement(int Attack_index);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	float BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected);
	void GetCurrentHarvestLevel(int* Current_Level);
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Harvest_Multiplier_Level_Up(int UseEntryIndex);
	class FString MakeUseEntryString(int index);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void AddLevelUpEntries(TArray<struct FMultiUseEntry>* FullEntryList);
	void UserConstructionScript();
	void AnimNotify_HarvestEnd();
	void AnimNotify_PowerHarvestEnd();
	void PlayLevelUpAnim();
	void ReceiveBeginPlay();
	void BPResetClone();
	void ExecuteUbergraph_Therizino_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
