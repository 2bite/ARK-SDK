#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AlarmTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AlarmTrap.AlarmTrap_C
// 0x0008 (0x0BE8 - 0x0BE0)
class AAlarmTrap_C : public APrimalStructureTripwire
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AlarmTrap.AlarmTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AlarmTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
