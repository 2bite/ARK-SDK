#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorPlatform_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C
// 0x0000 (0x0BA8 - 0x0BA8)
class AWoodElevatorPlatform_Small_C : public AWoodElevatorPlatform_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WoodElevatorPlatform_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
