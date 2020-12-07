#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorTrack_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorTrack_Base.ElevatorTrack_Base_C
// 0x0008 (0x0DE8 - 0x0DE0)
class AElevatorTrack_Base_C : public APrimalStructureElevatorTrack
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorTrack_Base.ElevatorTrack_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElevatorTrack_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
