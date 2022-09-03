#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderHacking_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_StriderHacking.Buff_StriderHacking_C
// 0x0060 (0x0D7C - 0x0D1C)
class ABuff_StriderHacking_C : public ABuff_StriderHackingParent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D1C(0x0004) MISSED OFFSET
	class AActor*                                      strider;                                                  // 0x0D20(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                successful_beat_hits;                                     // 0x0D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                required_successful_hits;                                 // 0x0D2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    hacking_success;                                          // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    on_hack_hit_miss;                                         // 0x0D40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    on_hack_hit_success;                                      // 0x0D50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UParticleSystem*                             hacking_particle_template;                                // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     initial_strider_location;                                 // 0x0D68(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_done_initial_input;                                   // 0x0D74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D75(0x0003) MISSED OFFSET
	int                                                successful_beat_hits_client;                              // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StriderHacking.Buff_StriderHacking_C");
		return ptr;
	}


	void Update_Buff_Timer_server_logic(bool* Success, bool* from_player_trigger);
	void UpdateBuffTimer(bool* Success, bool* from_player_trigger);
	void Recieved_Input(TEnumAsByte<EPrimalCharacterInputType>* input_type, bool* from_player_input);
	void Beat_Reached_The_End();
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void BuffTickServer(float* DeltaTime);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPOnInputEvent(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void UserConstructionScript();
	void do_hacking_vfx();
	void cancel_early();
	void ExecuteUbergraph_Buff_StriderHacking(int EntryPoint);
	void on_hack_hit_success__DelegateSignature();
	void on_hack_hit_miss__DelegateSignature();
	void Hacking_Success__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
