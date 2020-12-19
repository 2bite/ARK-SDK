#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_WheelFront_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VH_Buggy_WheelFront.VH_Buggy_WheelFront_C
// 0x0000 (0x00E0 - 0x00E0)
class UVH_Buggy_WheelFront_C : public UVehicleWheel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VH_Buggy_WheelFront.VH_Buggy_WheelFront_C");
		return ptr;
	}


	void ExecuteUbergraph_VH_Buggy_WheelFront(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
