#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveGeneric_SphereReflectionCapture_Blueprint2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveGeneric_SphereReflectionCapture_Blueprint2.CaveGeneric_SphereReflectionCapture_Blueprint2_C
// 0x0000 (0x0478 - 0x0478)
class ACaveGeneric_SphereReflectionCapture_Blueprint2_C : public ASphereReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveGeneric_SphereReflectionCapture_Blueprint2.CaveGeneric_SphereReflectionCapture_Blueprint2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CaveGeneric_SphereReflectionCapture_Blueprint2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
