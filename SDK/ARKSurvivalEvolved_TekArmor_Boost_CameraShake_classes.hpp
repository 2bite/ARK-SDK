#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekArmor_Boost_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekArmor_Boost_CameraShake.TekArmor_Boost_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UTekArmor_Boost_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekArmor_Boost_CameraShake.TekArmor_Boost_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_TekArmor_Boost_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
