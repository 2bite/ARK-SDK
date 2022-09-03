#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_ZombieBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C
// 0x00BE (0x247E - 0x23C0)
class AWyvern_Character_BP_ZombieBase_C : public AWyvern_Character_BP_Base_C
{
public:
	struct FVector                                     NewFlyingOffset;                                          // 0x23C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x23CC(0x0004) MISSED OFFSET
	TArray<class FString>                              EventTags;                                                // 0x23D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                Temp_int_Variable;                                        // 0x23E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x23E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x23E5(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x23E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x23EC(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x23F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_Key;                                         // 0x23F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UJsonObject*                                 K2Node_Event_JsonData;                                    // 0x2400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWyvernAnimBlueprint_C*                      K2Node_DynamicCast_AsWyvernAnimBlueprint_C;               // 0x2408(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2410(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2411(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x2412(0x0006) MISSED OFFSET
	TArray<class FString>                              CallFunc_GetStringArrayField_OutValue;                    // 0x2418(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_GetStringArrayField_ReturnValue;                 // 0x2428(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x2429(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x242A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_GetAllActorsWithInterface_OutActors;             // 0x2430(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2440(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Array_Contains_ItemToFind_RefProperty;           // 0x2448(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x2458(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2459(0x0007) MISSED OFFSET
	TScriptInterface<class UModCommunication_Interface_C> K2Node_DynamicCast_AsModCommunication_Interface_C;        // 0x2460(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2470(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2471(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2478(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x247C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x247D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C");
		return ptr;
	}


	void RequestModData(const struct FName& Key, class UJsonObject** JsonData);
	void RequestModDataProcessing(const struct FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SendModData(const struct FName& Key, class UJsonObject* JsonData);
	void ExecuteUbergraph_Wyvern_Character_BP_ZombieBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
