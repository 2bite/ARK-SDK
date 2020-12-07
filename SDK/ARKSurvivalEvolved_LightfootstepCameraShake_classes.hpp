#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LightfootstepCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightfootstepCameraShake.LightfootstepCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class ULightfootstepCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightfootstepCameraShake.LightfootstepCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_LightfootstepCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
