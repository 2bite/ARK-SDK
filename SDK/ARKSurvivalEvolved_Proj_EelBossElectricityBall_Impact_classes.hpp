#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Proj_EelBossElectricityBall_Impact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C
// 0x0000 (0x0518 - 0x0518)
class AProj_EelBossElectricityBall_Impact_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_EelBossElectricityBall_Impact.Proj_EelBossElectricityBall_Impact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Proj_EelBossElectricityBall_Impact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
