#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExtinctionDayCycle_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UExtinctionDayCycle_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExtinctionDayCycle_Interface.ExtinctionDayCycle_Interface_C");
		return ptr;
	}


	void GetVar_KKArenaAscenscionLoc(class AActor** SSPoint);
	void GetVar_DKArenaLoc(class AActor** Value);
	void GetVar_IsBossElectricalStormActive(bool* Value);
	void GetVar_KKArenaLoc(class AActor** ServerPoint);
	void GetVar_FKArenaLoc(class AActor** ServerPoint);
	void GetVar_IKArenaLoc(class AActor** ServerPoint);
	void SetVar_Boss_ElectricalStormActive(bool Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
