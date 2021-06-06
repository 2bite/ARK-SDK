#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatform_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElevatorPlatform_Base.ElevatorPlatform_Base_C
// 0x0018 (0x0BA8 - 0x0B90)
class AElevatorPlatform_Base_C : public APrimalStructureElevatorPlatform
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ElevatorLoopSound;                                        // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElevatorPlatform_Base.ElevatorPlatform_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElevatorPlatform_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
