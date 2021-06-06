#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Sky_Sphere_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// 0x0000 (0x06C8 - 0x06C8)
class ABP_Sky_Sphere_C : public ABP_Sky_Sphere_ARK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Sky_Sphere(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
