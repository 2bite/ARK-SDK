#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C
// 0x0004 (0x0C0C - 0x0C08)
class ABuff_DinoTekHelmet_RockDrake_C : public ABuff_DinoTekHelmet_Base_C
{
public:
	float                                              SocketClampDeltaClimbing;                                 // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoTekHelmet_RockDrake.Buff_DinoTekHelmet_RockDrake_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void GetSocketClampDelta(float* OutSocketClampDelta);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoTekHelmet_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
