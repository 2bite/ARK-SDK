#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Otter_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Otter_Character_BP.Otter_Character_BP_C
// 0x00B0 (0x2248 - 0x2198)
class AOtter_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UParticleSystemComponent*                    BlackParticle;                                            // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WhiteParticle;                                            // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        pearlMesh;                                                // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Otter_C*    DinoCharacterStatus_BP_Otter_C1;                          // 0x21B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             TimeOfLastFeeding;                                        // 0x21B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ValidTamingClasses;                                       // 0x21C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FoodToGivePerFeeding;                                     // 0x21D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21D4(0x0004) MISSED OFFSET
	TArray<float>                                      AffinityPercentToGive;                                    // 0x21D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      WeightToGetItemAtIndex;                                   // 0x21E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ItemToGive;                                               // 0x21F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APawn*                                       LastPlayerToOrder;                                        // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BackToOwnerRadius;                                        // 0x2210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMode;                                              // 0x2214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PearlToShow;                                              // 0x2218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceToGiveExtraBlackPearl;                              // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RecievedAPearl;                                           // 0x2220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2221(0x0003) MISSED OFFSET
	float                                              SphereTraceRad;                                           // 0x2224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                K2Node_CustomEvent_switchIndex;                           // 0x2228(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x222C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x222D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x222E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x222F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_SelectObject_ReturnValue;                        // 0x2230(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_DynamicCast_AsAnimMontage;                         // 0x2238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2241(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2244(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Otter_Character_BP.Otter_Character_BP_C");
		return ptr;
	}


	void BPSetupTamed(bool* bWasJustTamed);
	void STATIC_OnLaunched(struct FVector* LaunchVelocity, bool* bXYOverride, bool* bZOverride);
	void BPTimerServer();
	void OnOwnerReached();
	void Returning_To_Owner_Actions();
	void Set_Last_Player_Order(class APawn* Player);
	void GetOwnerCharacter(class APawn** Owner);
	void ReturnToPlayer();
	void SelectPearl(bool* GotAPearl, int* IndexOfSelectedItem);
	void AttemptToGetAPearl(bool* ObtainedAPearl);
	void IsCharacterAFish(class APrimalCharacter* Character, bool* IsValid, int* index);
	void BPKilledSomethingEvent(class APrimalCharacter** killedTarget);
	void EatPlayersCarriedFood(class APrimalCharacter* Player);
	void Init();
	void IsCarriedFishValid(class APrimalCharacter* Player, bool* IsValid, int* index);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AnimNotify_ShowPearl();
	void MulticastPlayShowPearl(int switchIndex);
	void ExecuteUbergraph_Otter_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
