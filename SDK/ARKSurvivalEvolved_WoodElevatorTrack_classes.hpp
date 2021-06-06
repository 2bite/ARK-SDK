#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorTrack_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WoodElevatorTrack.WoodElevatorTrack_C
// 0x0008 (0x0E20 - 0x0E18)
class AWoodElevatorTrack_C : public APrimalStructureElevatorTrack
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WoodElevatorTrack.WoodElevatorTrack_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WoodElevatorTrack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
