#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PoisonTrap.PoisonTrap_C
// 0x0008 (0x0BE8 - 0x0BE0)
class APoisonTrap_C : public APrimalStructureTripwire
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PoisonTrap.PoisonTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PoisonTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
