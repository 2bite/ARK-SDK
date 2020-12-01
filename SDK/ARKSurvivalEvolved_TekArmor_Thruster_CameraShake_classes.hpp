#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmor_Thruster_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UTekArmor_Thruster_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekArmor_Thruster_CameraShake.TekArmor_Thruster_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_TekArmor_Thruster_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
