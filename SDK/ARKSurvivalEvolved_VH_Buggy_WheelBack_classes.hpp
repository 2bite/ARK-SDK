#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_VH_Buggy_WheelBack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VH_Buggy_WheelBack.VH_Buggy_WheelBack_C
// 0x0000 (0x00E0 - 0x00E0)
class UVH_Buggy_WheelBack_C : public UVehicleWheel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VH_Buggy_WheelBack.VH_Buggy_WheelBack_C");
		return ptr;
	}


	void ExecuteUbergraph_VH_Buggy_WheelBack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
