#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Parachute_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Parachute.Buff_Parachute_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_Parachute_C : public APrimalBuff
{
public:
	class USkeletalMeshComponent*                      HarnessHF;                                                // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      HarnessHM;                                                // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ParachuteSK;                                              // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Parachute.Buff_Parachute_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Parachute(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
