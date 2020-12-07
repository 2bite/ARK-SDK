#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CustomIBL_Capture_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CustomIBL_Capture_Blueprint.CustomIBL_Capture_Blueprint_C
// 0x0000 (0x0490 - 0x0490)
class ACustomIBL_Capture_Blueprint_C : public AChildIBL_Capture_Blueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomIBL_Capture_Blueprint.CustomIBL_Capture_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CustomIBL_Capture_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
