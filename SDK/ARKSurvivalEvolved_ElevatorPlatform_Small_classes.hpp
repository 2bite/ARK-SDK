#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatform_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorPlatform_Small.ElevatorPlatform_Small_C
// 0x0000 (0x0B60 - 0x0B60)
class AElevatorPlatform_Small_C : public AElevatorPlatform_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorPlatform_Small.ElevatorPlatform_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElevatorPlatform_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
