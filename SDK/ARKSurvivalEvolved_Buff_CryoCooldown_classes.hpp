#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CryoCooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CryoCooldown.Buff_CryoCooldown_C
// 0x0004 (0x0964 - 0x0960)
class ABuff_CryoCooldown_C : public ABuff_Base_C
{
public:
	float                                              TimeLeft;                                                 // 0x0960(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CryoCooldown.Buff_CryoCooldown_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void UpdateBuffPersistentData();
	void ReceiveBeginPlay();
	void STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void BuffTickServer(float* DeltaTime);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CryoCooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
