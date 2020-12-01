#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Achatina_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Achatina_Character_BP.Achatina_Character_BP_C
// 0x0033 (0x20BB - 0x2088)
class AAchatina_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    Trail;                                                    // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Achatina_C* DinoCharacterStatus_BP_Achatina_C1;                       // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AchaSleepingDinoSettings;                                 // 0x2098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x20A0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x20B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x20B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x20B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x20BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Achatina_Character_BP.Achatina_Character_BP_C");
		return ptr;
	}


	void BPDinoARKDownloadedBegin();
	void BPCharacterUnsleeped();
	void BPCharacterSleeped();
	void BPOnMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode);
	void BPTimerNonDedicated();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void ExecuteUbergraph_Achatina_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif