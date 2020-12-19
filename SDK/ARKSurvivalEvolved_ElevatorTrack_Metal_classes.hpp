#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorTrack_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorTrack_Metal.ElevatorTrack_Metal_C
// 0x0000 (0x0DE8 - 0x0DE8)
class AElevatorTrack_Metal_C : public AElevatorTrack_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorTrack_Metal.ElevatorTrack_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElevatorTrack_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
