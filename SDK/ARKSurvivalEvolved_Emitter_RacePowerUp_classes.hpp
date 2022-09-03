#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_RacePowerUp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_RacePowerUp.Emitter_RacePowerUp_C
// 0x0008 (0x0520 - 0x0518)
class AEmitter_RacePowerUp_C : public APrimalEmitterSpawnable
{
public:
	int                                                TriggerOrder;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CustomDataInt;                                            // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_RacePowerUp.Emitter_RacePowerUp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_RacePowerUp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
