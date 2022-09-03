#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungBeetle_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DungBeetle_Character_BP.DungBeetle_Character_BP_C
// 0x0031 (0x22B9 - 0x2288)
class ADungBeetle_Character_BP_C : public ADino_Character_BP_RepelType_C
{
public:
	class UDinoCharacterStatusComponent_BP_Beetle_C*   DinoCharacterStatus_BP_Beetle_C1;                         // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2290(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x22A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x22A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x22A9(0x0007) MISSED OFFSET
	class UDinoTamedInventoryComponent_Beetle_C*       K2Node_DynamicCast_AsDinoTamedInventoryComponent_Beetle_C;// 0x22B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x22B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DungBeetle_Character_BP.DungBeetle_Character_BP_C");
		return ptr;
	}


	void BPCharacterSleeped();
	void BPCharacterUnsleeped();
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void ExecuteUbergraph_DungBeetle_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
