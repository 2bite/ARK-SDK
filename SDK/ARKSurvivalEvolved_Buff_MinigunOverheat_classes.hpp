#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MinigunOverheat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MinigunOverheat.Buff_MinigunOverheat_C
// 0x0004 (0x097C - 0x0978)
class ABuff_MinigunOverheat_C : public APrimalBuff
{
public:
	float                                              StaminaDrain;                                             // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MinigunOverheat.Buff_MinigunOverheat_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void UserConstructionScript();
	void StopStaminaDrain();
	void ExecuteUbergraph_Buff_MinigunOverheat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
