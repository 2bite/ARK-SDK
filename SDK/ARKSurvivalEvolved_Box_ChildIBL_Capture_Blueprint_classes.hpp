#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Box_ChildIBL_Capture_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Box_ChildIBL_Capture_Blueprint.Box_ChildIBL_Capture_Blueprint_C
// 0x0000 (0x0470 - 0x0470)
class ABox_ChildIBL_Capture_Blueprint_C : public ABoxReflectionCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Box_ChildIBL_Capture_Blueprint.Box_ChildIBL_Capture_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Box_ChildIBL_Capture_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
