#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapRifleTracerRound_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapRifleTracerRound.WeapRifleTracerRound_C
// 0x0004 (0x0DCC - 0x0DC8)
class AWeapRifleTracerRound_C : public AShooterWeapon_Instant
{
public:
	int                                                RoundsFiredFromClip;                                      // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifleTracerRound.WeapRifleTracerRound_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRifleTracerRound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
