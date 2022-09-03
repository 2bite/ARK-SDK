#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBola_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBola.WeapBola_C
// 0x0018 (0x0EB8 - 0x0EA0)
class AWeapBola_C : public APrimalWeaponGrenade
{
public:
	float                                              ThrowLoopSpeedMin;                                        // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowLoopSpeedMax;                                        // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowProjectileSpeedMin;                                  // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowProjectileSpeedMax;                                  // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowCookTimeMax;                                         // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinThrowCookingTime;                                      // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBola.WeapBola_C");
		return ptr;
	}


	bool BPWeaponCanFire();
	float BPGetProjectileSpeed();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapBola(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
