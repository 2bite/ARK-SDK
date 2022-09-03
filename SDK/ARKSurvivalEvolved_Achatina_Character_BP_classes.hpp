#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0033 (0x22BB - 0x2288)
class AAchatina_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    trail;                                                    // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Achatina_C* DinoCharacterStatus_BP_Achatina_C1;                       // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AchaSleepingDinoSettings;                                 // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x22A0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x22B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x22B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x22B9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x22BA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
