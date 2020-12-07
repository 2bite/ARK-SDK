#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x00BE (0x237E - 0x22C0)
class AWyvern_Character_BP_ZombieBase_C : public AWyvern_Character_BP_Base_C
{
public:
	struct FVector                                     NewFlyingOffset;                                          // 0x22C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x22CC(0x0004) MISSED OFFSET
	TArray<class FString>                              EventTags;                                                // 0x22D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	int                                                Temp_int_Variable;                                        // 0x22E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x22E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x22E5(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x22E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22EC(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x22F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_Key;                                         // 0x22F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UJsonObject*                                 K2Node_Event_JsonData;                                    // 0x2300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWyvernAnimBlueprint_C*                      K2Node_DynamicCast_AsWyvernAnimBlueprint_C;               // 0x2308(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2311(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x2312(0x0006) MISSED OFFSET
	TArray<class FString>                              CallFunc_GetStringArrayField_OutValue;                    // 0x2318(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_GetStringArrayField_ReturnValue;                 // 0x2328(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x2329(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x232A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_GetAllActorsWithInterface_OutActors;             // 0x2330(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x2340(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Array_Contains_ItemToFind_RefProperty;           // 0x2348(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	bool                                               CallFunc_Array_Contains_ReturnValue;                      // 0x2358(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2359(0x0007) MISSED OFFSET
	TScriptInterface<class UModCommunication_Interface_C> K2Node_DynamicCast_AsModCommunication_Interface_C;        // 0x2360(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2370(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2371(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2374(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2378(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x237C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x237D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
