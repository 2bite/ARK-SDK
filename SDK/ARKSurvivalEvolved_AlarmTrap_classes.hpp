#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0008 (0x0BA0 - 0x0B98)
class AAlarmTrap_C : public APrimalStructureTripwire
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
