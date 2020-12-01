#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatfrom_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorPlatfrom_Large.ElevatorPlatfrom_Large_C
// 0x0000 (0x0B78 - 0x0B78)
class AElevatorPlatfrom_Large_C : public AElevatorPlatform_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorPlatfrom_Large.ElevatorPlatfrom_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElevatorPlatfrom_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
