#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Elemental_Disturbance_Sphere_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Elemental_Disturbance_Sphere.Elemental_Disturbance_Sphere_C
// 0x0000 (0x0488 - 0x0488)
class AElemental_Disturbance_Sphere_C : public AAmbientSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Elemental_Disturbance_Sphere.Elemental_Disturbance_Sphere_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Elemental_Disturbance_Sphere(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
