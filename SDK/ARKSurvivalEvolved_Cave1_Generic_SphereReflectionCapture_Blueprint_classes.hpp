#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cave1_Generic_SphereReflectionCapture_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cave1_Generic_SphereReflectionCapture_Blueprint.Cave1_Generic_SphereReflectionCapture_Blueprint_C
// 0x0000 (0x0478 - 0x0478)
class ACave1_Generic_SphereReflectionCapture_Blueprint_C : public ACaveGeneric_SphereReflectionCapture_Blueprint2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cave1_Generic_SphereReflectionCapture_Blueprint.Cave1_Generic_SphereReflectionCapture_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Cave1_Generic_SphereReflectionCapture_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
