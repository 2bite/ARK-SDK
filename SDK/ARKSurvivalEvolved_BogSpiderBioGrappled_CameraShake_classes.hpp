#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpiderBioGrappled_CameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpiderBioGrappled_CameraShake.BogSpiderBioGrappled_CameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UBogSpiderBioGrappled_CameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpiderBioGrappled_CameraShake.BogSpiderBioGrappled_CameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_BogSpiderBioGrappled_CameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
