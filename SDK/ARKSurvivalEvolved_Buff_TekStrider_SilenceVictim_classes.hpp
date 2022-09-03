#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekStrider_SilenceVictim_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C
// 0x006C (0x09E4 - 0x0978)
class ABuff_TekStrider_SilenceVictim_C : public APrimalBuff
{
public:
	class UParticleSystemComponent*                    single_toggle_cooldown_vfx;                               // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    cooldown_vfx;                                             // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SilenceDuration;                                          // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	double                                             SilenceStartTime;                                         // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuffImmunityTime;                                         // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SilenceTimeEnded;                                         // 0x099C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x099D(0x0003) MISSED OFFSET
	float                                              ConeLength;                                               // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class AActor*                                      Firing_Strider_Rider;                                     // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Should_Show_Deactivation_VFX;                             // 0x09B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09B1(0x0007) MISSED OFFSET
	class FString                                      id_of_player_who_initiated_the_buff;                      // 0x09B8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x09D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09D9(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x09DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_AddUnique_ReturnValue;                     // 0x09E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekStrider_SilenceVictim.Buff_TekStrider_SilenceVictim_C");
		return ptr;
	}


	bool HideBuffFromHUD();
	void BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void Delay_Update_Vfx();
	void BuffTickClient(float* DeltaTime);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	bool BPPreventflight();
	void BPActivated(class AActor** ForInstigator);
	void Update_whether_deactivate_VFX_should_be_seen_by_rider();
	void BuffTickServer(float* DeltaTime);
	bool BPPreventInstigatorAttack(int* AttackIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSilenceEnded();
	void toggle_invalid_particle();
	void ExecuteUbergraph_Buff_TekStrider_SilenceVictim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
